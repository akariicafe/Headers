@class CCUIToggleModule;

@interface CCUIToggleViewController : CCUIButtonModuleViewController

@property (weak, nonatomic) CCUIToggleModule *module;

- (void)refreshStateAnimated:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (double)preferredExpandedContentHeight;
- (BOOL)shouldFinishTransitionToExpandedContentModule;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)reconfigureView;

@end
