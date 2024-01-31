@interface ICTextLayoutFragment : NSTextLayoutFragment

- (double)trailingPadding;
- (double)topMargin;
- (id)initWithTextElement:(id)a0 range:(id)a1;
- (double)leadingPadding;
- (double)bottomMargin;
- (double)marginForTop:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nsRangeInTextStorage:(id)a0;

@end
