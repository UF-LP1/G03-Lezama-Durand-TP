#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "../Model/producto.h"
#include "../Model/cotillon_establecimento.h"

/*hola fran espero que estes bien y que estes feliz cuando veas esto,
solamente por un error que no sabemos como solucionar porque es de 
xutility creemos que es de linkeo pero la verdad es que ni idea estuvimos leyendo pero bueno, 
cremos con bastante fe que el metodo funciona tqm*/

namespace probarlafuncion
{
	TEST_CLASS(probarlafuncion)
	{
		public:
		
			TEST_METHOD(TestMethod1)
			{
				list<producto> lista;
				//vamos a crear unos objetos tipo productos para testear el metodo :)

				producto vajilla(30, 500, 300029, "tramontina");
				producto globo(20, 500, 301029, "party");
				producto chupeta(10, 50, 303030, "BOmBOmBum");
				producto caramelo(25, 5, 325642, "cramelo");
				producto vaso(56, 300, 400029, "tramontina");
				producto palillo(70, 12, 356029, "tramontina");

				lista.push_back(vajilla);
				lista.push_back(globo);
				lista.push_back(chupeta);
				lista.push_back(caramelo);
				lista.push_back(vaso);
				lista.push_back(palillo);

				cotillon_establecimento local("french", "coti", "lunes", 95363, lista);

				producto encontrado = local.encontrar_producto(globo);

				unsigned int hola = encontrado.get_codigo_producto();

				Assert::AreEqual(encontrado, globo);
			}
	};
}
