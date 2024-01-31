@interface VideosUI.AppInstallerViewController : UIViewController <ASCLockupViewDelegate, ASCLockupViewDelegate_PreprocessOffer> {
    void /* unknown type, empty encoding */ previousState;
    void /* unknown type, empty encoding */ appInfo;
    void /* unknown type, empty encoding */ navigationViewController;
    void /* unknown type, empty encoding */ contentTitle;
    void /* unknown type, empty encoding */ federatedInstallHelper;
    void /* unknown type, empty encoding */ onFlowComplete;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleLabel;
}

- (void)lockupView:(id)a0 appStateDidChange:(id)a1;
- (id)presentingViewControllerForLockupView:(id)a0;
- (void)lockupView:(id)a0 preprocessOffer:(id)a1 inState:(id)a2 completionBlock:(id /* block */)a3;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)handleCancel;

@end
