@interface TSTWPFormulaSelection : TSWPSelection

@property (nonatomic) unsigned long long activeTokenCharIndex;

+ (Class)archivedSelectionClass;

- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)allowsKeyCommandCaching;
- (id)initWithType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(long long)a2 caretAffinity:(long long)a3 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 caretIsLeadingEdge:(BOOL)a5 leadingCharIndex:(unsigned long long)a6;
- (id)initWithType:(long long)a0 ranges:(id)a1 validVisualRanges:(BOOL)a2 styleInsertionBehavior:(long long)a3 caretAffinity:(long long)a4 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 caretIsLeadingEdge:(BOOL)a6 leadingCharIndex:(unsigned long long)a7 headCharIndex:(unsigned long long)a8 tailCharIndex:(unsigned long long)a9;
- (id)initWithType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(long long)a2 caretAffinity:(long long)a3 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 caretIsLeadingEdge:(BOOL)a5 leadingCharIndex:(unsigned long long)a6 activeTokenCharIndex:(unsigned long long)a7;
- (id)initWithType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 validVisualRanges:(BOOL)a2 styleInsertionBehavior:(long long)a3 caretAffinity:(long long)a4 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 caretIsLeadingEdge:(BOOL)a6 leadingCharIndex:(unsigned long long)a7 headCharIndex:(unsigned long long)a8 tailCharIndex:(unsigned long long)a9 activeTokenCharIndex:(unsigned long long)a10;

@end
