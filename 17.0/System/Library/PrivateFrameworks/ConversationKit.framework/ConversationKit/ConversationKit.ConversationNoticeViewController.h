@interface ConversationKit.ConversationNoticeViewController : UIViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ recipe;
    void /* unknown type, empty encoding */ presentationSize;
    void /* unknown type, empty encoding */ expanded;
    void /* unknown type, empty encoding */ menuPresented;
    void /* unknown type, empty encoding */ isSystemAperturePresentation;
    void /* unknown type, empty encoding */ noticeView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_systemApertureLeadingAccessoryTapGesture;
}

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)handleTapGesture;
- (void)handleSystemApertureTapGesture;

@end
