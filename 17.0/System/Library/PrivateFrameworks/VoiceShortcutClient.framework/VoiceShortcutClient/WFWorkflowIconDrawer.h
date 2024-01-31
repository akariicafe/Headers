@class WFColor, NSString, WFWorkflowIconDrawerContext, NSData;

@interface WFWorkflowIconDrawer : NSObject

@property (readonly, nonatomic) WFWorkflowIconDrawerContext *drawerContext;
@property (nonatomic) unsigned short glyphCharacter;
@property (copy, nonatomic) NSString *symbolName;
@property (retain, nonatomic) WFColor *backgroundColor;
@property (nonatomic) BOOL drawGradient;
@property (copy, nonatomic) NSData *customImageData;
@property (retain, nonatomic) WFColor *glyphColor;
@property (nonatomic) struct CGSize { double width; double height; } glyphSize;
@property (nonatomic) BOOL drawBackground;
@property (nonatomic) BOOL useCustomImage;
@property (nonatomic) BOOL rounded;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL dark;
@property (nonatomic) BOOL highContrast;
@property (nonatomic) BOOL outline;
@property (nonatomic) BOOL drawShadowBehindGlyph;

+ (id)glyphImageWithIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)imageWithIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)imageWithIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1 background:(BOOL)a2;
+ (id)imageWithIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 padding:(struct CGSize { double x0; double x1; })a3 glyphColor:(id)a4 background:(BOOL)a5;
+ (id)pngDataForImageWithIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (id)init;
- (id)initWithIcon:(id)a0;
- (void)setIcon:(id)a0;
- (void).cxx_destruct;
- (id)imageWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })calculatedSizeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)drawInContext:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 padding:(struct CGSize { double x0; double x1; })a2;
- (id)initWithDrawerContext:(id)a0;
- (id)initWithIcon:(id)a0 drawerContext:(id)a1;

@end
