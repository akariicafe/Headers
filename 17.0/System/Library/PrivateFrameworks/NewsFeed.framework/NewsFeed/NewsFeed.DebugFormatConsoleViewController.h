@interface NewsFeed.DebugFormatConsoleViewController : UIViewController <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ editor;
    void /* unknown type, empty encoding */ editorContainerController;
    void /* unknown type, empty encoding */ consoleContainerController;
    void /* unknown type, empty encoding */ consoleHeight;
    void /* unknown type, empty encoding */ consolePanSession;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panGestureRecognizer;
}

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)doPanGestureWithGesture:(id)a0;

@end
