FROM ubuntu:24.04

RUN apt update && apk add --no-cache \
    gcc \
    libc-dev \
    libcurl4-openssl-dev \
    && rm -rf /var/cache/apk/*

WORKDIR /app
COPY . /app/
RUN gcc -o home home.c

CMD ["./home"]
