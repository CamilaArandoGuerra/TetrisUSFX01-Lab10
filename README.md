# TetrisUSFX01_con_Factory_BuilderSTRATEGY
 Patron de Diseno Strategy, Accion: Posicionar Current Piece
 ##Resumen
 Respecto a la implementacion al juego tetris se realizo los siguiente:
 Para implementar este metodo primero se crearon las estrategias (clases creadas desde Unreal) las cuales cumplen el objtivo de posicionar la pieza (cada estrategia cumple el objetivo de distinta manera caracteristico de este patron), las estrategias creadas fueron: Estrategia Izquierda (La cual va moviendo la pieza hacia la izquierda), Estrategia derecha (la cual mueve la pieza a la derecha) y Estrategia Basica ( la cual cumple las mismas acciones que ya se teania en tetris en mover pieza). Dentro del codigo de cada estrategia, en el .cpp se llamo a la accion que iba a realizar cada estrategia (es decir dentro del .cpp de cada estrategia se encuentra su accion a realizar) esto en el Tick, se lo coloco en el Tick por que lo que se queria era que la pieza se moviese no que se teletransporte.
 La interface se defiio un solo metodo (esto tambien se indicaba en el ejemplo del patron), este metodo lo llamamos PiezaPocision.
 En cuanto a lo que serian el contexto lo colocamos dentro de Board (en el cual se uso una tecla Seteada para cambiar la estrategia a eleccion del cliente como en los metodos de rotar pieza o mover pieza)
 Y en cuanto al cliente se encuentra en GameModeBase, dentro de este se llaman a las estrategias creadas para que mediante al contexto se escoja una a gusto del cliente. 
 
