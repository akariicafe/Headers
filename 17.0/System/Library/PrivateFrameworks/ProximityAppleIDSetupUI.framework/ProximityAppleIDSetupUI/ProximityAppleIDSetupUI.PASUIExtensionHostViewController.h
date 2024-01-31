@interface ProximityAppleIDSetupUI.PASUIExtensionHostViewController : UIViewController <_EXHostViewControllerDelegate, ProximityAppleIDSetupUI.PASUIExtensionHost> {
    void /* unknown type, empty encoding */ identity;
    void /* unknown type, empty encoding */ sceneID;
    void /* unknown type, empty encoding */ finished;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_exHostViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sceneProxy;
}

- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;
- (void)extensionDidFinishWith:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
