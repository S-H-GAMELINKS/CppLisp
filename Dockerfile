FROM ubuntu:latest
COPY . /cpplisp
WORKDIR /cpplisp
EXPOSE 3000
RUN apt update -y
RUN apt upgrade -y
RUN apt install g++ build-essential libreadline-dev -y
RUN g++ main.cpp -std=c++17 -pthread -lreadline
CMD ["./a.out"]