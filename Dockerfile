FROM gcc:latest
COPY . /cpplisp
WORKDIR /cpplisp
EXPOSE 3000
RUN g++ main.cpp -std=c++17 -pthread
CMD ["./a.out"]