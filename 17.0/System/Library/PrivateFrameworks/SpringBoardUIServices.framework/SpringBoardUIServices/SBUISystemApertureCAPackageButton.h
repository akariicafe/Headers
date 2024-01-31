@class NSString, SBUISystemApertureCAPackageContentProvider;

@interface SBUISystemApertureCAPackageButton : UIButton {
    SBUISystemApertureCAPackageContentProvider *_packageProvider;
    NSString *_state;
}

- (BOOL)setState:(id)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_updateStateAnimated:(BOOL)a0;
- (id)initWithPackageProvider:(id)a0 state:(id)a1 primaryAction:(id)a2;

@end
