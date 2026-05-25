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

## 1. Cloner le dépôt GitHub

```bash
git clone https://github.com/elmaa336/-Mini-Amazon.git
```

## 2. Accéder au dossier du projet

```bash
cd -Mini-Amazon
```

## 3. Générer le dossier de build

Depuis la racine du projet, exécutez la commande suivante afin que CMake génère automatiquement l’environnement de compilation adapté à votre système :

```bash
cmake -S . -B build
```

## 4. Compiler le projet

Compilez l’ensemble des fichiers source afin de générer l’exécutable final :

```bash
cmake --build build --config Debug
```

## 5. Lancer l’application

Après la compilation, l’exécutable peut être généré dans différents dossiers selon le compilateur et la configuration CMake utilisée.

### Emplacements possibles sous Windows

```powershell
.\build\bin\StoreApp.exe
```

ou

```powershell
.\build\Debug\StoreApp.exe
```

### Linux / macOS

```bash
./build/StoreApp
```

---

# 👥 Contexte Académique

Projet universitaire de Programmation Orientée Objet (POO)  
Réalisé par une équipe de 5 étudiants.