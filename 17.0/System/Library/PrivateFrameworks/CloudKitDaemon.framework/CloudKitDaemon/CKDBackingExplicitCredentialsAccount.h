@class NSString, NSDictionary, ACAccount, NSError;

@interface CKDBackingExplicitCredentialsAccount : CKDBackingAccount <AKAppleIDAuthenticationDelegate>

@property (nonatomic, readonly) long long accountType;
@property (nonatomic, readonly) ACAccount *ckAccount;
@property (nonatomic, readonly) NSString *password;
@property (retain) ACAccount *fakeCKAccount;
@property (retain) NSString *hsa2DevicePassword;
@property (readonly, nonatomic) NSString *hsa2RecoveryKey;
@property (readonly, nonatomic) NSString *hsa2AccountPassword;

+ (void)initialize;
+ (id)explicitCredentialsAccountWithEmail:(id)a0 password:(id)a1 recoveryKey:(id)a2 propertyOverrides:(id)a3 overridesByDataclass:(id)a4;

- (BOOL)isDataclassEnabled:(id)a0;
- (void)updateAccountPropertiesAndSaveAccount:(void (^)(BOOL, NSError *))a0;
- (BOOL)authenticationController:(id)a0 shouldContinueWithAuthenticationResults:(id)a1 error:(id)a2 forContext:(id)a3;
- (void).cxx_destruct;
- (void)_setOverridesOnVettingContext:(id)a0;
- (id)cloudKitAuthTokenWithError:(id *)a0;
- (id)iCloudAuthTokenWithError:(id *)a0;
- (id)initWithAppleAccount:(id)a0 hsa2RecoveryKey:(id)a1 hsa2AccountPassword:(id)a2;
- (void)renewAuthTokenWithOptions:(NSDictionary *)a0 completionHandler:(void (^)(BOOL, NSError *))a1;

@end
