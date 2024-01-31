@class NSString, ACFPrincipal, NSData;

@interface ACMKeychainTokenInfo : ACFKeychainItemInfo

@property (retain) NSString *indicator;
@property (retain) ACFPrincipal *principal;
@property (retain) NSData *tokenData;

+ (id)keychainTokenInfoWithPrincipal:(id)a0;
+ (id)classCode;
+ (id)keychainTokenInfoWithPrincipal:(id)a0 indicator:(id)a1;

- (id)init;

@end
