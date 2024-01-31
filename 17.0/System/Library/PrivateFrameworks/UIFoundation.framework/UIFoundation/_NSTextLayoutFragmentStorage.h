@interface _NSTextLayoutFragmentStorage : _NSTextRunStorage

@property (readonly) long long offsetDeltaForLastTextLayoutFragment;

- (id)adjustedTextRangeWithTextRange:(id)a0 adjustment:(unsigned long long)a1;
- (id)enumerateTextLayoutFragmentFromLocation:(id)a0 options:(long long)a1 usingBlock:(id /* block */)a2;
- (id)enumerateTextLayoutFragmentInTextRange:(id)a0 options:(long long)a1 usingBlock:(id /* block */)a2;
- (void)invalidateTextLayoutFragmentsInTextRange:(id)a0 adjustTextRange:(BOOL)a1;
- (void)invalidateTextLayoutFragmentsInTextRange:(id)a0 delta:(long long)a1;
- (long long)offsetDeltaForLastTextLayoutFragment;
- (BOOL)revalidateLayoutFragmentRangeForLocation:(id)a0;
- (void)setTextLayoutFragments:(id)a0;
- (id)textLayoutFragmentForTextLocation:(id)a0 allowsTrailingEdge:(BOOL)a1;

@end
