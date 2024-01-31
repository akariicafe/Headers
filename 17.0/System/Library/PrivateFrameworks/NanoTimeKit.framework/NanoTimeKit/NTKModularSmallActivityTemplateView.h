@class NTKRingsAndDotsView, NSMutableArray;

@interface NTKModularSmallActivityTemplateView : NTKModularTemplateView {
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)_update;
- (void)_layoutContentView;
- (void)setForegroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_configureContentSubviews;
- (void)_setLayoutEmptyRings;
- (void)applyColorScheme:(id)a0;
- (void)setIsXL:(BOOL)a0;

@end
