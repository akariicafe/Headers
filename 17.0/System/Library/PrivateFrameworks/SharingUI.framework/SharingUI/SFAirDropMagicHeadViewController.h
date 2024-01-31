@class SFMagicHeadWheelView, CMMotionManager, UILabel, NSObject;
@protocol SFAirDropMagicHeadViewControllerDelegate;

@interface SFAirDropMagicHeadViewController : UIViewController <SFMagicHeadWheelViewDelegate>

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *nameLabel2;
@property (retain, nonatomic) UILabel *secondLabel;
@property (nonatomic) BOOL viewVisible;
@property (nonatomic) BOOL motionUpdatesStarted;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (nonatomic) double initialAngleDegrees;
@property (nonatomic) long long currentOrientation;
@property (retain, nonatomic) SFMagicHeadWheelView *wheelView;
@property (weak) NSObject<SFAirDropMagicHeadViewControllerDelegate> *delegate;
@property (nonatomic) unsigned long long numberOfDots;
@property (nonatomic) double dotsRadius;
@property (nonatomic, getter=isMagicHead) BOOL magicHead;
@property (readonly, nonatomic) BOOL shouldBeHidden;
@property (nonatomic) BOOL enabled;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)start;
- (void)viewDidLayoutSubviews;
- (void)update;
- (void)viewDidLoad;
- (void)stop;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)updateLabels;
- (void)resetTransferStateWithRealName:(id)a0;
- (void)calculatePreferredSize;
- (void)handleDeviceMotion:(id)a0;
- (id)headForRealName:(id)a0;
- (void)magicHeadChangedFacingDegree:(double)a0;
- (void)magicHeadChangedSelectionToNode:(id)a0;
- (void)magicHeadDidFinishTransferForNode:(id)a0;
- (void)magicHeadDidStartTransferForNode:(id)a0;
- (void)magicHeadDidTerminateTransferForNode:(id)a0;
- (void)magicHeadSelectedHeadRequestingDisabledState:(BOOL)a0;
- (void)magicHeadSelectedHeadRequestingSubtitleTextChangeForState:(long long)a0;
- (void)magicHeadSelectedNodeTapped:(id)a0;
- (void)resetSecondLabel;
- (void)setSecondLabelText:(id)a0 withTextColor:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)subscribedProgress:(id)a0 forPersonWithRealName:(id)a1;
- (void)transferCancelledToPerson:(id)a0;
- (void)updateNodes:(id)a0 withPersonToProgress:(id)a1;
- (void)userSelectedWithRealName:(id)a0;

@end
