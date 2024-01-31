@interface PromotedContentUI.ExpandViewController : UIViewController <APWebProcessDelegate> {
    void /* unknown type, empty encoding */ webView;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ maximumExpandedSize;
    void /* unknown type, empty encoding */ expandedDestinationURL;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ navigationCoordinator;
    void /* unknown type, empty encoding */ webProcessDelegate;
    void /* unknown type, empty encoding */ actionDelegate;
    void /* unknown type, empty encoding */ notificationObserver;
    void /* unknown type, empty encoding */ notificationOpenObserver;
    void /* unknown type, empty encoding */ backgroundedTime;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButtonPadding;
}

- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessMRAIDJSODidCallOpen:(id)a0;
- (void)webProcessMRAIDJSODidCallExpand:(id)a0 withMaximumWidth:(double)a1 andHeight:(double)a2;
- (void)webProcessMRAIDJSODidCallClose;
- (void)tapRecognized:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)closeButtonTappedWithSender:(id)a0;

@end
