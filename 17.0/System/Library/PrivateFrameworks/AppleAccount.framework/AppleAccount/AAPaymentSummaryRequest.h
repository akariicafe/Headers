@class NSString;

@interface AAPaymentSummaryRequest : AAAppleIDSettingsRequest

@property (copy, nonatomic) NSString *secondaryAuthToken;
@property (copy, nonatomic) NSString *heartbeatToken;

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (BOOL)forceGSToken;

@end
