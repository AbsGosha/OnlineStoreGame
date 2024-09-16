#include <iostream>
using namespace std;
void showMenu() {
    for (int column = 0; column < 52; ++column)
    {
        cout << "*";
    }
    cout << "\n";
    cout << "\t""Welcome to shop << PLAY GAME >> !!! \t\t";
    for (int row = 0; row < 10; ++row)
    {
        cout << "*";
        for (int column = 0; column < 50; ++column)
        {
            cout << " ";
        }
        cout << "*\n";
    }
}
void showAssortment()
{
    cout << "In our store you can find games for every taste! \nWe have both board games and games for consoles (discs)";
    cout << endl;
    cout << endl;
    cout << "Assortment of board games: \n-Monopoly \n-Jenga \n-Chess \n-Checkers";
    cout << endl;
    cout << endl;
    cout << "Assortment of video games: \n-Football \n-Hockey \n-Fighting \n-Racing";
    cout << endl;
}
void detailsBoardGames()
{
    cout << "Individual product card of board Games: \n";
    cout << "\nMonopoly\nIndividual number - 1\nAvailable in stock: Yes\nPrice: 500.00 rubles\n";
    for (int i = 0; i < 25; i++) {
        cout << "-";
    }
    cout << "\nJenga\nIndividual number - 2\nAvailable in stock: Yes\nPrice: 250.00 rubles\n";
    for (int i = 0; i < 25; i++) {
        cout << "-";
    }
    cout << "\nChess\nIndividual number - 3\nAvailable in stock: Yes\nPrice: 200.00 rubles\n";
    for (int i = 0; i < 25; i++) {
        cout << "-";
    }
    cout << "\nCheckers\nIndividual number - 4\nAvailable in stock: Yes\nPrice: 150.00 rubles\n";
    for (int i = 0; i < 25; i++) {
        cout << "-";
    }
    cout << endl;
    cout << endl;
    cout << "Individual product card of video games: \n";
    cout << "\nFootball\nIndividual number - 5\nAvailable in stock: Yes\nPrice: 1500.00 rubles\n";
    for (int i = 0; i < 25; i++) {
        cout << "-";
    }
    cout << "\nHockey\nIndividual number - 6\nAvailable in stock: Yes\nPrice: 1000.00 rubles\n";
    for (int i = 0; i < 25; i++) {
        cout << "-";
    }
    cout << "\nFighting\nIndividual number - 7\nAvailable in stock: Yes\nPrice: 2000.00 rubles\n";
    for (int i = 0; i < 25; i++) {
        cout << "-";
    }
    cout << "\nRacing\nIndividual number - 8\nAvailable in stock: Yes\nPrice: 1900.00 rubles\n";
    for (int i = 0; i < 25; i++) {
        cout << "-";
    }
    cout << endl;
}
void discountForMonopoly()
{
    int discount;
    cout << "If you have a discount card, enter 1, if you do not have one, enter 0\n";
    cin >> discount;
    switch (discount) {
    case 1:
        cout << "450 rubles - the price of a monopoly with a discount";
    }
    cout << endl;

}
void discountForJenga()
{
    int discount;
    cout << "If you have a discount card, enter 1, if you do not have one, enter 0\n";
    cin >> discount;
    switch (discount) {
    case 1:
        cout << "225 rubles - the price of a jenga with a discount";
    }
}
void discountForChess()
{
    int discount;
    cout << "If you have a discount card, enter 1, if you do not have one, enter 0\n";
    cin >> discount;
    switch (discount) {
    case 1:
        cout << "180 rubles - the price of a chess with a discount";
    }
}
void discountForCheckers()
{
    int discount;
    cout << "If you have a discount card, enter 1, if you do not have one, enter 0\n";
    cin >> discount;
    switch (discount) {
    case 1:
        cout << "135 rubles - the price of a checkers with a discount";
    }
}
void discountForFootball() {
    int discount;
    cout << "If you have a discount card, enter 1, if you do not have one, enter 0\n";
    cin >> discount;
    switch (discount) {
    case 1:
        cout << "1350 rubles - the price of a football with a discount";
    }
}
void discountForHockey()
{
    int discount;
    cout << "If you have a discount card, enter 1, if you do not have one, enter 0\n";
    cin >> discount;
    switch (discount) {
    case 1:
        cout << "900 rubles - the price of a hockey with a discount";
    }
}
void discountForFighting()
{
    int discount;
    cout << "If you have a discount card, enter 1, if you do not have one, enter 0\n";
    cin >> discount;
    switch (discount) {
    case 1:
        cout << "1800 rubles - the price of a fighting with a discount";
    }
}
void discountForRacing()
{
    int discount;
    cout << "If you have a discount card, enter 1, if you do not have one, enter 0\n";
    cin >> discount;
    switch (discount) {
    case 1:
        cout << "1710 rubles - the price of a racing with a discount";
    }
}
void twoProduct()
{
    int basket[2];
    for (int i = 0; i < 2; i++) {
        cout << "Please, enter the price of the product: ";
        cin >> basket[i];
    }
    cout << endl;
    int discount;
    cout << "If you have a discount card, enter 1, if you do not have one, enter 0\n";
    cin >> discount;
    switch (discount) {
    case 0:
        cout << "The total amount is: " << basket[0] + basket[1] << " rubles";
        break;
    case 1:
        int dis = (basket[0] + basket[1]) * 15 / 100;
        cout << "The total amount is: " << (basket[0] + basket[1]) - dis << " rubles";
    }
    /*for (int i = 0; i < 2; i++) {
        cout << arr[0] + arr[1];
    }*/
}
void threeProduct()
{
    int basket[3];
    for (int i = 0; i < 3; i++) {
        cout << "Please, enter the price of the product: ";
        cin >> basket[i];
    }
    cout << endl;
    int discount;
    cout << "If you have a discount card, enter 1, if you do not have one, enter 0\n";
    cin >> discount;
    switch (discount) {
    case 0:
        cout << "The total amount is: " << basket[0] + basket[1] + basket[2] << " rubles";
        break;
    case 1:
        int dis = (basket[0] + basket[1] + basket[2]) * 15 / 100;
        cout << "The total amount is: " << (basket[0] + basket[1] + basket[2]) - dis << " rubles";
    }
}
void fourProduct()
{
    int basket[4];
    for (int i = 0; i < 4; i++) {
        cout << "Please, enter the price of the product: ";
        cin >> basket[i];
    }
    cout << endl;
    int discount;
    cout << "If you have a discount card, enter 1, if you do not have one, enter 0\n";
    cin >> discount;
    switch (discount) {
    case 0:
        cout << "The total amount is: " << basket[0] + basket[1] + basket[2] + basket[3] << " rubles";
        break;
    case 1:
        int dis = (basket[0] + basket[1] + basket[2] + basket[3]) * 15 / 100;
        cout << "The total amount is: " << (basket[0] + basket[1] + basket[2] + basket[3]) - dis << " rubles";
    }
}
void fiveProduct()
{
    int basket[5];
    for (int i = 0; i < 5; i++) {
        cout << "Please, enter the price of the product: ";
        cin >> basket[i];
    }
    cout << endl;
    int discount;
    cout << "If you have a discount card, enter 1, if you do not have one, enter 0\n";
    cin >> discount;
    switch (discount) {
    case 0:
        cout << "The total amount is: " << basket[0] + basket[1] + basket[2] + basket[3] + basket[4] << " rubles";
        break;
    case 1:
        int dis = (basket[0] + basket[1] + basket[2] + basket[3] + basket[4]) * 15 / 100;
        cout << "The total amount is : " << (basket[0] + basket[1] + basket[2] + basket[3] + basket[4]) - dis << " rubles";
    }
}
void sixProduct()
{
    int basket[6];
    for (int i = 0; i < 6; i++) {
        cout << "Please, enter the price of the product: ";
        cin >> basket[i];
    }
    cout << endl;
    int discount;
    cout << "If you have a discount card, enter 1, if you do not have one, enter 0\n";
    cin >> discount;
    switch (discount) {
    case 0:
        cout << "The total amount is: " << basket[0] + basket[1] + basket[2] + basket[3] + basket[4] + basket[5] << " rubles";
        break;
    case 1:
        int dis = (basket[0] + basket[1] + basket[2] + basket[3] + basket[4] + basket[5]) * 15 / 100;
        cout << "The total amount is: " << (basket[0] + basket[1] + basket[2] + basket[3] + basket[4] + basket[5]) - dis << " rubles";
    }
}
void sevenProduct()
{
    int basket[7];
    for (int i = 0; i < 7; i++) {
        cout << "Please, enter the price of the product: ";
        cin >> basket[i];
    }
    cout << endl;
    int discount;
    cout << "If you have a discount card, enter 1, if you do not have one, enter 0\n";
    cin >> discount;
    switch (discount) {
    case 0:
        cout << "The total amount is: " << basket[0] + basket[1] + basket[2] + basket[3] + basket[4] + basket[5] + basket[6] << " rubles";
        break;
    case 1:
        int dis = (basket[0] + basket[1] + basket[2] + basket[3] + basket[4] + basket[5] + basket[6]) * 15 / 100;
        cout << "The total amount is: " << (basket[0] + basket[1] + basket[2] + basket[3] + basket[4] + basket[5] + basket[6]) - dis << " rubles";
    }
}
void eightProduct()
{
    int basket[8];
    for (int i = 0; i < 8; i++) {
        cout << "Please, enter the price of the product: ";
        cin >> basket[i];
    }
    cout << endl;
    int discount;
    cout << "If you have a discount card, enter 1, if you do not have one, enter 0\n";
    cin >> discount;
    switch (discount) {
    case 0:
        cout << "The total amount is: " << basket[0] + basket[1] + basket[2] + basket[3] + basket[4] + basket[5] + basket[6] + basket[7] << " rubles";
        break;
    case 1:
        int dis = (basket[0] + basket[1] + basket[2] + basket[3] + basket[4] + basket[5] + basket[6] + basket[7]) * 15 / 100;
        cout << "The total amount is: " << (basket[0] + basket[1] + basket[2] + basket[3] + basket[4] + basket[5] + basket[6] + basket[7]) - dis << " rubles";
    }
}
void finalBuy()
{
    cout << endl;
    cout << "Please, enter the card details(card number, month, year, code CVC)\nFor example:\n1234 5678 9101 1213\n05\n30\n123";
    int pushCheck[4];
    int cardNum[4];
    int month;
    int year;
    int codeCVC;
    cout << endl;
    cout << "Enter card number: ";
    for (int i = 0; i < 4; i++) {
        cin >> cardNum[i];
    }
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter code CVC: ";
    cin >> codeCVC;
    cout << "You will now receive a PUSH-notification: ";
    int push[4];
    for (int i = 0; i < 4; i++) {
        push[i] = 1 + rand() % 9;
        cout << push[i];
    }
    cout << endl;
    cout << endl;
    cout << "Enter PUSH-code which came to your phone: ";
    cout << endl;
    cout << "ENTER PUSH-code SEPARATED BY A SPACE!";
    cout << endl;
    for (int i = 0; i < 4; i++) {
        cin >> pushCheck[i];
    }
    if (pushCheck[0] == push[0] && pushCheck[1] == push[1] && pushCheck[2] == push[2] && pushCheck[3] == push[3]) {
        cout << "\nTHE PAYMENT WAS SUCCESSFUL!\nThank you for your purchase!\nThe order will be delivered within 2-5 business days\n";
    }
    if (pushCheck[0] != push[0] || pushCheck[1] != push[1] || pushCheck[2] != push[2] || pushCheck[3] != push[3]) {
        cout << "ERROR!\nTRY AGAIN!";
    }
}
void finalProcess()
{
    int play;
    cout << "If you want to buy one product, click the number 0. If you want to buy several items, press the number 1\n";
    cin >> play;
    switch (play) {
    case 1:
        int purchase;
        cout << "Please, enter how many items you want to buy: ";
        cout << endl;
        cin >> purchase;
        switch (purchase) {
        case 2:
            twoProduct();
            finalBuy();
            break;
        case 3:
            threeProduct();
            finalBuy();
            break;
        case 4:
            fourProduct();
            finalBuy();
            break;
        case 5:
            fiveProduct();
            finalBuy();
            break;
        case 6:
            sixProduct();
            finalBuy();
            break;
        case 7:
            sevenProduct();
            finalBuy();
            break;
        case 8:
            eightProduct();
            finalBuy();
            break;
        }

        break;
    case 0:
        srand(time(NULL));
        int indNum;
        cout << "Enter individual number of product: ";
        cin >> indNum;
        switch (indNum) {
        case 1:
            cout << "Selected product: Monopoly\nIt'price: 500.00 rubles\n";
            discountForMonopoly();
            finalBuy();
            break;
        case 2:
            cout << "Selected product: Jenga\nIt'price: 250.00 rubles\n";
            discountForJenga();
            finalBuy();
            break;
        case 3:
            cout << "Selected product: Chess\nIt'price: 200.00 rubles\n";
            discountForChess();
            finalBuy();
            break;
        case 4:
            cout << "Selected product: Checkers\nIt'price: 150.00 rubles\n";
            discountForCheckers();
            finalBuy();
            break;
        case 5:
            cout << "Selected product: Football\nIt'price: 1500.00 rubles\n";
            discountForFootball();
            finalBuy();
            break;
        case 6:
            cout << "Selected product: Hockey\nIt'price: 1000.00 rubles\n";
            discountForHockey();
            finalBuy();
            break;
        case 7:
            cout << "Selected product: Fighting\nIt'price: 2000.00 rubles\n";
            discountForFighting();
            finalBuy();
            break;
        case 8:
            cout << "Selected product: Racing\nIt'price: 1900.00 rubles\n";
            discountForRacing();
            finalBuy();
            break;
        }
    }
}
int main()
{
    showMenu();
    cout << endl;
    showAssortment();
    cout << endl;
    detailsBoardGames();
    cout << endl;
    finalProcess();
}