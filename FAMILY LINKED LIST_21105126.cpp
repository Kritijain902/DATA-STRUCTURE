#include<bits/stdc++.h>
using namespace std;

struct node{
    int age;
    string name;
    node *prev;
    node *next;
    node(string s,int x){
        age = x;
        name = s;
        prev=NULL;
        next=NULL;
    }
};

void printthelist(node *head){
    while(head!=NULL){
        cout<<head->name<<"-"<<head->age<<" ";
        head=head->next;
    }
}

int main(){
    node *father=new node("MANISH JAIN",52);
    node *mother=new node("CHETNA JAIN",42);
    node *myself=new node("KRITI JAIN",20);
    node *brother=new node("ADITYA JAIN",17);
    

    node *head=father;

    father->prev=NULL;
    father->next=mother;
    mother->prev=father;
    mother->next=myself;
    myself->prev=mother;
    myself->next=brother;
    brother->prev=myself;
    brother->next=NULL;
   

    printthelist(head);

    return 0;
}