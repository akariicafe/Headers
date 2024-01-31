@class NSMutableArray, NSDate, NSString, UISegmentedControl, UIView, PencilEducationElementViewController;
@protocol PencilEducationViewControllerDelegate;

@interface PencilEducationViewController : UIViewController <PKScribbleInteractionDelegate, PencilEducationElementViewControllerDelegate>

@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) PencilEducationElementViewController *displayedController;
@property (retain, nonatomic) NSMutableArray *viewControllers;
@property (nonatomic) unsigned long long pendingTransitionIndex;
@property (nonatomic) unsigned long long animationBeginRequestIndex;
@property (nonatomic) BOOL setupComplete;
@property (retain, nonatomic) NSDate *appearDate;
@property (nonatomic) BOOL didDisappear;
@property (nonatomic) BOOL didRunInitialAppearActions;
@property (weak, nonatomic) id<PencilEducationViewControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL isAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedTitle;

- (void)dealloc;
- (id)traitCollection;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)doneButtonPressed:(id)a0;
- (void)segmentedControlDidChange:(id)a0;
- (void)_configureViewControllersIfNecessary;
- (void)addControllerToContainer:(id)a0;
- (void)beginAnimationIfNecessaryForElementController:(id)a0 delay:(double)a1;
- (double)calculateFittingHeightByTemporarilyAdjustingFrameForWidth:(double)a0;
- (void)cancelScheduledAnimations;
- (void)elementControllerDidAppear:(id)a0;
- (void)elementControllerWillReplay:(id)a0;
- (BOOL)shouldBeginAnimationForElementController:(id)a0;

@end
