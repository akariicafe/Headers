@class NSString;
@protocol HUConfigurationViewControllerDelegate;

@interface HUAnnounceSetupViewController : HUItemTableOBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>

@property (readonly, nonatomic) unsigned long long step;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)continuePressed:(id)a0;
- (id)initWithHome:(id)a0 step:(unsigned long long)a1;
- (Class)onboardingFlowClass;

@end
