#import <Foundation/Foundation.h>
#import "SWGObject.h"

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





@protocol SWGBidAccount
@end

@interface SWGBidAccount : SWGObject

/* 화폐를 의미하는 영문 대문자 코드 [optional]
 */
@property(nonatomic) NSString* currency;
/* 주문가능 금액/수량 [optional]
 */
@property(nonatomic) NSString* balance;
/* 주문 중 묶여있는 금액/수량 [optional]
 */
@property(nonatomic) NSString* locked;
/* 매수평균가 [optional]
 */
@property(nonatomic) NSString* avgBuyPrice;
/* 매수평균가 수정 여부 [optional]
 */
@property(nonatomic) NSNumber* avgBuyPriceModified;
/* 평단가 기준 화폐 [optional]
 */
@property(nonatomic) NSString* unitCurrency;

@end
