@class CSCoverSheetViewController, NSString, SBUIFlashlightController, SBLockScreenDefaults, CSLockScreenSettings;
@protocol SBFLockOutStatusProvider, CSCameraPrewarming;

@interface CSQuickActionsViewController : CSCoverSheetViewControllerBase <CSQuickActionsDelegate, SBUIFlashlightObserver> {
    SBUIFlashlightController *_flashlight;
    CSLockScreenSettings *_prototypeSettings;
    SBLockScreenDefaults *_lockScreenDefaults;
}

@property (nonatomic) BOOL animatingToCamera;
@property (weak, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (retain, nonatomic) id<SBFLockOutStatusProvider> lockOutController;
@property (retain, nonatomic) id<CSCameraPrewarming> cameraPrewarmer;
@property (nonatomic) BOOL suppressingVisibleChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceSupportsButtons;
+ (Class)viewClass;

- (id)quickActionsViewIfLoaded;
- (void)flashlightAvailabilityDidChange:(BOOL)a0;
- (id)init;
- (id)quickActionsView;
- (long long)presentationPriority;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateFlashlightButtonAvailability;
- (void)dealloc;
- (BOOL)isPortrait;
- (void)_updateFlashlightButtonAvailabilityRespectingSuppression:(BOOL)a0;
- (BOOL)allowsCameraPress;
- (long long)presentationType;
- (BOOL)interpretsLocationAsContent:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (BOOL)hasFlashlight;
- (void)_toggleFlashlight;
- (BOOL)allowsFlashlightInteraction;
- (void)_addStateCaptureHandlers;
- (long long)presentationStyle;
- (void)_featureLockStateDidChangeNotification:(id)a0;
- (BOOL)allowsFlashlight;
- (BOOL)hasCamera;
- (void)_updateFlashlightButtonState;
- (void)loadView;
- (void)touchBeganForButton:(id)a0;
- (BOOL)_shouldPrelaunchOnTouch;
- (void)touchEndedForButton:(id)a0;
- (void)_resetIdleTimer;
- (void)_tearDownFlashlight;
- (void)_deviceBlockStateDidChangeNotification:(id)a0;
- (void)_tearDownFlashlightIfOff;
- (void).cxx_destruct;
- (void)_launchCamera;
- (id)initWithLockScreenDefaults:(id)a0;
- (void)_setupFlashlight;
- (BOOL)_shouldPrewarmOnTouch;
- (BOOL)_supportsCamera;
- (void)fireActionForButton:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)flashlightLevelDidChange:(unsigned long long)a0;
- (BOOL)handleEvent:(id)a0;
- (BOOL)_isFlashlightOn;

@end
