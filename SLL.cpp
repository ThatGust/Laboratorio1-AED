#include <iostream>

using namespace std;


struct node
{
    int coef;
    int grado;
    node *next;
};

class polino
{
private:
    node *head,*tail;
public:
    void insert(int coef, int grado) {
    node *new_node= new node();
    new_node->coef=coef;
    new_node->grado=grado;

    if(head == NULL)
        {
            head = new_node;
            new_node->next = NULL;
        }
        else
        {
            new_node->next = head;
            head = new_node;
        }
    }

    void add(int coef, int grado) {
        node *new_node= new node();
        new_node->coef=coef;
        new_node->grado=grado;

        if(head == NULL)
        {
            head = new_node;
            new_node->next = NULL;
        }
        else
        {
            if ((new_node->grado) < (head->grado))
            {
                int a =0;
                head->next = new_node;
                a++;
                for (int i = 0; i <= a; i++)
                {
                    if (new_node->coef==head->coef)
                    {
                        head->coef + new_node->coef = head->coef;
                        if (head->coef==0)
                        {
                            head=head->next
                        }
                        
                    }
                    head->next;
                }
            }
        }
    }

    void print() {
    node *x= this->head;
    while (x!=NULL)
    {
        cout << x->coef << "x*" << x->grado;
        x=x->next;
    }
    cout << "\n";
}
    ~polino();
};

int main()
{
    return 0;
}


