@interface TSWPEquationInlineLayout : TSWPEquationLayout

@property (nonatomic) BOOL disableXHeightMatching;
@property (readonly, nonatomic) double fontSizeAdjustedForXHeight;

+ (double)fontSizeThatMatchesXHeightForFontName:(id)a0 fontSize:(double)a1;

- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (BOOL)wantsRoundedInlinePosition;
- (id)computeInfoGeometryFromPureLayoutGeometry:(id)a0;
- (double)descentForInlineLayout;
- (struct CGSize { double x0; double x1; })invalidEquationSize;
- (void)invalidateTextScalePercent;
- (id)p_layoutTarget;
- (id)p_newLayoutContextWithMaximumSize:(struct CGSize { double x0; double x1; })a0 textScale:(double)a1 returnFontSizeAdjustedForXHeight:(double *)a2;
- (BOOL)p_textIsVertical;
- (id)p_textPropertiesForLayout;
- (double)p_textScale;
- (struct CGSize { double x0; double x1; })unconstrainedSize;
- (void)willLayoutInlineWithMaximumSize:(struct CGSize { double x0; double x1; })a0 textScale:(double)a1;

@end
