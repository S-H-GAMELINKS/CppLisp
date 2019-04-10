FROM gcc:latest
COPY . /cpplisp
WORKDIR /cpplisp
RUN g++ main.cpp -std=c++17 -pthread
CMD ["./a.out"]