#ifndef JSONPARSER_H
#define JSONPARSER_H

#include <QObject>
#include <QtCore/QJsonObject>
#include <QtCore/QJsonParseError>
#include <QtCore/QVariant>

class JsonParser : public QObject
{
    Q_OBJECT
public:
/**
 * @brief JsonParser constructor func's argument must be the weibo return value. it's always a jsonObject
 */
  explicit JsonParser( const QByteArray &jsonText , QObject *parent = 0);
   ~JsonParser();

  QJsonObject getJsonObject() {
    return jsonObject;
  }
    
private:
   QJsonParseError error;
   QJsonObject jsonObject;

};

#endif // JSONPARSER_H
