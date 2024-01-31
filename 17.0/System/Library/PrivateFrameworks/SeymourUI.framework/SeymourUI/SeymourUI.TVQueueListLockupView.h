@interface SeymourUI.TVQueueListLockupView : SeymourUI.TVFloatingContentCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ grabImage;
    void /* unknown type, empty encoding */ grabImageView;
    void /* unknown type, empty encoding */ grabbed;
    void /* unknown type, empty encoding */ panOriginYOffset;
    void /* unknown type, empty encoding */ offsetPerMove;
    void /* unknown type, empty encoding */ movedIndexInCurrentPan;
}

- (void)handlePan:(id)a0;
- (id)init;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)handleTap:(id)a0;

@end
