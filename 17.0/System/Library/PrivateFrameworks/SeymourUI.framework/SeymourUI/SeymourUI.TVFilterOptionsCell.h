@interface SeymourUI.TVFilterOptionsCell : SeymourUI.TVFloatingContentCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ accessoryImageView;
    void /* unknown type, empty encoding */ textStackView;
    void /* unknown type, empty encoding */ isDisclosureCell;
    void /* unknown type, empty encoding */ shouldBreadCrumb;
}

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;

@end
