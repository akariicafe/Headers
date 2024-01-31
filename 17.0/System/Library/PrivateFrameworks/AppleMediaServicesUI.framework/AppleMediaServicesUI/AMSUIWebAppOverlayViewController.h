@interface AMSUIWebAppOverlayViewController : UIViewController <ASCLockupViewDelegate> {
    void /* unknown type, empty encoding */ appAdamID;
    void /* unknown type, empty encoding */ hostBundleIdentifier;
    void /* unknown type, empty encoding */ lockupView;
    void /* unknown type, empty encoding */ lockupViewPromise;
}

- (void)lockupView:(id)a0 didFailRequestWithError:(id)a1;
- (void)lockupViewDidBeginRequest:(id)a0;
- (void)lockupViewDidFinishRequest:(id)a0;
- (id)presentingViewControllerForLockupView:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)preload;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAppAdamID:(id)a0 hostBundleIdentifier:(id)a1;

@end
