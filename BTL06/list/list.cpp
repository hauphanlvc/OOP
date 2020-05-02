#include <iostream>

using namespace std;
struct Node
{
    double value;
    Node *next;

};
class List
{
private:
    Node *head;
    Node *tail;
public:
    List()
    {
        head=NULL;
        tail=NULL;
    }
    ~List()
    {
        if ( head!=NULL ) delete head;
        if ( tail!=NULL ) delete tail;
    }

    void Dang0(double x)
    {
        Node *p=new Node;
        p->value=x;
        p->next=NULL;
        if ( head==NULL)
        {
            head=tail=p;
        }
        else
        {
            tail->next=p;
            tail=p;

        }
    }
    Node* Tim_truoc(double a);
   void delete_head()
{
    if ( head==NULL)
    {
        return;
    }
    else
    if ( head==tail)
    {
        delete head;
        head=tail=NULL;
    }
    else
    {
        auto p=head;
        head=p->next;
        delete p;

    }
}

void delete_after_q(Node *q)
{
    //if ( q==tail);

        if ( q->next==tail)
        {
            delete tail;
            q->next=NULL;
            tail=q;
            return;
        }
            auto p=q->next;
            q->next=p->next;
            delete p;
}
void Dang1(double a)
{
    if (head==NULL) return ;
    if (head->value==a)
    {
        delete_head(); return ;
    }

     Node *x =Tim_truoc(a);
       if ( x!=NULL)
     delete_after_q(x);

}
void Dang2(double a)
{
    if ( head==NULL) return ;
    if ( head->value==a) {
        delete_head();
    }
    Node *x=head;
    while ( x!=NULL)
    {
        if (x==NULL ) return ;

        x =Tim_truoc(a);
       if ( x!=NULL)
     delete_after_q(x);
     else return ;
    }
}
void Dang3(int x,double y)
{
    if ( x<0) return;
    auto p=head;
    int i=0;
    while ( p!=NULL)
    {
        if ( i==x) break;
        i++;
        p=p->next;
    }
    if ( p!=NULL)
        p->value=y;
}
void Xuat()
{
    Node* p= head;
    if ( p->next==NULL) {
            cout<<"["<<p->value<<"]"<<endl;
    return ;
    }
    while (p->next!=NULL)
    {
        cout<<"["<<p->value<<",";
        p=p->next;
    }
    cout<<p->value<<"]"<<endl;

}
};
 Node* List::Tim_truoc(double a)
    {
    if (head==NULL) return NULL;
    auto p=head;
    while ( p!=tail )
    {
        if ( p->next->value==a)
            return p;
        p=p->next;

    }
    if (p==tail)
        return NULL;
    }
int main()
{
   // freopen("h.txt","r",stdin);

    List l;
    do
    {
        int n;
        cin>>n;
        if ( n==-1)
        {
            l.Xuat();
            break;
        }
        else
        if  (n==0)
        {
            double x;
            cin>>x;
            l.Dang0(x);
        }
        else
            if ( n==1)
        {
            double x;
            cin>>x;
            l.Dang1(x);
        }
        else
            if ( n==2 )
            {
                double x;
                cin>>x;
                l.Dang2(x);
            }
            else

            {
                int x;
                double y;
                cin>>x>>y;
                l.Dang3(x,y);
            }

    } while(true);
    return 0;
}
