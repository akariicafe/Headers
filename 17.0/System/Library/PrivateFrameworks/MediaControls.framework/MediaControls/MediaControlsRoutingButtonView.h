@class CCUICAPackageView;

@interface MediaControlsRoutingButtonView : MPButton

@property (retain, nonatomic) CCUICAPackageView *packageView;
@property (nonatomic) long long currentMode;
@property (nonatomic) long long deviceType;
@property (nonatomic, getter=isUserInterfaceStyleSwitchingEnabled) BOOL userInterfaceStyleSwitchingEnabled;

- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAlpha:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_glyphResource;
- (void)_updateGlyphPackage;
- (void)_updateGlyphState;

@end
