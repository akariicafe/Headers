@class SHPalette;

@interface SHPaletteLayer : CALayer

@property (readonly, nonatomic) SHPalette *palette;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setup;
- (id)initWithPalette:(id)a0;

@end
