@class NSString, CDPUIDeviceToDeviceEncryptionHelper;

@interface CKCloudKitAccountRepairController : NSObject <CDPUIDeviceToDeviceEncryptionHelperDelegate>

@property (retain, nonatomic) CDPUIDeviceToDeviceEncryptionHelper *encryptionHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)authenticationContext;
- (id)accountStore;
- (void).cxx_destruct;
- (id)primaryAppleAccount;
- (id)AKSecurityUpgradeContextMessages;
- (id)CDPUIDeviceToDeviceEncryptionHelperWithPresentingViewController:(id)a0;
- (Class)authenticationContextClass;
- (void)beginRepairWithPresentingViewController:(id)a0 completion:(id /* block */)a1;
- (void)deviceToDeviceEncryptionHelper:(id)a0 shouldContinueUpgradingUserToHSA2WithCompletion:(id /* block */)a1;

@end
