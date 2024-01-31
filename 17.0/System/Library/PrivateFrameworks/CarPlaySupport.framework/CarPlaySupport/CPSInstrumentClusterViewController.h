@class CPSAbridgableLabel, NSArray, CPSPausedCardView, NSString, CPSDashboardManeuversCardView;

@interface CPSInstrumentClusterViewController : UIViewController <CPSNavigationDisplaying>

@property (retain, nonatomic) CPSDashboardManeuversCardView *maneuversCardView;
@property (retain, nonatomic) CPSPausedCardView *pausedCardView;
@property (retain, nonatomic) CPSAbridgableLabel *inactiveLabel;
@property (nonatomic) long long guidanceStyle;
@property (copy, nonatomic) NSArray *inactiveVariants;
@property (copy, nonatomic) NSArray *attributedInactiveVariants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void).cxx_destruct;
- (void)showManeuvers:(id)a0 usingDisplayStyles:(id)a1;
- (void)_transitionFromViews:(id)a0 inView:(id)a1 animated:(BOOL)a2;
- (void)_updateGuidanceStyle;
- (void)navigator:(id)a0 didEndTrip:(BOOL)a1;
- (void)navigator:(id)a0 pausedTripForReason:(unsigned long long)a1 description:(id)a2 usingColor:(id)a3;
- (void)updateEstimates:(id)a0 forManeuver:(id)a1;

@end
