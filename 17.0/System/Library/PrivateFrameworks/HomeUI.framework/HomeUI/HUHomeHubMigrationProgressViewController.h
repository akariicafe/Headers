@class NSString, UIActivityIndicatorView;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeHubMigrationProgressViewController : HUImageOBWelcomeController <HFHomeManagerObserver, HUConfigurationViewControllerFlow, HUConfigurationViewController>

@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_cleanUp;
- (void)homeManager:(id)a0 didUpdateHH2MigrationInProgressState:(BOOL)a1;
- (void)homeManager:(id)a0 didUpdateHH2State:(BOOL)a1;
- (void)_handleFailedMigration:(id)a0;
- (void)_handleSuccessfulMigration;
- (BOOL)_limitToNonScrollingContentHeight;
- (void)_startHH2Upgrade;
- (id)initWithOwnedHomes:(id)a0;
- (Class)onboardingFlowClass;

@end
