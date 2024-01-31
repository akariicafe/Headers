@class NSString;
@protocol CKDTestDeviceProtocol, CKDTestAccountProtocol;

@interface CKDBackingMockAccount : CKDBackingAccount {
    NSString *_dsid;
}

@property (readonly, nonatomic) id<CKDTestAccountProtocol> testAccount;
@property (readonly, nonatomic) id<CKDTestDeviceProtocol> testDevice;

+ (id)mockAccountWithTestAccount:(id)a0 testDevice:(id)a1;

- (id)dsid;
- (id)displayedHostname;
- (id)personaIdentifier;
- (BOOL)isDataclassEnabled:(id)a0;
- (id)sharingURLHostname;
- (id)identifier;
- (id)primaryEmail;
- (id)username;
- (id)fullName;
- (long long)accountType;
- (id)serverPreferredPushEnvironment;
- (BOOL)isPrimaryEmailVerified;
- (void).cxx_destruct;
- (BOOL)isDataclassEnabledForCellular:(id)a0;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)a0 completionHandler:(id /* block */)a1;
- (id)_initMockAccountWithTestAccount:(id)a0 testDevice:(id)a1;
- (id)accountPropertiesForDataclass:(id)a0;
- (BOOL)canRenew;
- (id)cloudKitAuthTokenWithError:(id *)a0;
- (id)iCloudAuthTokenWithError:(id *)a0;
- (void)renewAuthTokenInStore:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)validateVettingToken:(id)a0 vettingEmail:(id)a1 vettingPhone:(id)a2 completionHandler:(id /* block */)a3;

@end
