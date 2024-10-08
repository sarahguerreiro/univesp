/*
  As primeiras linhas de código deste arquivo servem para evitar que
  múltiplas definições da classe Time ocorram. Isso poderia ocorrer se
  você der include de dois pacotes que dão include em "time.h"
*/

#ifndef TIME_H   // Inclua esse bloco apenas se TIME_H não está definido
#define TIME_H   // Na primeira inclusão, defina TIME_H para que este
		 // bloco não seja incluído mais de uma vez.

class Time {
 private:  // Seção Privada - é onde colocamos as definições dos atributos, que só podem ser acessados de dentro da própria classe. Isso significa que o código externo à classe (como funções globais ou outras classes) não pode acessar diretamente esses membros privados. Essa prática de encapsulamento é usada para proteger dados sensíveis e garantir que apenas métodos específicos da classe possam manipular esses dados. 
  // Membros privados
  int hour;     // 0 - 23
  int minute;   // 0 - 59
  int second;   // 0 - 59

 public:   // Seção Pública
  
  Time(int hour = 0, int minute = 0, int second = 0);

  int getHour() const;   
  void setHour(int hour);  
   
  int getMinute() const; 
  void setMinute(int minute);

  int getSecond() const; 
  void setSecond(int second);

  void print() const;
  void nextSecond();  
};  

#endif  // Final do bloco "#ifndef"









