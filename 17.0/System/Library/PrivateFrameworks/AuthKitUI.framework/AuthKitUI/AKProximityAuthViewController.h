@class UIView, AKBringDeviceCloseMicaView, AKAppleLogoMicaView, AVPlayerViewController, NSString, OBTrayButton, VPPresenterView, AKProximityMessageViewModel, UILabel, AVPlayer;
@protocol AKProximityViewDelegate;

@interface AKProximityAuthViewController : OBWelcomeController

@property (retain, nonatomic) AKProximityMessageViewModel *viewModel;
@property (retain, nonatomic) VPPresenterView *visualPairingView;
@property (retain, nonatomic) UILabel *pinCodeLabel;
@property (retain, nonatomic) AVPlayer *videoPlayer;
@property (retain, nonatomic) AVPlayerViewController *videoViewController;
@property (retain, nonatomic) AKBringDeviceCloseMicaView *proximityMicaView;
@property (retain, nonatomic) AKAppleLogoMicaView *appleLogoMicaView;
@property (retain, nonatomic) UIView *logoContainerView;
@property (nonatomic) BOOL _started;
@property (nonatomic) long long retryAttempts;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (copy, nonatomic) id /* block */ primaryButtonAction;
@property (copy, nonatomic) id /* block */ alternateButtonAction;
@property (copy, nonatomic) id /* block */ deallocAction;
@property (copy, nonatomic) NSString *verificationCode;
@property (weak, nonatomic) id<AKProximityViewDelegate> delegate;
@property (retain, nonatomic) OBTrayButton *primaryButton;
@property (retain, nonatomic) OBTrayButton *secondaryButton;

- (void)_addContentView;
- (void)_start;
- (id)initWithViewModel:(id)a0;
- (void)didBecomeActive:(id)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_stop;
- (void)viewDidAppear:(BOOL)a0;
- (void)willResignActive:(id)a0;
- (void)_configureViews;
- (unsigned int)_pairingFlags;
- (BOOL)_isDarkMode;
- (void)_addHeaderView;
- (void)_primaryFallbackButtonSelected:(id)a0;
- (void)_addPlayer;
- (void)_addPrimaryButton;
- (void)_addPrivacyLinkController;
- (void)_addSecondaryButton;
- (void)_cancelBarButtonItemPressed:(id)a0;
- (void)_cleanupOldViews;
- (void)_createPlayer;
- (id)_maskBackgroundColor;
- (id)_pairingBackgroundColor;
- (void)_secondaryFallbackButtonSelected:(id)a0;
- (BOOL)_shouldShowVisualPairing;
- (void)_showBroadcastingContent;
- (void)_showPinCode;
- (void)_showVisualPairingContent;
- (void)_stopPairingInterface;
- (void)_videoReachedEnd:(id)a0;
- (void)updateViewWithViewModel:(id)a0;

@end
