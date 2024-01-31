@class CLFindMyAccessoryManager, NSString, UIActivityIndicatorView, FAFamilyMember, NSLayoutConstraint, NSObject;
@protocol OS_dispatch_group, DSNavigationDelegate;

@interface DSCompletedController : DSOBWelcomeController <CLFindMyAccessoryManagerDelegate, DSController>

@property (retain) FAFamilyMember *familyMember;
@property (nonatomic) BOOL walletSharing;
@property (nonatomic) BOOL UTAlertsEnabled;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchingGroup;
@property (retain, nonatomic) CLFindMyAccessoryManager *accessoryManager;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)findMyAccessoryManager:(id)a0 didFailWithError:(id)a1 forDevice:(id)a2;
- (void)findMyAccessoryManager:(id)a0 didFetchStatusOfUTEnablementRequirementsWithStatus:(id)a1 withError:(id)a2;
- (void)fetchCompleted;
- (void)addFamilyBullet;
- (void)addWalletBullet;
- (void)addHomeBullet;
- (void)addUTAlerts;
- (void)fetchAdditionalSharingWithCompletion:(id /* block */)a0;
- (void)learnMorePressed;
- (void)startContentSpinner;
- (void)stopContentSpinner;

@end
