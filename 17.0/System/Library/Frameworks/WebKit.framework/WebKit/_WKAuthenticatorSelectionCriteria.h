@interface _WKAuthenticatorSelectionCriteria : NSObject

@property (nonatomic) long long authenticatorAttachment;
@property (nonatomic) long long residentKey;
@property (nonatomic) BOOL requireResidentKey;
@property (nonatomic) long long userVerification;

- (id)init;

@end
