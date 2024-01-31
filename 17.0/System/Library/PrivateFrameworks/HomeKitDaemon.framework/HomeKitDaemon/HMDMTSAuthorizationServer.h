@class HMDUIDialogPresenter, HMDAppleAccountManager, NSString;

@interface HMDMTSAuthorizationServer : HMFObject <HMFLogging, MTSAuthorizationServerInterface>

@property (readonly, nonatomic) HMDUIDialogPresenter *uiDialogPresenter;
@property (readonly, nonatomic) id /* block */ systemPreferenceReader;
@property (readonly, nonatomic) HMDAppleAccountManager *accountManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0;
- (void)checkRestrictedCharacteristicsAccessAllowedWithCompletionHandler:(id /* block */)a0;
- (id)initWithUIDialogPresenter:(id)a0 accountManager:(id)a1 systemPreferenceReader:(id /* block */)a2;
- (void)showRestrictedCharacteristicsAccessWarningAlert;

@end
