#include <string.h>

// Estrutura para nó da árvore com 3 ponteiros
struct no3 {
    char* string;
    no3* esq;    // ponteiro esquerdo
    no3* meio;   // ponteiro do meio
    no3* dir;    // ponteiro direito
};

// A função deve somar todos os nós da árvore
int sum(no3 *p) {
    if(p == NULL) {
        return 0;
    }
    
    int len = (p->string != NULL) ? strlen(p->string) : 0;
    
    return len + sum(p->esq) + sum(p->meio) + sum(p->dir);
}
