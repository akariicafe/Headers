@interface ConversationKit.SystemApertureOngoingTelephonyControlsView : UIView {
    void /* unknown type, empty encoding */ avatarView;
    void /* unknown type, empty encoding */ brandedIconView;
    void /* unknown type, empty encoding */ primaryLabel;
    void /* unknown type, empty encoding */ secondaryLabel;
    void /* unknown type, empty encoding */ durationController;
    void /* unknown type, empty encoding */ changeRouteButton;
    void /* unknown type, empty encoding */ hangUpButton;
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
