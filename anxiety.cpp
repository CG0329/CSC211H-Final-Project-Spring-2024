#include "anxiety.h"

QString Anxiety::returnName() const {
    return name;
}

QString Anxiety::returnDesc() const {
    return description;
}

QString Anxiety::treatment() const {
    return "Some ways to manage this disorder include mindfulness, relaxation techniques, correct breathing techniques, dietary adjustments,\n"
           "exercise, learning to beassertive, building self-esteem, cognitive therapy, exposure therapy, structured problem solving, medication"
           "\nand support groups.";
}
