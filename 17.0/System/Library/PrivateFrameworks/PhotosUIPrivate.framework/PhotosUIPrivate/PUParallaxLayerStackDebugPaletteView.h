@class PIParallaxColorPalette;

@interface PUParallaxLayerStackDebugPaletteView : UIView

@property (readonly, nonatomic) PIParallaxColorPalette *palette;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_layoutPalette:(id)a0 origin:(struct CGPoint { double x0; double x1; })a1 cellsPerRow:(int)a2 cellWidth:(double)a3 callback:(id /* block */)a4;
- (id)initWithColorPalette:(id)a0;

@end
