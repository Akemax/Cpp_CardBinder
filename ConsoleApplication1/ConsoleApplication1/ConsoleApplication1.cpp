#include <iostream>
using namespace std;

class CardBinder
{
public:
    CardBinder() {}

    int GetGold()
    {
        return gold_card;
    }
    int GetSilver()
    {
        return silver_card;
    }
    int GetTotal()
    {
        return total;
    }
    void SetTotal()
    {
        total = gold_card + silver_card;
    }

    void AddGold(int num)
    {
        if (num < 0)
        {
            cout << "You cannot add a negative or 0 amount of cards." << endl;
        }
        else if (total + num >= 20)
        {
            cout << "You do not have enough binder room." << endl;
        }
        else
        {
            gold_card += num;
            SetTotal();
        }
    }
    void RemoveGold(int num)
    {
        if (num < 0)
        {
            cout << "You cannot remove a negative or 0 amount of cards." << endl;
        }
        else if (gold_card - num < 0)
        {
            cout << "You do not have enough gold cards to remove." << endl;
        }
        else
        {
            gold_card -= num;
            SetTotal();
        }
    }
    void AddSilver(int num)
    {
        if (num < 0)
        {
            cout << "You cannot add a negative or 0 amount of cards." << endl;
        }
        else if (total + num >= 20)
        {
            cout << "You do not have enough binder room." << endl;
        }
        else
        {
            silver_card += num;
            SetTotal();
        }
    }
    void RemoveSilver(int num)
    {
        if (num < 0)
        {
            cout << "You cannot remove a negative or 0 amount of cards." << endl;
        }
        else if (silver_card - num < 0)
        {
            cout << "You do not have enough gold cards to remove." << endl;
        }
        else
        {
            silver_card -= num;
            SetTotal();
        }
    }
private:
    int total = 0;
    int gold_card = 0;
    int silver_card = 0;
};


int main() {

    CardBinder cb;
    cb.AddGold(21);
    cb.AddGold(11);
    cb.AddSilver(-4);
    cb.AddSilver(8);
    cb.RemoveGold(12);
    cb.RemoveGold(4);
    cb.RemoveSilver(-2);
    cb.RemoveSilver(6);
    cout << cb.GetGold() << endl;
    cout << cb.GetSilver() << endl;
    cout << cb.GetTotal() << endl;

    return 0;

}