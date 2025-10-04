"# Guide de contribution" 
# Guide de contribution – Mini Projet Calculatrice en C

Merci de contribuer à ce projet !  
Veuillez suivre les instructions ci-dessous pour assurer une bonne organisation du code et éviter les conflits.

---

## 🧩 1. Organisation des branches

| Branche | Rôle |
|----------|------|
| `main` | Version stable et validée du projet (ne jamais coder directement dessus) |
| `dev` | Version de développement, intègre les fonctionnalités terminées |
| `feature/<nom-fonctionnalité>` | Branche temporaire pour chaque tâche ou amélioration |

Exemple :
```bash
git checkout dev
git pull origin dev
git checkout -b feature/login-system

