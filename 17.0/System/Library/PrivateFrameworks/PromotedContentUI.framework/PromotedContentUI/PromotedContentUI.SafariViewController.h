@interface PromotedContentUI.SafariViewController : SFSafariViewController {
    void /* unknown type, empty encoding */ notificationObserver;
    void /* unknown type, empty encoding */ notificationCloseObserver;
    void /* unknown type, empty encoding */ notificationOpenObserver;
    void /* unknown type, empty encoding */ backgroundedTime;
    void /* unknown type, empty encoding */ actionDelegate;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 configuration:(id)a1;
- (id)initWithURL:(id)a0 entersReaderIfAvailable:(BOOL)a1;

@end
