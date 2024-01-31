@interface GameCenterUI.BaseViewController : UIViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ wantsHiddenNavigationBar;
    void /* unknown type, empty encoding */ wantsHiddenTitle;
    void /* unknown type, empty encoding */ manualScrollEdgeAppearanceProgress;
    void /* unknown type, empty encoding */ scrollObserver;
    void /* unknown type, empty encoding */ navbarScrollObserver;
}

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;

@end
