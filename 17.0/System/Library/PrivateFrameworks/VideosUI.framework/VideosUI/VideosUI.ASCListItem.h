@interface VideosUI.ASCListItem : VUIBaseView <ASCLockupViewDelegate, ASCLockupViewDelegate_PreprocessOffer> {
    void /* unknown type, empty encoding */ actionPunchout;
    void /* unknown type, empty encoding */ currentLockup;
    void /* unknown type, empty encoding */ federatedInstallHelper;
    void /* unknown type, empty encoding */ previousState;
    void /* unknown type, empty encoding */ advanceASCOfferHandler;
    void /* unknown type, empty encoding */ offerListUIConfiguration;
    void /* unknown type, empty encoding */ dismissalUIConfiguration;
}

- (void)lockupView:(id)a0 appStateDidChange:(id)a1;
- (id)presentingViewControllerForLockupView:(id)a0;
- (void)lockupView:(id)a0 preprocessOffer:(id)a1 inState:(id)a2 completionBlock:(id /* block */)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
