@class OBLinkTrayButton, OBTrayButton, NSString, HMHome;
@protocol HUConfigurationViewControllerDelegate;

@interface HUAccessoryFirmwareUpdateSetupViewController : HUImageOBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *enableAutomaticUpdatesButton;
@property (retain, nonatomic) OBLinkTrayButton *notNowButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)_doNotEnableAutomaticUpdates:(id)a0;
- (void)_enableAutomaticUpdates:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentImage:(id)a3;
- (Class)onboardingFlowClass;

@end
