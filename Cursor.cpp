#include "Cursor.h"
#include "qcolor.h"
#include <iostream>

//Positioniere Cursor an Position x,y
void Cursor::bewegen(int x, int y)
{
	//printf("\33[%d;%dH", y, x);	
	std::cout << "\33[" << y << ";" << x << "H";	//Kommandos	\033[<L>; <C>H oder \033[<L>; <C>f
}

//Move the cursor up N lines
void Cursor::hoch(int n)
{
	//printf("\033[%dA", n);
	std::cout << "\033[" << n << "A";
}
//Move the cursor down N lines:  \033[<N>B
void Cursor::runter(int n)
{
	//printf("\033[%dB", n);
	std::cout << "\033[" << n << "B";
}
//Bewege Cursor um n Stellen/Spalten nach rechts:  \033[<N>C
void Cursor::rechts(int n)
{
	//printf("\033[%dC", n);
	std::cout << "\033[" << n << "C";
}
//Bewege Cursor um n Stellen/Spalten nach links:  \033[<N>D
void Cursor::links(int n)
{
	//printf("\033[%dD", n);
	std::cout << "\033[" << n << "D";
}
//Setze Schriftfarbe oder Hintergrundfarbe
void Cursor::setze_Farbe(std::string farbe)
{
	std::cout << farbe;
}

//Speichert die aktuelle Cursor Position
void Cursor::speicherePosition()
{
	std::cout << "\033[s";
}
//Stellt die gespeicherte Cursor Position wieder her
void Cursor::gehezu_letzteGespeichertePosition()
{
	std::cout << "\033[u";
};
QColor Cursor::QtFarbwandler (std::string farbe){
    if (farbe == HINTERGRUND_SCHWARZ) return Qt::black;
    if (farbe == HINTERGRUND_ROT) return Qt::darkRed;
    if (farbe == HINTERGRUND_GRUEN) return Qt::darkGreen;
    if (farbe == HINTERGRUND_GELB) return Qt::darkYellow;
    if (farbe == HINTERGRUND_BLAU) return Qt::darkBlue;
    if (farbe == HINTERGRUND_LILA) return Qt::darkMagenta;
    if (farbe == HINTERGRUND_CYAN) return Qt::darkCyan;
    if (farbe == HINTERGRUND_WEISS) return Qt::white;
    if (farbe == HINTERGRUND_HELL_GRAU) return Qt::lightGray;
    if (farbe == HINTERGRUND_HELL_ROT) return Qt::red;
    if (farbe == HINTERGRUND_HELL_GRUEN) return Qt::green;
    if (farbe == HINTERGRUND_HELL_BLAU) return Qt::blue;
    if (farbe == HINTERGRUND_HELL_LILA) return Qt::magenta;
    if (farbe == HINTERGRUND_HELL_CYAN) return Qt::cyan;
    if (farbe == HINTERGRUND_HELL_WEISS) return Qt::white;
    return Qt::black;
};

