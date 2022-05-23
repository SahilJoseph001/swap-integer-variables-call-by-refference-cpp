// *** Coded By SahilJoseph *** //
# include <iostream>

void swap(int* a, int* b) {

    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(int argc, char const *argv[]) {

    while (true) {

        int a;
        int b;

        std::cout<<"Enter the value of a : ";
        std::cin>>a;
        std::cout<<"Enter the value of b : ";
        std::cin>>b;

        std::cout<<"The value of a before swap is : "<<a<<std::endl;
        std::cout<<"The value of b before swap is : "<<b<<std::endl;
        swap(&a, &b);
        std::cout<<"The value of a after swap is : "<<a<<std::endl;
        std::cout<<"The value of b after swap is : "<<b<<std::endl;

        int q;
        std::cout<<"Type 0 for Quit or Press any other key to Continue : ";
        std::cin>>q;

        if (q == 0) {
            break;
        }

        std::cout<<"******************"<<std::endl;
        std::cout<<"  **************  "<<std::endl;
        std::cout<<"    **********    "<<std::endl;

    }

    return 0;
}
