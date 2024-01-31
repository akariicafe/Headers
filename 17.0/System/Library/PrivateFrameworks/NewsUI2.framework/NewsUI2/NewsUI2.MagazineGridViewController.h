@interface NewsUI2.MagazineGridViewController : TUViewController {
    void /* unknown type, empty encoding */ viewControllerConfig;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ offlineAlertControllerFactory;
    void /* unknown type, empty encoding */ toolbarManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectAllBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_downloadBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_removeIssuesAndDownloadsBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_removeDownloadsBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectionCountBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectionCountLabel;
    void /* unknown type, empty encoding */ editSelection;
    void /* unknown type, empty encoding */ commandCenterWithTracker;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)contentScrollView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)doDoneAction;
- (void)doDownloadAction;
- (void)doRemoveDownloadsAction;
- (void)doRemoveIssuesAndDownloadsAction;
- (void)doSelectAllAction;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
