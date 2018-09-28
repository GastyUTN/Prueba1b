
typedef struct
{
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;
}eSerie;

void inicializarSeriesEstado(eSerie[], int);
void inicializarSeriesHardCode(eSerie[]);
void mostrarListaSeries(eSerie[], int);

typedef struct
{
    int idUsuario;
    char nombre[50];
    int idSerie;
    int estado;
}eUsuario;

void inicializarUsuariosEstado(eUsuario[], int);
void inicializarUsuariosHardCode(eUsuario[]);
void mostrarListaUsuarios(eUsuario[], int);
void mostrarUsuarioConSuSerie(eUsuario[], int, eSerie[], int);


