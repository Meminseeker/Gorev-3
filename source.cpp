#include <iostream>
#include <vector>

template <class T>
std::vector<std::vector<T>> create_matrix(T x, int row, int column){
    std::vector<T> rowMatrice;
    for (int i=0; i<column; i++){
        rowMatrice.push_back(x);
    }

    std::vector<std::vector<T>> fullMatrice;
    for (int i=0; i<row; i++){
        fullMatrice.push_back(rowMatrice);
    }

//    for (int i=0; i<fullMatrice.size(); i++){
//        std::cout << "[ ";
//        for (int j=0; j<fullMatrice[i].size(); j++){
//            std::cout << fullMatrice[i][j] << " ";
//        }
//        std::cout << "]" << std::endl;
//    }

    return fullMatrice;
}

//int main(){
//    std::string x; std::cin >> x;
//    int row; std::cin >> row;
//    int column; std::cin >> column;
//
//    create_matrix(x, row, column);
//
//    return 0;
//}