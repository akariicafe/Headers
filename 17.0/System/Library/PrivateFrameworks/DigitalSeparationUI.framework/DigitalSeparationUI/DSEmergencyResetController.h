@class SPBeaconManager, UIStackView, NSError, NSString, DSSharingPermissions, NSObject, OBBoldTrayButton, UIProgressView, DSAppSharing;
@protocol OS_dispatch_queue, DSNavigationDelegate;

@interface DSEmergencyResetController : DSOBWelcomeController <DSController>

@property (retain, nonatomic) DSSharingPermissions *permissions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) DSAppSharing *appSharing;
@property (retain, nonatomic) OBBoldTrayButton *boldButton;
@property (retain, nonatomic) NSError *resetError;
@property (nonatomic) BOOL isFetching;
@property (retain, nonatomic) SPBeaconManager *beaconManager;
@property (retain, nonatomic) UIStackView *progressStackView;
@property (retain, nonatomic) UIProgressView *progressView;
@property (nonatomic) BOOL userDidPressReset;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)showProgressBar;
- (void)hideProgressBar;
- (void)fetchSharingPermissions:(id /* block */)a0;
- (void)handleErrorsAndMoveToNextPane;
- (void)removeAllPairedDevicesOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)resetAllFirstPartySharing:(id /* block */)a0;
- (void)resetAllThirdPartyTCCs:(id /* block */)a0;
- (void)resetNecessaryFirstPartyPermissions:(id /* block */)a0;
- (void)safetyResetAll;
- (void)safetyResetAllPressed;
- (void)setDigitalSeparationTipsFlag;
- (void)updateProgressBar;

@end
