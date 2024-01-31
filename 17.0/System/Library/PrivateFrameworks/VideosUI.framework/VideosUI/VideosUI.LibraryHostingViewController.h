@class UINavigationItem;

@interface VideosUI.LibraryHostingViewController : VideosUI.VUIViewController <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ childController;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)vui_viewDidLoad;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_viewWillLayoutSubviews;

@end
