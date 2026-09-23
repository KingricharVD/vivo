file(GLOB HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/../include/vivobls/*.hpp)
source_group("SrcHeaders" FILES ${HEADERS})

add_library(vivobls
  ${HEADERS}
  ${CMAKE_CURRENT_SOURCE_DIR}/privatekey.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/bls.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/chaincode.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/elements.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/extendedprivatekey.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/extendedpublickey.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/legacy.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/schemes.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/threshold.cpp)

target_include_directories(vivobls
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    $<$<BOOL:${GMP_FOUND}>:${GMP_INCLUDES}>
    ${CMAKE_CURRENT_SOURCE_DIR}/../include/vivobls
    ${CMAKE_CURRENT_SOURCE_DIR}/../depends/mimalloc/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../depends/relic/include
    ${CMAKE_CURRENT_BINARY_DIR}/../depends/relic/include
)

target_compile_definitions(vivobls
  PRIVATE
    BLSALLOC_MIMALLOC=1
)

target_link_libraries(vivobls
  PUBLIC
    relic_s
    mimalloc-static
)

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../depends/relic/include/ DESTINATION include/vivobls)
install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/../depends/relic/include/ DESTINATION include/vivobls)
install(FILES ${HEADERS} DESTINATION include/vivobls)
install(FILES $<TARGET_FILE:vivobls> DESTINATION lib)

if(BUILD_BLS_TESTS)
  include(${CMAKE_CURRENT_SOURCE_DIR}/../depends/catch2/CMakeLists.txt)

  add_executable(runtest test.cpp)
  target_link_libraries(runtest
                        PRIVATE vivobls
                        PRIVATE catch2)

  if(EMSCRIPTEN)
    target_link_options(runtest PRIVATE "SHELL:-s MALLOC=emmalloc")
    if(CMAKE_BUILD_TYPE MATCHES "Debug")
      target_link_options(runtest PRIVATE "SHELL:-s ASSERTIONS=2")
    endif()
  endif()
endif()

if(BUILD_BLS_BENCHMARKS)
  add_executable(runbench test-bench.cpp)
  target_link_libraries(runbench PRIVATE vivobls)

  if(EMSCRIPTEN)
    target_link_options(runbench PRIVATE "SHELL:-s MALLOC=emmalloc")
    if(CMAKE_BUILD_TYPE MATCHES "Debug")
      target_link_options(runbench PRIVATE "SHELL:-s ASSERTIONS=2")
    endif()
  endif()
endif()
