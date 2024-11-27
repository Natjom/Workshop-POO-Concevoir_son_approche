# Donner un exemple cas d’usage pertinent des templates :
Un cas d’usage classique des templates est la création de conteneurs génériques, comme des tableaux dynamiques, des listes chaînées, ou des piles. Par exemple, le standard C++ inclut std::vector, un tableau dynamique implémenté avec des templates.
[[exemple_template_.cpp]]

# Quel est l’intérêt d’utiliser le mot clé typedef ? Quelles en sont les limitations ?
(+) Permet de définir des alias pour des types complexes afin d'améliorer la lisibilité et la maintenabilité du code.
Utile pour uniformiser les noms de types dans des projets complexes, surtout lorsque ces types peuvent changer à plusieurs endroits.
(-) Ne fonctionne pas avec des types paramétrés (templates). Pour cela, il est recommandé d'utiliser using, introduit avec C++11, qui est plus flexible.
~~~cpp
template <typename T>
using ArrayElement = T*;
~~~

# Pourquoi avoir créé la fonction array_element_to_string(ArrayElement *el) ? Quelles en sont les limitations ?
(+) Facilite l’affichage des éléments, en encapsulant la conversion en chaîne de caractères. Permet de centraliser le code de conversion et de le modifier facilement si nécessaire.
(-) La fonction est spécifique au type défini par typedef int ArrayElement. Si on veut utiliser le tableau avec des types différents, il faut redéfinir une fonction similaire pour chaque type.

# L’héritage permettrait-il de rendre cette implémentation plus générique ? Quels en seraient le ou les inconvénients ?
(+) Permet une certaine généralisation si les types sont dérivés d'une classe commune. Simplifie le polymorphisme au runtime.
(-) Introduit une surcharge mémoire avec le polymorphisme (table des vtables). Complexifie la gestion des types simples (comme int ou double), qui devraient être encapsulés dans des classes spécifiques.

# Faire évoluer l’implémentation par la mise en oeuvre du mécanisme de template. Appliquer cela sur l’écriture de code en ligne et hors ligne. Observez les implications, en particulier sur la version hors ligne. L’objectif sera d’être capable d’utiliser le tableau dynamique sous la forme suivante :