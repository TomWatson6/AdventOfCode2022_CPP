FROM gcc:latest
COPY ./Day1 /usr/src/myapp
WORKDIR /usr/src/myapp
RUN g++ -o myapp main.cpp
CMD ["./myapp"]