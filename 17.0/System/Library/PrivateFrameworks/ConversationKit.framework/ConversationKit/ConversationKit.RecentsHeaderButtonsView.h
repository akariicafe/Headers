@interface ConversationKit.RecentsHeaderButtonsView : UICollectionReusableView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ headerDelegate;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ newFaceTimeButton;
    void /* unknown type, empty encoding */ createLinkButton;
    void /* unknown type, empty encoding */ bottomAnchorConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_buttonsView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_newFaceTimeButtonConfiguration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_createLinkButtonConfiguration;
    void /* unknown type, empty encoding */ buttonTitleParagraphStyle;
}

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didTapNewCallButton;
- (void)didTapNewLinkButton;

@end
