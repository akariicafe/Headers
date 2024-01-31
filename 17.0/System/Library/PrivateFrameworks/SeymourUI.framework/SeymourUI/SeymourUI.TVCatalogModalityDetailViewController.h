@class NSArray;

@interface SeymourUI.TVCatalogModalityDetailViewController : UISplitViewController {
    void /* unknown type, empty encoding */ coordinator;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (id)initWithStyle:(long long)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
