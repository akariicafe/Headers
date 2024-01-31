@interface iCloudQuotaUI.RemoteExtensionHostViewController : UIViewController <_EXHostViewControllerDelegate> {
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hostViewController;
    void /* unknown type, empty encoding */ appExtension;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;

@end
