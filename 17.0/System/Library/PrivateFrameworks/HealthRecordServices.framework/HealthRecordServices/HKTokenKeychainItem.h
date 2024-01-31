@class NSString;

@interface HKTokenKeychainItem : NSObject

@property (readonly, copy, nonatomic) NSString *name;

+ (BOOL)_addTokenIdentifiedByName:(id)a0 data:(id)a1 synchronizable:(BOOL)a2 error:(out id *)a3;
+ (BOOL)_deleteTokenIdentifiedByName:(id)a0 error:(out id *)a1;
+ (id)_fetchTokenIdentifiedByName:(id)a0 error:(id *)a1;
+ (id)_identifyingAttributesForKeyIdentifiedByName:(id)a0;
+ (BOOL)_isTokenPresentIdentifiedByName:(id)a0 error:(id *)a1;
+ (id)_keyQueryAttributesForKeyIdentifiedByName:(id)a0;
+ (BOOL)_makeTokenSynchronizableIfNeededIdentifiedByName:(id)a0 error:(id *)a1;
+ (id)_storableAttributesForKeyIdentifiedByName:(id)a0 data:(id)a1 modificationDate:(id)a2 synchronizable:(BOOL)a3;
+ (BOOL)_storeTokenIdentifiedByName:(id)a0 data:(id)a1 synchronizable:(BOOL)a2 error:(out id *)a3;
+ (BOOL)_updateTokenIdentifiedByName:(id)a0 data:(id)a1 synchronizable:(BOOL)a2 error:(out id *)a3;
+ (id)tokenKeychainItemSecurityClass;

- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)deleteWithError:(id *)a0;
- (id)fetchWithError:(id *)a0;
- (BOOL)storeSynchronizableToken:(id)a0 error:(id *)a1;
- (BOOL)isPresentWithError:(id *)a0;
- (BOOL)makeTokenSynchronizableIfNeededWithError:(id *)a0;
- (BOOL)storeLocalToken:(id)a0 error:(id *)a1;

@end
