// Cecil Dosoo
// 1121730

#include <iostream>
#include <iomanip>
using namespace std;

int ava_curr(){
    int input;
    cout << "\nAvailable currencies to convert from US Dollar (USD)" << endl;
    cout << "[1] Japanese Yen (JPY)" << endl;
    cout << "[2] Mexican Peso (MXN)" << endl;
    cout << "[3] Indian Rupee (INR)" << endl;
    cout << "[4] British Pound Sterling (GBP)" << endl;
    cout << "[0] Quit" << endl;
    cout << "Select an option (0 to 4): " << endl;
    cin >> input;
    return input;
}

double trans_cost(double usd){
    double total;
    if (usd <= 100){
        total = usd + 5.98;
    }
    else if (usd <= 3000){
        total = usd + 9.99;
    }
    else if (usd > 3000){
        total = usd + 19.95;
    }
    return total;
}

double curr_conv(double amount, int option ){
    double total;
    if (option == 1){
        total = amount * 146.56;
    }
    else if (option == 2){
        total = amount * 17.18;
    }
    else if (option == 3){
        total = amount * 82.72;
    }
    else if (option == 4){
        total = amount * 0.79;
    }
    return total;
}

int main(){
    double amount;
    int user_option;
    user_option = ava_curr();
    while (user_option != 0){
        cout << "Enter USD amount:" << endl;
        cin >> amount;
        cout << fixed << setprecision(2);
        cout << "Amount due: " << trans_cost(amount) << " USD" << endl;
        cout << "Amount received: " << curr_conv(amount,user_option) << " ";

        if(user_option == 1){
            cout << "JPY" << endl;
        }
        else if (user_option == 2){
            cout << "MXN" << endl;
        }
        else if (user_option == 3){
            cout << "INR" << endl;
        }
        else if (user_option == 4){
            cout << "GBP" << endl;
        }

        ava_curr();
    }

    return 0;
}