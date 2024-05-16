#ifndef MENTALHEALTHISSUE_H
#define MENTALHEALTHISSUE_H

#include <QString>
using namespace std;

class MentalHealthIssue {
protected:
    QString name;
    QString description;

public:
    MentalHealthIssue(const QString &n, const QString &desc);
    virtual QString returnName() const;
    virtual QString returnDesc() const;
    virtual QString treatment() const;
    virtual ~MentalHealthIssue() = default;
};

#endif // MENTALHEALTHISSUE_H
