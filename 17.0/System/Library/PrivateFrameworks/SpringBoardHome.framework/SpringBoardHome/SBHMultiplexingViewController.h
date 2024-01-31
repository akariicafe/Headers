@class SBHMultiplexingManager, NSString, NSHashTable, UIViewController;

@interface SBHMultiplexingViewController : UIViewController

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) SBHMultiplexingManager *multiplexingManager;
@property (nonatomic) BOOL multiplexedViewControllerShowsContentWhileDeactivated;
@property (readonly, nonatomic) double level;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIViewController *multiplexedViewController;

- (BOOL)sbh_isMultiplexingViewController;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)sbh_underlyingAvocadoHostViewControllers;
- (void)loadView;
- (void)activateWithViewController:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithLevel:(double)a0 identifier:(id)a1;
- (void)_setUpMultiplexedViewController;
- (void)addObserver:(id)a0;
- (void)deactivate;

@end
