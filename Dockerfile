FROM ubuntu:24.04

RUN apt update && apt-get install -y \
    gcc \
    libc6-dev \
    libcurl4-openssl-dev \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app
COPY . /app/
RUN gcc -o home home.c

CMD ["./home"]
