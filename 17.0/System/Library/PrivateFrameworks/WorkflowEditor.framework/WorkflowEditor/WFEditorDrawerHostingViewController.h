@interface WFEditorDrawerHostingViewController : UIViewController {
    void /* unknown type, empty encoding */ hostingViewController;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ resultsController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ navigationStyle;
@property (nonatomic, weak) void /* unknown type, empty encoding */ scrollViewObserver;
@property (nonatomic) void /* unknown type, empty encoding */ headerHeight;

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)contentScrollViewForEdge:(unsigned long long)a0;
- (void)clearSearchBar;
- (void)didTransitionToVisibility:(unsigned long long)a0;
- (void)focusSearchBar;
- (id)initWithResultsController:(id)a0;
- (void)performScrollingTest:(id)a0;

@end
