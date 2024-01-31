@class OBLinkTrayButton, OBTrayButton, NSString, HMHome;
@protocol HUConfigurationViewControllerDelegate;

@interface HUPersonalRequestsCustomizeViewController : HUItemTableOBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *usePRButton;
@property (retain, nonatomic) OBLinkTrayButton *customizeButton;
@property (retain, nonatomic) NSString *finePrintFooterText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_dontSetupPersonalRequests:(id)a0;
- (void)_setupPersonalRequests:(id)a0;
- (id)hu_preloadContent;
- (id)initWithLocationDevice:(id)a0 home:(id)a1;
- (Class)onboardingFlowClass;

@end
