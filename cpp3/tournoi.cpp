#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> ListeEquipes;

// Fonction pour ajouter un participant à la liste
void ajouterParticipant(const std::string& participant) {
    ListeEquipes.push_back(participant);
}

int main() {
    std::string reponse;

    std::cout << "Bienvenue dans l'HexaCounter Championship, les participants par défaut sont :" << std::endl;

    ListeEquipes.push_back("Team Vitality");
    ListeEquipes.push_back("G2 Esports");
    ListeEquipes.push_back("LDLC");
    ListeEquipes.push_back("Heretics");
    ListeEquipes.push_back("AGO Esports");
    ListeEquipes.push_back("1PV");
    ListeEquipes.push_back("Team LDLC OL");
    ListeEquipes.push_back("Team Heretics France");

    do {
        // Afficher les participants actuels
        std::cout << "Participants actuels : " << std::endl;
        for (const std::string& equipe : ListeEquipes) {
            std::cout << equipe << std::endl;
        }

        // Demander à l'utilisateur s'il veut ajouter des participants
        std::cout << "Voulez-vous ajouter des participants ? (Oui/Non): ";
        std::cin >> reponse;

        // Si la réponse est 'Oui', demander le nom du participant et l'ajouter à la liste
        if (reponse == "Oui" || reponse == "oui" || reponse == "O" || reponse == "o") {
            std::string nouveauParticipant;
            std::cout << "Entrez le nom du nouveau participant : ";
            std::cin >> nouveauParticipant;
            ajouterParticipant(nouveauParticipant);
        }

    } while (reponse == "Oui" || reponse == "oui" || reponse == "O" || reponse == "o");

    // Afficher la liste finale
    std::cout << "\nParticipants finaux : " << std::endl;
    for (const std::string& equipe : ListeEquipes) {
        std::cout << equipe << std::endl;
    }

    return 0;
}
