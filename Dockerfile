FROM alpine:3.18

RUN apk update && apk add --no-cache \
    gcc \
    libc-dev \
    libcurl4-openssl-dev \
    && rm -rf /var/cache/apk/*

WORKDIR /app
COPY . /app/
RUN gcc -o home home.c

CMD ["./home"]
