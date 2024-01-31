@interface MKPlaceSectionItemView : MKViewWithHairline

@property (nonatomic, getter=isHairlineFullWidth) BOOL fullWidthHairline;

- (void)layoutMarginsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)traitEnvironment:(id)a0 didChangeTraitCollection:(id)a1;
- (void)_updateHairlineInsets;
- (void)infoCardThemeChanged;

@end
