@interface PaperKit.CanvasCollaborationAvatarView : UIView {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ color;
    void /* unknown type, empty encoding */ boundingSuperview;
    void /* unknown type, empty encoding */ fetchImage;
    void /* unknown type, empty encoding */ frameAnchorPoint;
    void /* unknown type, empty encoding */ frameAnchorIsInverted;
    void /* unknown type, empty encoding */ isExpanded;
    void /* unknown type, empty encoding */ hasDisplayedInWindow;
    void /* unknown type, empty encoding */ isRemovingFromSuperview;
    void /* unknown type, empty encoding */ autocollapseTimer;
    void /* unknown type, empty encoding */ autohideTimer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_label;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageViewTopConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageViewBottomConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageViewLeadingConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageViewWidthConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_labelWidthConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_labelHeightConstraint;
}

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)handleTap:(id)a0;
- (void)handleHoverWithRecognizer:(id)a0;

@end
