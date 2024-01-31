@class UIView;

@interface NewsFeed.PuzzleEmbedViewController : UIViewController {
    void /* unknown type, empty encoding */ webContentViewController;
    void /* unknown type, empty encoding */ errorProvider;
    void /* unknown type, empty encoding */ presentationManager;
    void /* unknown type, empty encoding */ actionProvider;
    void /* unknown type, empty encoding */ puzzleLoadingStateMachine;
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ errorView;
    void /* unknown type, empty encoding */ embedLocation;
    void /* unknown type, empty encoding */ puzzleData;
    void /* unknown type, empty encoding */ puzzleDataManager;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ puzzleID;
    void /* unknown type, empty encoding */ contentFrame;
    void /* unknown type, empty encoding */ viewportSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentEnvironment;
}

@property (nonatomic, readonly) UIView *inputAccessoryView;

- (void)keyboardWillChangeFrameWithNotification:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;

@end
