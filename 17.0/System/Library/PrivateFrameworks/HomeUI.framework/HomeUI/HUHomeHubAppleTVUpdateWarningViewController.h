@class OBBoldTrayButton, NSArray, NSString, OBHeaderAccessoryButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeHubAppleTVUpdateWarningViewController : HUItemTableOBWelcomeController <HFItemManagerDelegate, HUConfigurationViewControllerFlow, HUConfigurationViewController>

@property (retain, nonatomic) OBHeaderAccessoryButton *linkButton;
@property (retain, nonatomic) OBBoldTrayButton *commitButton;
@property (nonatomic) BOOL blockMigration;
@property (retain, nonatomic) NSArray *appleTVs;
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
- (void)_commitOrContinue;
- (id)_commitOrContinueButtonTitle;
- (void)_continueTapped:(id)a0;
- (void)_openLink:(id)a0;
- (void)_presentConfirmationAlert;
- (id)initWithAppleTVsToUpdate:(id)a0 shouldBlockMigration:(BOOL)a1;
- (Class)onboardingFlowClass;

@end
