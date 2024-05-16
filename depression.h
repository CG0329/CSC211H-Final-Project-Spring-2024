#ifndef DEPRESSION_H
#define DEPRESSION_H

#include "mentalhealthissue.h"

class Depression : public MentalHealthIssue {
public:
    Depression() : MentalHealthIssue("Depression", "Persistent sadness and loss of interest.") {}
    QString returnName() const;
    QString returnDesc() const;
    QString treatment() const;
};

#endif // DEPRESSION_H
