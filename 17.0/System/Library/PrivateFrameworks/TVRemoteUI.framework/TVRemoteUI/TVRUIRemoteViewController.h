@class TVRAlertController, TVRUITouchpadViewController, TVRUIMediaControlsViewController, TVRKeyboardHaptic, TVRUISiriManager, UIViewController, TVRUIControlPanelViewController, UIButton, UIView, TVRUIDevicePickerViewController, NSString, TVRUINetworkObserver, TVRUITopButtonPanelViewController, NSArray, TVRMessageView, SFClient, CUSystemMonitor, TVRCSessionData;
@protocol TVRUITipSourceViewProvider, TVRUIDevice, TVRUIDeviceQuery, TVRUIStyleProvider, TVRUIRemoteViewControllerDelegate, TVRUIDeviceConnectionStatusDelegate, BSInvalidatable, UITraitChangeRegistration, TVRUIFindingSessionDelegate;

@interface TVRUIRemoteViewController : UIViewController <TVRUIDeviceDelegate, TVRUIDeviceSearchDelegate, TVRUIDevicePickerDelegate, TVRUITouchpadDelegate, TVRAlertControllerDelegate, _TVRUIEventDelegate, SBSHardwareButtonEventConsuming, TVRUIContentPresenter>

@property (retain, nonatomic) id<TVRUIDevice> activeDevice;
@property (copy, nonatomic) NSString *activeDeviceIdentifier;
@property (retain, nonatomic) id<TVRUIDevice> authenticatingDevice;
@property (retain, nonatomic) id<TVRUIDeviceQuery> deviceQuery;
@property (copy, nonatomic) NSString *preferredDeviceIdentifier;
@property (nonatomic) long long deviceIdentifierType;
@property (nonatomic) long long deviceType;
@property (nonatomic) long long launchContext;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (retain, nonatomic) NSArray *viewProviders;
@property (retain, nonatomic) TVRUITopButtonPanelViewController *topButtonPanelViewController;
@property (retain, nonatomic) TVRUITouchpadViewController *touchpadViewController;
@property (retain, nonatomic) TVRUIControlPanelViewController *controlPanelViewController;
@property (retain, nonatomic) UIView *blackGradientView;
@property (retain, nonatomic) TVRUIDevicePickerViewController *devicePickerViewController;
@property (retain, nonatomic) TVRUIMediaControlsViewController *mediaControlsViewController;
@property (retain, nonatomic) TVRAlertController *keyboardController;
@property (retain, nonatomic) TVRAlertController *authenticationAlertController;
@property (nonatomic, getter=isEditingSessionActive) BOOL editingSessionActive;
@property (retain, nonatomic) TVRMessageView *messageView;
@property (retain, nonatomic) TVRUINetworkObserver *networkObserver;
@property (nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (retain, nonatomic) TVRKeyboardHaptic *keyboardHaptic;
@property (nonatomic, getter=isSiriSessionActive) BOOL siriSessionActive;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) SFClient *sharingClient;
@property (retain, nonatomic) UIButton *tapToRadarButton;
@property (retain, nonatomic) CUSystemMonitor *systemMonitor;
@property (copy, nonatomic) id /* block */ deviceQueryThresholdBlock;
@property (nonatomic) BOOL supportsVolumeControl;
@property (nonatomic) BOOL shouldRestoreVolumeControlSupport;
@property (nonatomic) BOOL supportsSiri;
@property (copy, nonatomic) NSString *launchContextDesc;
@property (retain, nonatomic) TVRCSessionData *sessionData;
@property (retain, nonatomic) TVRUISiriManager *siriManager;
@property (retain, nonatomic) id<BSInvalidatable> volumeDecreaseSBSInvalidator;
@property (retain, nonatomic) id<BSInvalidatable> volumeIncreaseSBSInvalidator;
@property (nonatomic, getter=isConfigured) BOOL configured;
@property (readonly, nonatomic) BOOL shouldDisconnectAndStopConnections;
@property (nonatomic) BOOL isInReducedBacklightMode;
@property (retain, nonatomic) id<UITraitChangeRegistration> traitChangeRegistration;
@property (nonatomic) BOOL deviceQueryThresholdReached;
@property (nonatomic) BOOL isFindingSessionActive;
@property (nonatomic) BOOL shouldStartFindingSession;
@property (weak, nonatomic) id<TVRUIRemoteViewControllerDelegate> delegate;
@property (weak, nonatomic) id<TVRUIDeviceConnectionStatusDelegate> deviceConnectionStatusDelegate;
@property (weak, nonatomic) id<TVRUIFindingSessionDelegate> findingSessionDelegate;
@property (nonatomic) double backgroundCornerRadius;
@property (nonatomic) BOOL isInSecureWindow;
@property (readonly, nonatomic) UIViewController<TVRUITipSourceViewProvider> *tipSourceViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissPresentedContentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_disconnect;
- (id)init;
- (void)_deactivate;
- (void)_activate;
- (void)dealloc;
- (void)sceneDidEnterBackground:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)sceneDidActivate:(id)a0;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)consumeSinglePressDownForButtonKind:(long long)a0;
- (void)configureWithContext:(id)a0;
- (void)configureWithDeviceIdentifier:(id)a0 identifierType:(long long)a1 deviceType:(long long)a2 launchContext:(long long)a3;
- (void)_tapToRadar;
- (void)_presentAlertWithTitle:(id)a0 message:(id)a1;
- (void)sceneWillDeactivate:(id)a0;
- (void)_updateControlsAppearance;
- (void)_cancelPairing;
- (void)device:(id)a0 supportsFindMyRemote:(BOOL)a1;
- (void)deviceBeganConnecting:(id)a0;
- (void)suggestedDevices:(id)a0;
- (void)connectionServiceDidInvalidate:(id)a0;
- (void)device:(id)a0 didUpdateNowPlayingInfo:(id)a1;
- (void)stopConnections;
- (void)_startDeviceQueryThresholdTimer;
- (void)bluetoothAvailabilityDidUpdate:(BOOL)a0;
- (void)showMessageWithError:(id)a0 andDevice:(id)a1;
- (void)_cancelHideConnectingAndShowDevicePicker;
- (void)_cancelShowConnectingSpinner;
- (void)_connectToDevice:(id)a0 connectionContext:(long long)a1;
- (void)_connectToMostRelevantDevice;
- (void)_connectToPreferredDeviceFromDeviceList:(id)a0;
- (long long)_connectionContextFromLaunchContext:(long long)a0;
- (void)_createBlackGradientView;
- (void)_disableSearch;
- (void)_disconnectSystemInitiated;
- (void)_disconnectUserInitiated;
- (void)_enableGuideButtons:(BOOL)a0 animated:(BOOL)a1;
- (void)_enableSearch;
- (void)_enableSkipControls:(BOOL)a0 animated:(BOOL)a1;
- (void)_expandDeviceList;
- (void)_forceShowMediaControls;
- (void)_hideConnectingAndShowDevicePicker;
- (void)_hideMessageContent;
- (void)_initSessionStatistics;
- (void)_installTapToRadarButton;
- (void)_layoutTouchpadExpanded:(BOOL)a0;
- (void)_logSessionStatistics;
- (void)_performSiriEffectsWithButtonEvent:(id)a0;
- (void)_presentKeyboardWithAttributes:(id)a0 initialText:(id)a1;
- (void)_presentLegacyPairingAlertWithCode:(id)a0;
- (void)_presentPairingAlert;
- (void)_presentTextPasswordAlert;
- (void)_resetActiveDevice;
- (void)_selectDevice:(id)a0 withConnectionContext:(long long)a1;
- (void)_setupChildViewControllers;
- (void)_setupDevicePickerController;
- (void)_setupNetworkObserverIfNeeded;
- (BOOL)_shouldAllowKeyboardToBePresented;
- (void)_showBluetoothDisabledAlertWithCompletion:(id /* block */)a0;
- (void)_showConnectingSpinner;
- (void)_showFindingAlert;
- (void)_showSearchingSpinnerIfNeeded;
- (void)_startFindingSessionForDevice:(id)a0;
- (void)_stopDeviceQueryThresholdTimer;
- (void)_stopFindingSessionForDevice:(id)a0;
- (id)_stringForConnectionContext:(long long)a0;
- (id)_stringForDeviceDeviceIdentifierType:(long long)a0;
- (id)_stringForLaunchContextType:(long long)a0;
- (void)_toggleControlAvailability;
- (double)_topButtonPanelHeight;
- (void)_turnOnBluetoothIfNeededWithCompletionBlock:(id /* block */)a0;
- (void)_updateSecureWindowState;
- (void)alertController:(id)a0 enteredText:(id)a1;
- (void)alertController:(id)a0 generatedTextInputPayload:(id)a1;
- (void)alertControllerCancelled:(id)a0;
- (void)alertControllerHitKeyboardReturnKey:(id)a0;
- (void)alertControllerPressedDictationButton:(id)a0;
- (void)alertControllerReleasedDictationButton:(id)a0;
- (id)animatorForDismissalAsAlert;
- (id)animatorForPresentationAsAlert;
- (void)backlightLuminanceDidChange;
- (void)clearMessageContent;
- (void)configureWithDeviceIdentifier:(id)a0 type:(long long)a1 showPicker:(BOOL)a2;
- (void)device:(id)a0 beganTextEditingWithAttributes:(id)a1 initialText:(id)a2;
- (void)device:(id)a0 didEncounterAuthenticationThrottle:(long long)a1;
- (void)device:(id)a0 didUpdateAttributes:(id)a1;
- (void)device:(id)a0 didUpdateSiriRemoteFindingSessionState:(long long)a1;
- (void)device:(id)a0 didUpdateText:(id)a1;
- (void)device:(id)a0 endedTextEditingWithAttributes:(id)a1 endingText:(id)a2;
- (void)device:(id)a0 hasCaptionsEnabled:(BOOL)a1;
- (void)device:(id)a0 hasGuideButtonEnabled:(BOOL)a1;
- (void)device:(id)a0 hidesMediaControls:(id)a1;
- (void)device:(id)a0 needsMediaControls:(id)a1;
- (void)device:(id)a0 supportsSiri:(BOOL)a1 volumeControl:(BOOL)a2;
- (void)device:(id)a0 supportsVolumeControl:(BOOL)a1;
- (void)deviceDidConnect:(id)a0;
- (void)deviceDidDisconnect:(id)a0 reason:(long long)a1 error:(id)a2;
- (void)deviceDidEncounterAuthenticationChallenge:(id)a0 passwordType:(unsigned long long)a1 passcode:(id)a2;
- (void)deviceListUpdated:(id)a0;
- (void)devicePicked:(id)a0;
- (void)devicePickerWillChangeState:(BOOL)a0 animated:(BOOL)a1;
- (void)fetchPreferredDeviceIdentifier;
- (void)findButtonTappedForDevice:(id)a0;
- (void)findingSessionDidEnd;
- (void)findingSessionDidStart;
- (void)generatedButtonEvent:(id)a0;
- (void)generatedTouchEvent:(id)a0;
- (BOOL)hasPresentedContent;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 forTouchpadView:(id)a2;
- (void)keyboardRequested;
- (void)networkReachabilityDidUpdate:(BOOL)a0;
- (void)showGenericUnableToConnectMessage;
- (void)showLoadingSpinner;
- (void)showMessageWithTitle:(id)a0 message:(id)a1;
- (void)showMessageWithTitle:(id)a0 message:(id)a1 titleFont:(id)a2;
- (void)showNoAssociatedNetworkMessage;
- (void)showNoWIFIConnectionMessage;
- (void)showPairingMessageWithCode:(id)a0;
- (void)showSearchingSpinner;
- (void)showThrottleConnectMessage;
- (void)startConnections;
- (void)volumeDownEventGenerated;
- (void)volumeUpEventGenerated;
- (void)willShowDirectionalControls;

@end
