@class UISearchController;

@interface UISearchContainerViewController : UIViewController

@property (retain, nonatomic) UISearchController *searchController;

- (void)commonInit;
- (void)encodeWithCoder:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)_prepareForContainerTransition:(id)a0;
- (BOOL)_isTVSearchControllerContainer;
- (void)_presentSearchControllerIfNecessary;
- (BOOL)_transitionsChildViewControllers;
- (id)initWithSearchController:(id)a0;
- (void)setTabBarObservedScrollView:(id)a0;

@end
