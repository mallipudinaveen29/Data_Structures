
#include<stdio.h>
#include<stdlib.h>
struct slist
{
        int data;
        struct slist *next;
};
typedef struct slist node;
node* create(node* first)
{
        node* prev,*new;
        int x;
        printf("enter data if data is -1 to stop\n");
        scanf("%d",&x);
        while(x!=-1)
        {

                new=(node*)malloc(sizeof(node));
                new->data=x;
                if(first==NULL)
                {
                        first=new;
                        prev=new;
                }
                else
                {
                        prev->next=new;
                        prev=new;
                }
                printf("enter data if data is -1 to stop\n");
                scanf("%d",&x);
        }
        prev->next=first;
        return first;
}
void display(node* first)
{
        node* temp=first;
        if(first==NULL)
        {
                printf("no data found");
        }
       
        else{
                do{
                        printf("|%d|->",temp->data);
                        temp=temp->next;
                }while(temp!=first);
                printf("|%d|\n",first->data);
        }

}
int count(node *first)
{
    node *temp=first;
    int c=0;
        while(temp->next!=first){
            c++;
            temp=temp->next;
        }
        c=c+1;
    return c;
}
node* insert_begin(node* first,int x)
{
        node* new,*temp=first;
        new=(node*)malloc(sizeof(node));
        new->data=x;
        if(first==NULL)
        {first =new;
        new->next=first;
        }
        else
        {
        new->next=first;
        do{
                temp=temp->next;
        }while(temp->next!=first);
        temp->next=new;
        first=new;
        }
        return first;
}
node* insert_pos(node *first,int pos,int x)
{
    node *temp=first,*newnode;
    int c=count(first),p=1;
    newnode=(node*)malloc(sizeof(node));
    newnode->data=x;
    newnode->next=NULL;
    if(pos<c)
    {
       while(p!=pos-1){
           temp=temp->next;
           p++;
       }
    }
   
    newnode->next=temp->next;
    temp->next=newnode;
    return first;
   
   
}
/*node*  delate(node *first,int x)
{
    node *temp=first,*temp1=NULL;
    int f=0;
   if(first==NULL)
   {
       printf("No data found to delate");
   }
    else{
       while(temp->next!=first){
           temp1=temp;
           if(temp->data=x){
               f=1;
               break;
           }
           else{
               temp1=temp;
               temp=temp->next;
           }
       }
        if(f==1){
        temp1->next=temp->next;
        free(temp);
        }
        else{
        printf("Data is not found");}
    }
    return first;
}*/
node* reverse(node* first)
{
    node* current=first,*prev=NULL,*temp=NULL;
    do{
        temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
    }while(current!=first);
    first->next=prev;
    first=prev;
    return first;
}


void search(node* first,int x)
{
        node* temp=first;
        int f=0;
        if(first==NULL){printf("there is no data");}
        else{   do
                {
                        if(temp->data==x){f=1;break;}
                        temp=temp->next;
                }while(temp!=first);
            }
                //if(temp->data==x){f=1;}
        if(f==1){printf("element is found\n");}
        else{printf("element is not found\n");}


}
node* insert_end(node* first,int x)
{node* new,*temp=first;
        new=(node*)malloc(sizeof(node));
        new->data=x;
        if(first==NULL)
        {first=new;
        new->next=first;
        }
        else{
                do{
                        temp=temp->next;
                }while(temp->next!=first);
                temp->next=new;
        }
        new->next=first;
        return first;
}


void sort(node* first)
{
        node* temp1,*temp2;
        int x;
        for(temp1=first;temp1->next!=first;temp1=temp1->next)
                for(temp2=temp1->next;temp2->next!=first;temp2=temp2->next)
                                {
                                        if(temp1->data > temp2->data)
                                        {
                                        x=temp1->data;
                                        temp1->data=temp2->data;
                                        temp2->data=x;
                                        }
                                }
}

int main()
{
        int a,ch,x,pos;
        node* head=NULL;
        while(1)
        {
            printf("1.create\n2.display\n3.insert_begin\n4.insert_pos\n5.insert_end\n6.reverse\n7.exit");
            printf("\nenter choice:::");
            scanf("%d",&ch);
        switch(ch)
        {
            case 1:head=create(head);
                    break;
            case 2:display(head);
                     break;
            case 3:
                    printf("\nenter element to inser at begin");
                    scanf("%d",&x);
                    insert_begin(head,x);
                    break;
            case 4:printf("\nenter position to insert:::");
                    scanf("%d",&pos);
                    printf("\nenter element to inser given position");
                    scanf("%d",&x);
                    insert_pos(head,pos,x);
                    break;
            case 5:
                    printf("\nenter element to inser at end");
                    scanf("%d",&x);
                    insert_end(head,x);
            case 6: reverse(head);
                    break;
            case 7: exit;
            
            
        }
        }
        
       
}



