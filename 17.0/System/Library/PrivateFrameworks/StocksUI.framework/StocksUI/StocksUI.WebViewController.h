@interface StocksUI.WebViewController : SFSafariViewController {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ webViewCoordinator;
    void /* unknown type, empty encoding */ navigator;
    void /* unknown type, empty encoding */ session;
}

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithURL:(id)a0 configuration:(id)a1;
- (id)initWithURL:(id)a0 entersReaderIfAvailable:(BOOL)a1;

@end
