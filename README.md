# Block_Mous
Bloque les actions de la souris

## Description
Bloque tout les clique de la souris, tant que le programme est ouvert, Fonctionne avec Xorg (X11)

## Pré-requis
```
sudo apt-get install libx11-dev libxtst-dev
```

Pour compiler le programme sous Linux : 
```
gcc Block_Mouse.c -o Block_Mouse -lX11
```
