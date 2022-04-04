# Uusintatentti

Tee seuraavat luokat:

**Tapahtuma**

-attribuutit : nimi ja aika (molemmat string)
-kaksi konstruktoria: parametrillinen konstruktori ja oletuskonstruktori(saat itse päättää, mitkä arvot annetaan atribuuteille oletuskonstruktorissa)
-yksi metodi: tulosta(), joka tulostaa olion attribuuttien arvot näytölle


**Kalenteri**

-attribuutit: multimap-tyylinen säiliö, jonka avain on string ja alkio dynaaminen Tapahtuma-olio(Tapahtuma*)
-toteuta destruktori, joka tyhjentää multimapin (eli vapauttaa dynaamiset Tapahtuma-oliot)
- metodit:

  - void lisääTapahtuma(string pvm, Tapahtuma* uusiTapahtuma) // Lisää uuden tapahtuman säiliöön

  - void tulostaPäivänTapahtumat(string pvm);

    Tämä metoodi tulostaa annetun päivämäärän kaikki tapahtumat. Jos tapahtumia ei ole, metodi tulostaa " Ei tapahtumia [pvm].
    
 **Pääohjelma**
 
 Kopioi pääohjelma projektiisi ja testaa, että se toimii luokkiesi kanssa.
