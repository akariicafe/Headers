@class CAGradientLayer, NSString, UIColor, PRMonogramColor;

@interface PRMonogram : NSObject

@property (class, readonly, nonatomic) CAGradientLayer *plateOverlayLayer;

@property (copy, nonatomic) NSString *text;
@property (nonatomic) unsigned long long fontIndex;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) PRMonogramColor *monogramColor;
@property (readonly, nonatomic) UIColor *plateFlatColor;
@property (readonly, nonatomic) UIColor *plateGradientStartColor;
@property (readonly, nonatomic) UIColor *plateGradientEndColor;
@property (readonly, nonatomic) UIColor *plateSelectedActiveColor;
@property (readonly, nonatomic) UIColor *plateSelectedInactiveColor;
@property (readonly, nonatomic) UIColor *plateSelectedActiveTextColor;

+ (id)monogram;
+ (id)fontForIndex:(unsigned long long)a0 plateDiameter:(double)a1;
+ (unsigned long long)countOfFonts;
+ (void)updatePlateOverlayLayer:(id)a0;
+ (double)kerningForFontIndex:(unsigned long long)a0 fontSize:(double)a1;
+ (id)_fontSpecs;
+ (id)monogramWithData:(id)a0;

- (id)dataRepresentation;
- (void)_takeValuesFromDataRepresentation:(id)a0;
- (id)init;
- (void)appendToRecipe:(id)a0 text:(id)a1;
- (id)dataRepresentationWithVersion:(unsigned char)a0;
- (id)_initWithData:(id)a0;
- (id)description;
- (BOOL)_renderTextInContext:(struct CGContext { } *)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)appendToRecipe:(id)a0 text:(id)a1 fontIndex:(unsigned char)a2;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 fontIndex:(unsigned long long)a1 monogramColor:(id)a2;
- (id)stringAttributesForDiameter:(double)a0;
- (id)snapshotWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;
- (void)setFontIndexToUnsupportedValue;

@end
