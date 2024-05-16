#ifndef ANXIETY_H
#define ANXIETY_H

#include "mentalhealthissue.h"

class Anxiety : public MentalHealthIssue {
public:
    Anxiety() : MentalHealthIssue("Anxiety", "Excessive worry and fear.") {}
    QString returnName() const;
    QString returnDesc() const;
    QString treatment() const;
};

#endif // ANXIETY_H
