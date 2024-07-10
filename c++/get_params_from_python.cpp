#include <iostream>

int main(int argc, char* argv[]){

    if (argc !=5){
        std::cerr<<"Usage: "<< argv[0]<<"<insv1> <insv2> <lrv> <output_folder>"<<std::endl;
        return -1;
    }

    std::string str1 = argv[1];
    std::string str2 = argv[2];
    std::string str3 = argv[3];

    std::cout<<"str1 "<<str1<<std::endl; 
    std::cout<<"str2 "<<str2<<std::endl; 
    std::cout<<"str3 "<<str3<<std::endl; 
    return 0;
}