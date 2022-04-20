all: main

#verify opencv installation directory by running on your own terminal: pkg-config --cflags opencv4
#g++ main.cpp -L/usr/local/lib -lopencv_imgcodecs -o main -I/usr/local/include/opencv4 !!!error!!!

#!!!don't forget to add openCV LibraryS and Include in compiling g++!!!
main:
	g++ main.cpp -L/usr/local/lib -lopencv_core -lopencv_imgcodecs -lopencv_imgproc -o main -I/usr/local/include/opencv4

clean:
	-rm main
	-rm ./data/result/*.jpg

run:
	-./main