@protocol SBHomeScreenSpotlightDismissalDelegate, BSInvalidatable;

@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController

@property (readonly, weak, nonatomic) id<SBHomeScreenSpotlightDismissalDelegate> homescreenSpotlightDelegate;
@property (readonly, nonatomic) id<BSInvalidatable> displayLayoutAssertion;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (unsigned long long)level;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_setDisplayLayoutElementActive:(BOOL)a0;

@end
