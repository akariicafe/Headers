@interface ConversationKit.CallAgainHUDView : UIView {
    void /* unknown type, empty encoding */ recipe;
    void /* unknown type, empty encoding */ bottomButtonConstraint;
    void /* unknown type, empty encoding */ avatarBottomConstraint;
    void /* unknown type, empty encoding */ avatarView;
    void /* unknown type, empty encoding */ primaryLabel;
    void /* unknown type, empty encoding */ callTypeLabel;
    void /* unknown type, empty encoding */ avatarStack;
    void /* unknown type, empty encoding */ videoMessageStackView;
    void /* unknown type, empty encoding */ effectsView;
    void /* unknown type, empty encoding */ avatarStackVerticalSpacingDivisor;
    void /* unknown type, empty encoding */ showCallDetailsButton;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ videoMessageButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ callBackButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ closeButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
