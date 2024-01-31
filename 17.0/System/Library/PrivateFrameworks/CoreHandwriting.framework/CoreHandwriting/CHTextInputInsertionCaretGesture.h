@interface CHTextInputInsertionCaretGesture : CHTextInputGesture

@property (readonly, nonatomic) struct CGPoint { double x; double y; } caretTipPoint;

- (long long)caretDirection;
- (void)getAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 expandedToFullTokens:(BOOL *)a1;
- (id)initWithCaretTipPoint:(struct CGPoint { double x0; double x1; })a0 targetContentInfo:(id)a1 locale:(id)a2 normalizedDrawing:(id)a3 originalDrawing:(id)a4;

@end
