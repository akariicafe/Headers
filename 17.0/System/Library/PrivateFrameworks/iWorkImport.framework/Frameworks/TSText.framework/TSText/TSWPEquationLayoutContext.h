@class NSString, TSUColor;

@interface TSWPEquationLayoutContext : NSObject <EQKitLayoutContext>

@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) TSUColor *fontColor;
@property (nonatomic) double fontSize;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) double textMacroFontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (double)baseFontSize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (struct CGColor { } *)baseFontColor;
- (struct __CFString { } *)baseFontName;
- (id)initWithFontName:(id)a0 fontSize:(double)a1 fontColor:(id)a2;
- (id)initWithFontName:(id)a0 fontSize:(double)a1 fontColor:(id)a2 targetSize:(struct CGSize { double x0; double x1; })a3 containerSize:(struct CGSize { double x0; double x1; })a4 textMacroFontSize:(double)a5;
- (id)initWithTextProperties:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithTextProperties:(id)a0 fontSize:(double)a1 containerSize:(struct CGSize { double x0; double x1; })a2;
- (id)initWithTextProperties:(id)a0 fontSize:(double)a1 containerSize:(struct CGSize { double x0; double x1; })a2 textMacroFontSize:(double)a3;
- (id)initWithTextProperties:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;

@end
