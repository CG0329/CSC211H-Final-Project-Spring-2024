#include "mentalhealthissue.h"

MentalHealthIssue::MentalHealthIssue(const QString &n, const QString &desc) {
    name = n;
    description = desc;
}

QString MentalHealthIssue::returnName() const {
    return name;
}

QString MentalHealthIssue::returnDesc() const {
    return description;
}

QString MentalHealthIssue::treatment() const {
    return "Treatment involves therapy and medication.";
}
