@interface StocksUI.ManageWatchlistsViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ contentMode;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ descriptionLabel;
}

- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)presentationController:(id)a0 prepareAdaptivePresentationController:(id)a1;
- (void)handleDone;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
