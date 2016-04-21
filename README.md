# Algorithm-analysis-transfer-convolution-type-on-C-++
Алгоритм розбору типу “перенос-згортка” та приналежність чи ні граматиці.
Курсова з дискретної математики.

Вхід: стрічка символів з (,),*,+,а.
Вихід:Алгоритм розбору типу “перенос-згортка” та приналежність чи ні граматиці з правилами: 
	  E->E+T,  E->T
		 T->T*F,  T->F
	  F->(E),  F->a.
Реалізація: за основу взято аналізатор на мові Флойда-Еванса.
Функції L0-L11 відповідають операторам з аналізатора на мові Флойда-Еванса. Функція start запускає весь процес та ініціалізує змінні.
String input – змінна, для зберігання вхідних даних.
Int I – індикатор, для input.
String temp – тимчасова змінна для магазину.
Програма реалізована рекурсивним методом.в
