#include<stdio.h>
#include<string.h>
void func(char nm[40], int qty, int price, int *amt);
int main(){
    struct item{
        char name[40];
        int qty;
        int price;
        int amount;
    };
    struct item one;
    strcpy(one.name, "keyboard");
    one.qty = 5;
    one.price=100;
    func(one.name, one.qty, one.price, &(one.amount));
}
void func(char nm[40], int qty, int price, int *amt){
    int amount = qty*price;
    printf("%s\n", nm);
    printf("%i\n", qty);
    printf("%i\n", price);
    printf("%i\n", amount);
    *amt = amount;

}