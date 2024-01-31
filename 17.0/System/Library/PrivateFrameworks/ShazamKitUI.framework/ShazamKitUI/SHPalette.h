@interface SHPalette : NSObject

+ (id)default;
+ (double)contentsScale;
+ (struct CGColor { } *)sh_colorNamed:(id)a0;

- (struct CGColor { } *)shadowColor;
- (struct CGColor { } *)blackColor;
- (struct CGColor { } *)clearColor;
- (struct CGColor { } *)appTintColor;
- (struct CGColor { } *)R:(double)a0 G:(double)a1 B:(double)a2 A:(double)a3;
- (struct CGColor { } *)listeningButtonShazamShapeColor;
- (struct CGColor { } *)alternateTintColor;
- (struct CGColor { } *)listeningButtonBackgroundColor;
- (struct CGColor { } *)listeningButtonBackgroundTransparentColor;
- (struct CGColor { } *)listeningButtonTopBorderColor;
- (struct CGColor { } *)listeningCircleColor;
- (struct CGColor { } *)shazamColorNearBlack;

@end
