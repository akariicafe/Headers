@class UIView, NSString, NSArray, CPSLayoutHelperView, CPSManeuversCardView, NSMutableSet, NSLayoutConstraint, CPSPausedCardView, UIColor;

@interface CPSNavigationCardViewController : UIViewController <CPSNavigationDisplaying>

@property (retain, nonatomic) NSLayoutConstraint *containerViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *containerViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *sizingViewBottomConstraint;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) CPSManeuversCardView *currentManeuversCardView;
@property (retain, nonatomic) CPSPausedCardView *currentPausedCardView;
@property (retain, nonatomic) NSMutableSet *navigationCardHiddenRequesters;
@property (nonatomic) BOOL passesLinkCheck;
@property (copy, nonatomic) NSArray *layoutHelperVerticalConstraints;
@property (readonly, nonatomic) CPSLayoutHelperView *layoutHelperView;
@property (retain, nonatomic) UIColor *guidanceBackgroundColor;
@property (nonatomic) BOOL navigationCardHidden;
@property (copy, nonatomic) NSString *navigatingBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_shouldAnimate;
- (void)showManeuvers:(id)a0 usingDisplayStyles:(id)a1;
- (void)_showPausedViewForReason:(unsigned long long)a0 description:(id)a1 pauseCardColor:(id)a2;
- (void)_transitionFromViews:(id)a0 inView:(id)a1;
- (void)_updateCardBackgroundColors;
- (void)_updateHelperConstraints;
- (void)_updateLinkedCheck;
- (void)_updateNavigationCardHidden;
- (void)_updateSizingViewConstraintsForView:(id)a0;
- (void)availableHeightChangedTo:(double)a0;
- (void)navigator:(id)a0 didEndTrip:(BOOL)a1;
- (void)navigator:(id)a0 pausedTripForReason:(unsigned long long)a1 description:(id)a2 usingColor:(id)a3;
- (void)setNavigationCardHidden:(BOOL)a0 forRequester:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateEstimates:(id)a0 forManeuver:(id)a1;
- (void)updateTripEstimates:(id)a0;

@end
