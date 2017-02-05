#include <iostream>
#include "reading.cpp"
#include "evaluate.cpp"
//#include "matrix.cpp"
#include "nn.cpp"

using namespace std;


int main() {
    Matrix images, labels;
    read_data("data/train.csv", images, labels);
//    print_image(images[0]);

    NeuralNetwork net;
    auto history = net.train(images, labels, 10, 100, .1);
    print(history);
}
