@protocol BSInvalidatable;

@interface _SBTodaySpotlightViewController : SBSpotlightMultiplexingViewController

@property (nonatomic) long long location;
@property (readonly, nonatomic) id<BSInvalidatable> displayLayoutAssertion;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (unsigned long long)level;
- (unsigned long long)remoteSearchViewPresentationSource;
- (long long)_displayLayoutElementLevel;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_setDisplayLayoutElementActive:(BOOL)a0;

@end
