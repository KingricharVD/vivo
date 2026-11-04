import ctypes
from pathlib import Path

_LIB_PATH = Path(__file__).resolve().with_name(
    "libvivo_neoscrypt.so"
)

_lib = ctypes.CDLL(str(_LIB_PATH))

_lib.neoscrypt.argtypes = (
    ctypes.POINTER(ctypes.c_ubyte),
    ctypes.POINTER(ctypes.c_ubyte),
    ctypes.c_uint,
)
_lib.neoscrypt.restype = None


def getPoWHash(header: bytes) -> bytes:
    """VIVO consensus NeoScrypt digest, raw uint256 bytes."""
    if not isinstance(header, bytes):
        raise TypeError("header must be bytes")
    if len(header) != 80:
        raise ValueError("VIVO header must be exactly 80 bytes")

    inp = (ctypes.c_ubyte * 80).from_buffer_copy(header)
    out = (ctypes.c_ubyte * 32)()

    _lib.neoscrypt(inp, out, 0)
    return bytes(out)
