# [Project-CX](https://github.com/Ashu-45/Project-CX)

Project-CX is a C-based project that includes several tools for:
- 
- Matrix calculations
- EMI calculations
- Some utilities for coders

The project is designed to run using Docker, with the necessary dependencies and setup already included in the Dockerfile.

## Prerequisites

Before you begin, make sure you have **Docker** installed on your system. Docker is required to run the project in a container. This project supports the following operating systems:

- **Windows**
- **Linux**
- **macOS**

### Docker Installation

#### On Windows:
1. Download and install [Docker Desktop](https://www.docker.com/products/docker-desktop/).
2. Follow the installation instructions provided on the Docker website.

#### On Linux:
1. Install Docker using your package manager. For example, on Ubuntu, run:
 ```
sudo apt update
sudo apt install docker.io git -y
git clone https://github.com/Ashu-45/Project-CX.git
cd Project-CX
sudo docker build -t ashu .
sudo docker run -it --rm ashu
```
#### On GitHub Codespaces:
[![Open in GitHub Codespaces](https://github.com/codespaces/badge.svg)](https://codespaces.new/Ashu-45/Project-CX?quickstart=1)

## Project File Structure

Here’s the file structure of the project:
```
.
├── Dockerfile
├── home.c
├── LICENSE
├── pkg
│   ├── calculator_v1.0.c
│   ├── lib
│   │   ├── ashu.h
│   │   └── color.h
│   └── matrix-calculator_v1.0.c
└── README.md
```

