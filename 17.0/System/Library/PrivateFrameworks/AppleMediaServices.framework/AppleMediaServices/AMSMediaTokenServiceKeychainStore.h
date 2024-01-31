@class NSString;

@interface AMSMediaTokenServiceKeychainStore : NSObject

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *keychainAccessGroup;

- (BOOL)storeToken:(id)a0;
- (id)retrieveToken;
- (struct __CFDictionary { } *)_copyKeychainQuery;
- (BOOL)_removeTokenFromKeychain;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1;
- (void).cxx_destruct;
- (BOOL)deleteToken;

@end
