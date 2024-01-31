@class UINavigationItem, NSURL, NSString;

@interface FamilyCircleUI.FAFamilySettingsViewControllerV2 : FARestorableViewController <FamilyCircleUI.FAFamilySettingsPageSwiftUIDelegate> {
    void /* unknown type, empty encoding */ appleAccount;
    void /* unknown type, empty encoding */ grandSlamSigner;
    void /* unknown type, empty encoding */ pictureStore;
    void /* unknown type, empty encoding */ accountManager;
    void /* unknown type, empty encoding */ activityIndicatorView;
    void /* unknown type, empty encoding */ activityIndicatorViewForAdd;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ locationViewModel;
    void /* unknown type, empty encoding */ familySettingsHelper;
    void /* unknown type, empty encoding */ addMemberButton;
    void /* unknown type, empty encoding */ currentStateController;
    void /* unknown type, empty encoding */ peopleDiscoveryService;
    void /* unknown type, empty encoding */ appleCashHandler;
    void /* unknown type, empty encoding */ appleCardFamilySettingsViewModel;
    void /* unknown type, empty encoding */ timeToView;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (void)addFamilyMemberButtonWasTapped;
- (void)didSelectSubscriptionWithURL:(NSURL *)a0 completion:(void (^)(void))a1;
- (void)didSelectSubscriptionWithURLMemberDetails:(NSURL *)a0 familyMemberDSID:(NSString *)a1 serviceName:(long long)a2 completion:(void (^)(void))a3;
- (void)didTapAddRemoteGuardianFor:(id)a0;
- (void)pendingFamilyMemberWasTapped:(id)a0;
- (void)stopFamilySharing;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAppleAccount:(id)a0 grandSlamSigner:(id)a1 familyCircle:(id)a2 pictureStore:(id)a3 accountManager:(id)a4 peopleDiscoveryService:(id)a5;

@end
