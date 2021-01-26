/**
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGDepositTransferResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGDepositTransferResponse::SWGDepositTransferResponse(QString json) {
    init();
    this->fromJson(json);
}

SWGDepositTransferResponse::SWGDepositTransferResponse() {
    init();
}

SWGDepositTransferResponse::~SWGDepositTransferResponse() {
    this->cleanup();
}

void
SWGDepositTransferResponse::init() {
    success = false;
    m_success_isSet = false;
    message = new QString("");
    m_message_isSet = false;
}

void
SWGDepositTransferResponse::cleanup() {

    if(message != nullptr) { 
        delete message;
    }
}

SWGDepositTransferResponse*
SWGDepositTransferResponse::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDepositTransferResponse::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&success, pJson["success"], "bool", "");
    
    ::Swagger::setValue(&message, pJson["message"], "QString", "QString");
    
}

QString
SWGDepositTransferResponse::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGDepositTransferResponse::asJsonObject() {
    QJsonObject obj;
    if(m_success_isSet){
        obj.insert("success", QJsonValue(success));
    }
    if(message != nullptr && *message != QString("")){
        toJsonValue(QString("message"), message, obj, QString("QString"));
    }

    return obj;
}

bool
SWGDepositTransferResponse::isSuccess() {
    return success;
}
void
SWGDepositTransferResponse::setSuccess(bool success) {
    this->success = success;
    this->m_success_isSet = true;
}

QString*
SWGDepositTransferResponse::getMessage() {
    return message;
}
void
SWGDepositTransferResponse::setMessage(QString* message) {
    this->message = message;
    this->m_message_isSet = true;
}


bool
SWGDepositTransferResponse::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_success_isSet){ isObjectUpdated = true; break;}
        if(message != nullptr && *message != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
