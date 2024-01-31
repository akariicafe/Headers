@class AALoginResponseiCloudTokens, NSString, NSDictionary, AALoginResponseDataclasses, NSNumber, AALoginResponseAppleAccountInfo;

@interface AALoginAccountResponse : AACodableResponse

@property (readonly, nonatomic) NSNumber *status;
@property (readonly, nonatomic) NSString *statusMessage;
@property (readonly, nonatomic) NSDictionary *responseForDelegates;
@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) AALoginResponseAppleAccountInfo *appleAccountInfo;
@property (readonly, nonatomic) AALoginResponseiCloudTokens *iCloudTokens;
@property (readonly, nonatomic) AALoginResponseDataclasses *dataclasses;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)convertToLoginDelegatesResponse;
- (void)_parseResponse:(long long)a0 responseBody:(id)a1;
- (id)convertToProvisioningResponse;
- (id)initWithHttpStatus:(long long)a0 responseBody:(id)a1;
- (id)responseParametersForServiceIdentifier:(id)a0;

@end
