// однорядкові коментарі
/*магаторядкові коментарі
 - коментак1
 - коментар2
*/

// в Arduino IDE є декілька типів змінних
// оголошувати їх ми можемо в такому форматі: <тип> <назва>
int val;
// або декілька підряд одного типу
int val_1, val_2, val_3;
// не забуваємо про крапку з комою в кінці!
// також можна одразу призвоїти змінній якесь значення
int val_4 = 155;

/*========== Типи змінних ==========*/
bool bool_val = true;             // логічна змінна, може приймати значення true (1) і false (0)
char c_val = 100;                 // зберігає номур символа з таблиці символів ASCII, 
char name = 'A'
byte b_val = 255;                 // зберігає значення від 0 до 255
int i_val = 1234;                 // зберігає значення -32768 ... 32767
unsigned int ui_val = 65535       // зберігає значення 0 ... 65535
long l_val = 60000;               // зберігає значення -2 147 483 648 ... 2 147 483 647
unsigned long u_l_val = 6000000;  // зберігає значення 0 ... 4 294 967 295
float f_val = 3.14;               // зберігає значення з плаваючою точкою, 6-7 символів місля коми
double d_val = 3.1415             // зберігає значення з плаваючою точкою, до 14 символів після коми

/*========== Константи ==========*/
const <тип> <ім`я> = 2000;
// або так, тоді тип не потрібен:
#define name = 2300

/*========== Математичні функції ==========*/
int a, b, x, y, z;

+ , -, *, / ; // додати, відняти, помножити, поділити
min(a, b);    // Повертає менше з чисел a i b
max(a, b);    // Повертає більше з чисел a i b
abs(x);       // Модуль числа
round(x);     // Математичне округлення
sq(x);        // Квадрат числа
cos(x);       // Косинус (радіани)
sin(x);       // Сінус (радіани)
tan(x);       // Тангенс (радіани)
fabs(x);      // Модуль для float числа
sqrt(x);      // Корінь квадратний
sqrtf(x);     // Корінь квадратний для float числа
cbrt(x);      // Кубічний корінь
square(x);    // Квадрат ( x * x )
floor(x);     // Округлення до цілого вниз
ceil(x);      // Округлення до цілого вверх
exp(x);       // Експонента (e ^ x)
acos(x);      // Арккосинус
asin(x);      // Арксінус
atan(x);      // Арктангенс
log(x);       // Натуральний логарифм
log10(x);     // Десятковий логарифм
pow(x, y);    // Степінь (x ^ y)
fma(x, y, z); // Повертає x * y + z
trunc(x);     // Повертає цілу частину числа з дробною точкою

/*--------Сталі(константи)--------*/
M_E    // 2.718281828 Число e 
M_PI   // 3.141592654 пі
M_PI_2 // 1.570796327 пі/2
TMO_PI // 6.283185307 два пі
EULER  // 2.718281828 Число e
