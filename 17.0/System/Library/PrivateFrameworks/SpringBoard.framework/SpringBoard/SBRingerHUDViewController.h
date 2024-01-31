@class NSString, NSTimer, SBRingerPillView, UIViewController;
@protocol BNPresentableContext, SBRingerHUDViewControllerDelegate;

@interface SBRingerHUDViewController : UIViewController <BNPresentable, SBRingerNoticeUICoordinating>

@property (retain, nonatomic) SBRingerPillView *pillView;
@property (nonatomic) BOOL lastEventIsAVolumeChange;
@property (nonatomic) double overshoot;
@property (nonatomic, getter=isPresentableAppearingOrAppeared) BOOL presentableAppearingOrAppeared;
@property (nonatomic) BOOL shouldExtendDismissalTimerUponDidAppear;
@property (retain, nonatomic) NSTimer *dismissalTimer;
@property (weak, nonatomic) id<SBRingerHUDViewControllerDelegate> delegate;
@property (readonly, nonatomic) long long presentableBehavior;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isRingerSilent) BOOL ringerSilent;
@property (nonatomic) float volume;
@property (readonly, nonatomic, getter=isPresented) BOOL presented;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void).cxx_destruct;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void)_dismiss;
- (void)presentableWillAppearAsBanner:(id)a0;
- (id)presentableDescription;
- (void)setVolume:(float)a0 animated:(BOOL)a1 forKeyPress:(BOOL)a2;
- (void)_layoutPillView;
- (void)_extendDismissalTimer;
- (void)_updateStateAnimated:(BOOL)a0 invert:(BOOL)a1;
- (void)_updateVolumeSliderAnimated:(BOOL)a0;
- (void)buttonReleased;
- (void)nudgeUp:(BOOL)a0;
- (void)presentForMuteChange:(BOOL)a0;

@end
