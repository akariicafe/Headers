@class CPSManeuversCardView, CPSDashboardEstimatesViewController, CPSPausedCardView, NSObject, NSString, CPSInstrumentClusterCardLayout, UIViewController;
@protocol CPSSafeAreaDelegate;

@interface CPSInstrumentClusterCardViewController : UIViewController <CPSSafeAreaDelegate, CPSNavigationDisplaying>

@property (retain, nonatomic) CPSInstrumentClusterCardLayout *layout;
@property (retain, nonatomic) UIViewController *platterViewController;
@property (retain, nonatomic) CPSDashboardEstimatesViewController *estimatesViewController;
@property (retain, nonatomic) CPSManeuversCardView *currentManeuversCardView;
@property (retain, nonatomic) CPSPausedCardView *currentPausedCardView;
@property (nonatomic) BOOL isMapContentOnly;
@property (weak, nonatomic) NSObject<CPSSafeAreaDelegate> *safeAreaDelegate;
@property (readonly, nonatomic) BOOL shouldUpdateContent;
@property (nonatomic) unsigned long long layoutOverride;
@property (nonatomic) BOOL showETA;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } currentClientInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)showManeuvers:(id)a0 usingDisplayStyles:(id)a1;
- (void)_setupConstraintsForPlatterView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_layoutGuideForClient;
- (void)_setupConstraintsForETACard;
- (void)_setupConstraintsForPauseCard;
- (void)_setupConstraintsForTurnCard;
- (void)_transitionFromViews:(id)a0 inView:(id)a1 horizontalSlideAnimation:(BOOL)a2;
- (void)_updateClientSafeArea;
- (void)_updateClientSafeAreaWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initForMapContent;
- (void)navigator:(id)a0 didEndTrip:(BOOL)a1;
- (void)navigator:(id)a0 pausedTripForReason:(unsigned long long)a1 description:(id)a2 usingColor:(id)a3;
- (void)setShouldUpdateContent:(BOOL)a0;
- (void)updateEstimates:(id)a0 forManeuver:(id)a1;
- (void)updateTripEstimates:(id)a0;
- (void)viewController:(id)a0 didUpdateSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
