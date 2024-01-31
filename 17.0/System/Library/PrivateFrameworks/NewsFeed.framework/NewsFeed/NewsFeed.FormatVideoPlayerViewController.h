@interface NewsFeed.FormatVideoPlayerViewController : UIViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ reuseIdentifier;
    void /* unknown type, empty encoding */ onReuse;
    void /* unknown type, empty encoding */ posterFrame;
    void /* unknown type, empty encoding */ placeholderView;
    void /* unknown type, empty encoding */ isLiveIconHidden;
    void /* unknown type, empty encoding */ videoContainerView;
}

- (id)init;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;

@end
