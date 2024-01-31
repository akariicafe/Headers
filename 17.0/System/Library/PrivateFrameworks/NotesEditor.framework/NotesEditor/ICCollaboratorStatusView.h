@interface ICCollaboratorStatusView : UIView {
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ collaboratorStatus;
    void /* unknown type, empty encoding */ hasDisplayedInWindow;
    void /* unknown type, empty encoding */ avatarView;
    void /* unknown type, empty encoding */ selectionViews;
    void /* unknown type, empty encoding */ isRemovingFromSuperview;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;

@end
