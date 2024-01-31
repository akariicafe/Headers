@class LPImageViewStyle, LPPadding, LPPointUnit, UIColor, LPImage;

@interface LPGlyphStyle : NSObject

@property (retain, nonatomic) LPImage *image;
@property (readonly, retain, nonatomic) LPPadding *padding;
@property (nonatomic) double opacity;
@property (readonly, nonatomic) LPImageViewStyle *imageStyle;
@property (retain, nonatomic) LPPointUnit *baselineOffset;
@property (retain, nonatomic) UIColor *color;

- (id)init;
- (void).cxx_destruct;
- (id)initSearchGlyph;

@end
