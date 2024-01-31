@class NSString, NSNumber;

@interface EDAMAuthenticationParameters : FATObject

@property (retain, nonatomic) NSString *usernameOrEmail;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *ssoLoginToken;
@property (retain, nonatomic) NSString *consumerKey;
@property (retain, nonatomic) NSString *consumerSecret;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSString *deviceDescription;
@property (retain, nonatomic) NSNumber *supportsTwoFactor;
@property (retain, nonatomic) NSNumber *supportsBusinessOnlyAccounts;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
