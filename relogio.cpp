#include <iostream>

using namespace std;

class relogio
{
private:
    int hora;
    int minuto;
    int segundo;

public:
    relogio();

    int getHora() const { return hora; }
    void setHora(int hora_) { hora = hora_; }

    int getMinuto() const { return minuto; }
    void setMinuto(int minuto_) { minuto = minuto_; }

    int getSegundo() const { return segundo; }
    void setSegundo(int segundo_) { segundo = segundo_; }
};

relogio::relogio()
{
    cout << "\nExecutando construtor\n";
}

int main()
{
    relogio r[3];

    int h, m, s;

    cout << "\n";
    for (int i = 0; i < 2; i++)
    {
        cout << "Digite as horas, minutos e segundos: ";
        cin >> h >> m >> s;

        r[i].setHora(h);
        r[i].setMinuto(m);
        r[i].setSegundo(s);
    }

    if (r[1].getSegundo() > r[0].getSegundo())
    {
        r[0].setMinuto(r[0].getMinuto() - 1);
        r[0].setSegundo(r[0].getSegundo() + 60);
    }
    r[2].setSegundo(r[0].getSegundo() - r[1].getSegundo());

    if (r[1].getMinuto() > r[0].getMinuto())
    {
        r[0].setHora(r[0].getHora() - 1);
        r[0].setMinuto(r[0].getMinuto() + 60);
    }
    r[2].setMinuto(r[0].getMinuto() - r[1].getMinuto());
    r[2].setHora(r[0].getHora() - r[1].getHora());

    cout << "Diferenca entre as horas digitadas:  " << r[2].getHora() << ":" << r[2].getMinuto() << ":" << r[2].getSegundo();

    return 0;
}