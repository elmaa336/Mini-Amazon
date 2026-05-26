# 🛒 Mini-Amazon Simulation System

Un backend e-commerce développé en C++ dans le cadre de notre module universitaire de Programmation Orientée Objet (POO), réalisé par une équipe de 5 étudiants.

Le projet simule une plateforme e-commerce interactive en s'appuyant sur les concepts avancés de la POO, une architecture modulaire stricte (séparation des fichiers `.h` et `.cpp`) ainsi que le système de build CMake.

---

# 🛠️ Architecture du Projet & Concepts POO

Le projet repose sur plusieurs composants techniques :

- **Héritage & Polymorphisme :**  
  gestion dynamique des produits répartis en catégories spécialisées (`Electronics`, `Clothing`, `Food`).

- **Moteur de Tarification :**  
  calcul dynamique des taxes et des remises spécifiques à chaque type de produit lors du passage en caisse.

- **Gestion du Panier :**  
  système d’ajout et de suppression d’articles avec validation et mise à jour des stocks en temps réel.

- **Moteur de Recommandation :**  
  algorithme de suggestion de produits basé sur un score de similarité déclenché automatiquement après chaque achat.

- **Architecture Modulaire :**  
  séparation stricte entre les fichiers `.h` et `.cpp` avec organisation du projet via les dossiers `src/` et `include/`.

---

# 🚀 Compilation & Exécution

## 1. Cloner le projet

```bash
git clone https://github.com/elmaa336/Mini-Amazon.git
cd Mini-Amazon
```

---

## 2. Générer et compiler le projet

```bash
cmake -S . -B build
cmake --build build --config Release
```

---

## 3. Lancer l’application

### Windows

```powershell
.\build\bin\StoreApp.exe
```

ou (selon le générateur CMake)

```powershell
.\build\Release\StoreApp.exe
```

---

### Linux / macOS

```bash
./build/StoreApp
ou
./build/bin/StoreApp
```
---

# 👥 Contexte Académique

Ce projet a été réalisé dans le cadre du module de Programmation Orientée Objet (POO). Il s’agit d’un travail de groupe effectué par une équipe de 5 étudiants.

L’objectif principal était de concevoir et développer ensemble une application e-commerce en C++, en appliquant les concepts de la programmation orientée objet dans un projet réel et structuré.

Le travail a été organisé en équipe avec une répartition des tâches entre les membres (gestion des produits, panier, logique métier, interface, etc.), afin de simuler un environnement de développement collaboratif.

Le projet a également permis de pratiquer les bonnes pratiques de développement collaboratif, notamment :
- utilisation de Git pour le suivi des versions
- collaboration via GitHub
- gestion des branches et des commits
- intégration et fusion du travail de chaque membre
- coordination du code dans une base commune

Ce travail met donc en avant à la fois les compétences en C++ et la capacité à travailler en équipe sur un projet logiciel structuré.