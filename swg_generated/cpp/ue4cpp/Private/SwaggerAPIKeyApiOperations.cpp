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
#include "SwaggerAPIKeyApiOperations.h"

#include "SwaggerModule.h"
#include "SwaggerHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace Swagger 
{

FString SwaggerAPIKeyApi::APIKeyInfoRequest::ComputePath() const
{
	FString Path(TEXT("/api_keys"));
	return Path;
}

void SwaggerAPIKeyApi::APIKeyInfoRequest::SetupHttpRequest(const TSharedRef<IHttpRequest>& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogSwagger, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void SwaggerAPIKeyApi::APIKeyInfoResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
	default:
		SetResponseString(TEXT("OK"));
		break;
	case 400:
		SetResponseString(TEXT("Bad Request"));
		break;
	case 401:
		SetResponseString(TEXT("Unauthorized"));
		break;
	case 403:
		SetResponseString(TEXT("Forbidden"));
		break;
	case 404:
		SetResponseString(TEXT("Not Found"));
		break;
	case 500:
		SetResponseString(TEXT("Internal Server Error"));
		break;
	}
}

bool SwaggerAPIKeyApi::APIKeyInfoResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}