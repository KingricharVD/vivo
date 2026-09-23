FROM phusion/baseimage:jammy-1.0.4
LABEL maintainer="Vivo Developers <dev@vivo.org>"
LABEL description="Dockerised VivoCore, built from CI"

ARG USER_ID
ARG GROUP_ID

ENV HOME="/home/vivo"

# add user with specified (or default) user/group ids
ENV USER_ID="${USER_ID:-1000}"
ENV GROUP_ID="${GROUP_ID:-1000}"
RUN groupadd -g ${GROUP_ID} vivo && \
    useradd -u ${USER_ID} -g vivo -s /bin/bash -m -d /home/vivo vivo && \
    mkdir /home/vivo/.vivocore && \
    chown ${USER_ID}:${GROUP_ID} -R /home/vivo

COPY bin/* /usr/local/bin/

RUN chmod a+x /usr/local/bin/*

USER vivo

VOLUME ["/home/vivo"]

EXPOSE 9998 9999 19998 19999

WORKDIR /home/vivo
