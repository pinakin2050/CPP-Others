#include<iostream>

int main(){
    int rating=0;
    std::cout << "Please enter rating between 1 to 5: ";
    std::cin >> rating;

    switch(rating)
    {
        case 1: std::cout << "Your rating is 1. We will try our best for improvement.";
                break;

        case 2: std::cout << "Your rating is 2. We will try our best.";
                break;

        case 3: std::cout << "Your rating is 3. We will improve.";
                break;

        case 4: std::cout << "Your rating is 4. Thanks.";
                break;

        case 5: std::cout << "Your rating is 5. Thanks a lot!";
                break;

        default: std::cout << "Please enter rating between 1 to 5.";

    }

    return 0;
}
