#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Функция для установки цвета в консоли Windows
void setColor(int color) {
    #ifdef _WIN32
        // В Windows: color 0-15, где первый символ - фон, второй - текст
        // Используем только цвет текста
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, color);
    #else
        // Для Linux/Mac с ANSI кодами
        cout << "\033[1;" << (30 + color) << "m";
    #endif
}

// Функция для сброса цвета
void resetColor() {
    #ifdef _WIN32
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 7); // 7 - белый на черном
    #else
        cout << "\033[0m";
    #endif
}

int main() {
    srand(time(0));
    
    string playerName = "Игрок";
    int questionCount = 10;
    int colorScheme = 7; // 7 - белый
    
    int menuChoice;
    
    // Массивы вопросов и ответов
    string questions[] = {
        "Какой язык используется для системного программирования?",
        "Что такое ООП?",
        "Какой тип данных хранит целые числа?",
        "Что такое компилятор?",
        "Какой язык чаще всего используют для веб-разработки?",
        "Что такое алгоритм?",
        "Какой оператор используется для сравнения в C++?",
        "Что такое массив?",
        "Для чего нужны циклы?",
        "Что такое функция?",
        "Какой язык был создан первым?",
        "Что такое HTML?"
    };
    
    string answers[][4] = {
        {"Python", "Java", "C++", "JavaScript"},
        {"Объектно-ориентированное программирование", "Операционная система", "База данных", "Алгоритм"},
        {"string", "int", "float", "char"},
        {"Программа для перевода кода в машинный", "Текстовый редактор", "Антивирус", "Игра"},
        {"C++", "Python", "JavaScript", "Java"},
        {"Последовательность действий", "Язык программирования", "Компьютер", "Программа"},
        {"=", "==", "!=", "==="},
        {"Набор элементов одного типа", "Число", "Строка", "Функция"},
        {"Для повторения кода", "Для создания переменных", "Для вывода текста", "Для ввода данных"},
        {"Блок кода для переиспользования", "Переменная", "Цикл", "Массив"},
        {"Assembler", "C", "Fortran", "Python"},
        {"Язык разметки", "Язык программирования", "База данных", "Протокол"}
    };
    
    int correctAnswers[] = {2, 0, 1, 0, 2, 0, 1, 0, 0, 0, 2, 0}; // индексы правильных ответов
    
    cout << "\n========================================" << endl;
    cout << "[ + ] Добро пожаловать в ВИКТОРИНУ!" << endl;
    cout << "========================================" << endl;
    
    while(true) {
        setColor(colorScheme);
        cout << "\n[ + ] ГЛАВНОЕ МЕНЮ" << endl;
        cout << "========================================" << endl;
        cout << "[ 1 ] Начать игру" << endl;
        cout << "[ 2 ] Настройки" << endl;
        cout << "[ 3 ] Правила" << endl;
        cout << "[ 4 ] Выйти" << endl;
        cout << "========================================" << endl;
        cout << "[ + ] Выберите пункт: ";
        cin >> menuChoice;
        resetColor();
        
        switch(menuChoice) {
            case 1: { // Начать игру
                setColor(colorScheme);
                
                int lives = 3;
                int score = 0;
                char answerChar;
                int userAnswer;
                
                // Перемешиваем вопросы
                int questionOrder[12];
                for(int i = 0; i < 12; i++) questionOrder[i] = i;
                
                for(int i = 0; i < 12; i++) {
                    int j = rand() % 12;
                    int temp = questionOrder[i];
                    questionOrder[i] = questionOrder[j];
                    questionOrder[j] = temp;
                }
                
                cout << "\n[ + ] ИГРА НАЧИНАЕТСЯ!" << endl;
                cout << "========================================" << endl;
                
                int currentQuestion = 0;
while(currentQuestion < questionCount && lives > 0) {
                    int qIndex = questionOrder[currentQuestion];
                    
                    cout << "\n========================================" << endl;
                    cout << "[ + ] Игрок: " << playerName << " | жизни: " << lives << " | очки: " << score << endl;
                    cout << "========================================" << endl;
                    cout << "[ " << (currentQuestion+1) << " ] Вопрос: " << questions[qIndex] << endl;
                    cout << "[ A ] " << answers[qIndex][0] << "\t\t[ B ] " << answers[qIndex][1] << endl;
                    cout << "[ C ] " << answers[qIndex][2] << "\t\t[ D ] " << answers[qIndex][3] << endl;
                    cout << "[ + ] Выбрать ответ (A/B/C/D): ";
                    cin >> answerChar;
                    
                    switch(answerChar) {
                        case 'A': case 'a': userAnswer = 0; break;
                        case 'B': case 'b': userAnswer = 1; break;
                        case 'C': case 'c': userAnswer = 2; break;
                        case 'D': case 'd': userAnswer = 3; break;
                        default: userAnswer = -1;
                    }
                    
                    if(userAnswer == correctAnswers[qIndex]) {
                        score += 10;
                        cout << "[ + ] ПРАВИЛЬНО! +10 очков" << endl;
                    } else {
                        lives--;
                        cout << "[ - ] НЕПРАВИЛЬНО! Правильный ответ: " 
                             << char('A' + correctAnswers[qIndex]) << " - " 
                             << answers[qIndex][correctAnswers[qIndex]] << endl;
                    }
                    
                    currentQuestion++;
                }
                
                cout << "\n========================================" << endl;
                if(lives == 0) {
                    cout << "[ - ] ВЫ ПРОИГРАЛИ! Закончились жизни." << endl;
                } else {
                    cout << "[ + ] ПОБЕДА! Вы прошли викторину!" << endl;
                }
                cout << "[ + ] Набрано очков: " << score << endl;
                cout << "[ + ] Осталось жизней: " << lives << endl;
                cout << "========================================" << endl;
                
                resetColor();
                break;
            }
            
            case 2: { // Настройки
                int settingsChoice;
                
                while(true) {
                    setColor(colorScheme);
                    cout << "\n[ + ] НАСТРОЙКИ" << endl;
                    cout << "========================================" << endl;
                    cout << "[ 1 ] Имя игрока (текущее: " << playerName << ")" << endl;
                    cout << "[ 2 ] Количество вопросов (текущее: " << questionCount << ")" << endl;
                    cout << "[ 3 ] Цвет интерфейса" << endl;
                    cout << "[ 4 ] Вернуться в главное меню" << endl;
                    cout << "========================================" << endl;
                    cout << "[ + ] Выберите пункт: ";
                    cin >> settingsChoice;
                    resetColor();
                    
                    if(settingsChoice == 4) break;
                    
                    switch(settingsChoice) {
                        case 1:
                            cout << "[ + ] Введите новое имя игрока: ";
                            cin >> playerName;
                            cout << "[ + ] Имя изменено на: " << playerName << endl;
                            break;
                        case 2:
                            cout << "[ + ] Выберите количество вопросов (8, 10, 12): ";
                            cin >> questionCount;
                            if(questionCount == 8  questionCount == 10  questionCount == 12) {
                                cout << "[ + ] Количество вопросов изменено на: " << questionCount << endl;
} else {
                                cout << "[ - ] Неверное значение! Установлено 10." << endl;
                                questionCount = 10;
                            }
                            break;
                        case 3:
                            cout << "[ + ] Выберите цвет текста:" << endl;
                            cout << "[ 1 ] Зеленый" << endl;
                            cout << "[ 2 ] Красный" << endl;
                            cout << "[ 3 ] Синий" << endl;
                            cout << "[ 4 ] Желтый" << endl;
                            cout << "[ 5 ] Белый (по умолчанию)" << endl;
                            cout << "[ + ] Выберите: ";
                            cin >> colorScheme;
                            
                            switch(colorScheme) {
                                case 1: colorScheme = 2; break; // зеленый
                                case 2: colorScheme = 4; break; // красный
                                case 3: colorScheme = 1; break; // синий
                                case 4: colorScheme = 6; break; // желтый
                                default: colorScheme = 7; // белый
                            }
                            cout << "[ + ] Цвет изменен!" << endl;
                            break;
                        default:
                            cout << "[ - ] Неверный пункт!" << endl;
                    }
                }
                break;
            }
            
            case 3: { // Правила
                setColor(colorScheme);
                cout << "\n[ + ] ПРАВИЛА ИГРЫ" << endl;
                cout << "========================================" << endl;
                cout << "• Игрок получает 10 очков за правильный ответ" << endl;
                cout << "• Игрок проходит дальше за правильный ответ" << endl;
                cout << "• Игрок теряет одну жизнь при неправильном ответе" << endl;
                cout << "• Игра заканчивается победой при ответе на все вопросы" << endl;
                cout << "• Игра заканчивается поражением при потере всех жизней" << endl;
                cout << "========================================" << endl;
                cout << "[ + ] Нажмите Enter чтобы вернуться в меню...";
                resetColor();
                cin.ignore();
                cin.get();
                break;
            }
            
            case 4: // Выйти
                cout << "[ + ] Спасибо за игру! До свидания!" << endl;
                return 0;
                
            default:
                cout << "[ - ] Неверный пункт меню!" << endl;
        }
    }
    
    return 0;
}
