typedef struct grafo Grafo;
typedef struct aresta Aresta;
typedef struct vertice Vertice;

Grafo* criaGrafo(int v);
int criaAresta(Grafo* g,int v1, int v2);
int desalocaAresta(Grafo* g, int v1, int v2,int flag);
int verificaIgualdade(Aresta* p,int id);
void verificaNovosAmigos(Grafo *g, int id);
void imprimeGrafo(Grafo* g);
int verificaUser(Grafo* g, int user);
int verificaNome(Grafo* g,char* nome);
void desalocaGrafo(Grafo* g);
float geraPeso(Grafo * g,int A, int B);
int getAmigoSimi(Grafo * g,int A, int B);
void inserir_vertice(Grafo * g,int i, Vertice *aux);
void listaAmigos(Grafo* g, int v);
float verificaCompatibilidade(Grafo*g, int v1, int v2);
int verificaDiferenca(Grafo* g, int n1, int n2);
void sugerir_amizade(Grafo *g, int usuario);
float * dijkstra(Grafo *g, int inicio);
void detectaFalsos(Grafo* g,int v1);
char* encontrarParIdeal(Grafo* g,int v);