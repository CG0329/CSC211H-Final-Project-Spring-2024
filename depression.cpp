#include "depression.h"

QString Depression::returnName() const {
    return name;
}

QString Depression::returnDesc() const {
    return description;
}

QString Depression::treatment() const {
    return "Education, lifestyle changes, social support and psychological therapy are important treatments for this disorder. People may also require\n"
           "specific medication to alleviate these symptoms.";
}
