1. Jakie są zalety implementacji wskaźnikowej, a jakie implementacji tablicowej?
- implementacja wskaznikowa umozliwia nielimitowane powiekszanie naszej listy, podczas gdy przy implementacji tablicowej przekroczenie bazowego rozmiaru jest drogie.
- implementacja wskaznikowa jest dobra do przechowywania duzych obiektow (kilkukrotnie wiekszych niz 2 64 bitowe wskazniki do kazdego elementu)
- implementacja tablicowa jest szybsza, oraz zajmuje mniej pamieci przez swoja nature
2. Zastanowić się jakz aimplementować listę dwukierunkową zapamiętując tylko jeden wskaźnik?
- Jest to mozliwe dzieki operacji XOR dzieki ktorej w jednej liczbie mozemy zakodowac 2 wskazniki, wiaze sie to jednak z kosztem szyfrowania i odszyfrowania wskaznika
3. Czym się różni odwołanie uniwersalne od odwołania do r-wartości (dla chętnych)?
- r wartosc odnosi sie do wartosci po prawej stronie operatora '=', czyli takich ktore sa tymczasowe i nie da sie do nich odwolac.
- odwolanie uniwersalne moze odwolywac sie zarowno do l wartosci jak i  r wartosci


Kompilacja:
LinkedList.cpp:
- make LinkedList.x

Kompilacja wszystkich:
- make all

Uruchamianie:
LinkedList.x:
- ./LinkedList.x
Generator.x:
- ./Generator.x 10

Generator.x i zapisanie wyników do pliku txt:
- ./Generator.x 10 > wynik.txt

LinkedList  z Generatorem:
- ./Generator.x 10 | ./LinkedList.x