@interface DeviceDiscoveryUI.SnapshottingContactViewController : UIViewController <CNContactViewControllerDelegate> {
    void /* unknown type, empty encoding */ phase;
    void /* unknown type, empty encoding */ contact;
    void /* unknown type, empty encoding */ dismiss;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewController;
    void /* unknown type, empty encoding */ snapshotView;
}

+ (BOOL)_isSecureForRemoteViewService;

- (void)contactViewController:(id)a0 didDeleteContact:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)didTapDone;

@end
