@interface NewsUI2.SportsFavoritesSyncViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ app;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ confirmationButton;
    void /* unknown type, empty encoding */ deferButton;
    void /* unknown type, empty encoding */ conclusion;
}

- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)doConfirmationAction;
- (void)doDeferAction;

@end
