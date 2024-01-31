@interface PUPickerOnboardingHeaderView : UIView {
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ icon;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ platterView;
    void /* unknown type, empty encoding */ separatorHeightConstraint;
    void /* unknown type, empty encoding */ learnMoreButton;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)hovering:(id)a0;
- (id)initWithClientDisplayName:(id)a0 isLimitedLibraryPicker:(BOOL)a1 closeAction:(id)a2;

@end
