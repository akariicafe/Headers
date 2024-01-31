@class UIScrollView, NSMutableDictionary, UIView;

@interface PREditorSeparatedRootViewController : PREditorRootViewController {
    NSMutableDictionary *_viewsForLook;
}

@property (retain, nonatomic) UIView *looksDividerView;
@property (retain, nonatomic) UIView *backgroundForegroundContainerViewsZStackView;
@property (retain, nonatomic) UIView *floatingContainerViewsZStackView;
@property (retain, nonatomic) UIScrollView *timeContainerScrollView;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (long long)_windowInterfaceOrientation;
- (void)looksWillChange;
- (void)_enumerateContainerViewsWithBlock:(id /* block */)a0;
- (void)_updateContainerViewClipping:(BOOL)a0;
- (void)_updateContainerViewFrames;
- (void)_updateCounterRotationLayout;
- (void)_updateLooksDividerViewForTransitionToSize:(struct CGSize { double x0; double x1; })a0 startingTransition:(BOOL)a1;
- (id)currentLookViews;
- (void)looksDidChange;
- (id)viewsForLook:(id)a0;

@end
