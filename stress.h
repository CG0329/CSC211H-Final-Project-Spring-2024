#ifndef STRESS_H
#define STRESS_H

#include "mentalhealthissue.h"

class Stress : public MentalHealthIssue {
public:
    Stress() : MentalHealthIssue("Stress", "Feeling overwhelmed by life's demands.") {}
    QString returnName() const;
    QString returnDesc() const;
    QString treatment() const;
};

#endif // STRESS_H
