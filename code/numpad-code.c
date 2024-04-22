// TODO megoldas kitalalasa
// TODO arduino code
// "Melyik szamra nem gondoltam?"

// Gondoltam egy szamra - ez lesz x
// Ebbol vonj le 2-t - ez lesz y
// ha y paros, akkor y kétszerese lesz z
// ha y paratlan, akkor y+1 lesz z  
// x-et oszd el (z-y)-al
// paros-e az eredmeny?

int x = input(); // a gondolt szam

int y = x - 2;
if (y%2 == 0) { // paros
    int z = y*2;
} else { // paratlan
    int z = y+1;
}

eredmeny = x / (z-y) // itt ez mindig jó?

if (eredmeny % 2 == 0) { // paros eredmeny
    piros_led_on();
} else { // paratlan eredmeny
    zold_led_on();
}
