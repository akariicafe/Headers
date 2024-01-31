@class MRUAudioModuleController, MRUVolumeBackgroundView, NSString;
@protocol MRUVolumeBackgroundViewControllerDelegate;

@interface MRUVolumeBackgroundViewController : UIViewController <MRUAudioModuleControllerObserver, UIGestureRecognizerDelegate, CCUIContentModuleBackgroundViewController>

@property (retain, nonatomic) MRUVolumeBackgroundView *view;
@property (retain, nonatomic) MRUVolumeBackgroundView *viewIfLoaded;
@property (retain, nonatomic) MRUAudioModuleController *audioModuleController;
@property (weak, nonatomic) id<MRUVolumeBackgroundViewControllerDelegate> delegate;
@property (nonatomic) float systemVolumeValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)audioModuleController:(id)a0 listeningModeController:(id)a1 didChangePrimaryListeningMode:(id)a2;
- (void)updatePrimaryListeningModeButton;
- (void)primaryListeningModeButtonDidChangeValue:(id)a0;
- (id)initWithAudioModuleController:(id)a0;
- (void)audioModuleController:(id)a0 spatialAudioController:(id)a1 didChangeNowPlayingInfo:(id)a2;
- (void)secondaryListeningModeButtonDidChangeValue:(id)a0;
- (void)viewDidLoad;
- (void)audioModuleController:(id)a0 systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)a1;
- (void)didTapSecondaryListeningModeButton:(id)a0;
- (void)audioModuleController:(id)a0 listeningModeController:(id)a1 didChangeAvailablePrimaryListeningMode:(id)a2;
- (void)didTapPrimaryListeningModeButton:(id)a0;
- (void)audioModuleController:(id)a0 systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)a1;
- (void)audioModuleController:(id)a0 conversationAwarenessController:(id)a1 didChangeConversationAwarenessEnabled:(BOOL)a2;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)audioModuleController:(id)a0 spatialAudioController:(id)a1 didChangeAvailableSpatialModes:(id)a2;
- (void)loadView;
- (void)audioModuleController:(id)a0 conversationAwarenessController:(id)a1 didChangeConversationAwarenessSupported:(BOOL)a2;
- (void)updateVisibility;
- (void)audioModuleController:(id)a0 listeningModeController:(id)a1 didChangeAvailableSecondaryListeningModes:(id)a2;
- (void)audioModuleController:(id)a0 spatialAudioController:(id)a1 didChangeSelectedSpatialMode:(id)a2;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)updateConversationAwarenessButton;
- (void)spatialAudioModeButtonDidChangeValue:(id)a0;
- (void)updateSecondaryListeningModeButton;
- (void)audioModuleController:(id)a0 listeningModeController:(id)a1 didChangeSecondaryListeningMode:(id)a2;
- (void)conversationAwarenessButtonDidChangeValue:(id)a0;
- (void)updateNowPlaying;
- (void)didTapSpatialAudioModeButton:(id)a0;
- (void)collapseExpandableButtons;
- (void)updatePrimaryRouteView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })effectiveContentFrameForContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)updateSecondaryRouteView;
- (void)performLayoutWithAnimation:(id /* block */)a0;
- (void)updateSpatialAudioModeButton;

@end
