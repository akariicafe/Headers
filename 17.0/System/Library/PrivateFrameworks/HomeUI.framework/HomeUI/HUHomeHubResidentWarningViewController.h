@class OBBoldTrayButton, OBHeaderAccessoryButton, NSString;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeHubResidentWarningViewController : HUImageOBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController>

@property (retain, nonatomic) OBHeaderAccessoryButton *linkButton;
@property (retain, nonatomic) OBBoldTrayButton *commitButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)_openURL:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_cancelFlow:(id)a0;
- (void)_commitOrContinue:(id)a0;
- (id)_commitOrContinueButtonTitle;
- (BOOL)_limitToNonScrollingContentHeight;
- (void)_openLink:(id)a0;
- (id)initWithiPadOnlyHub:(BOOL)a0;
- (Class)onboardingFlowClass;

@end
