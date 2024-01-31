@interface ConversationKit.SystemApertureIncomingCallControlsView : UIView {
    void /* unknown type, empty encoding */ avatar;
    void /* unknown type, empty encoding */ primaryLabel;
    void /* unknown type, empty encoding */ secondaryBadge;
    void /* unknown type, empty encoding */ secondaryLabel;
    void /* unknown type, empty encoding */ alternatingLabelController;
    void /* unknown type, empty encoding */ rejectButton;
    void /* unknown type, empty encoding */ acceptButton;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ cnkContentAlpha;
    void /* unknown type, empty encoding */ recipe;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
