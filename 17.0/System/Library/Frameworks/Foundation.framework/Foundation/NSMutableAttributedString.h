@interface NSMutableAttributedString : NSAttributedString

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)setAttributedString:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void)addAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)endEditing;
- (void)addAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeAttribute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (Class)classForCoder;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)beginEditing;
- (Class)_intentResolver;
- (void)insertAttributedString:(id)a0 atIndex:(unsigned long long)a1;
- (void)_addAttributesIfNotPresentMergingInlinePresentationIntents:(id)a0 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_formatInflectionAlternative:(id)a0 withReplacements:(id)a1;
- (void)_inflectWithReplacements:(id)a0 concepts:(id)a1 preflight:(BOOL)a2;
- (void)addAttributesWeakly:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)appendAttributedString:(id)a0;
- (void)appendLocalizedFormat:(id)a0;
- (void)enumerateInflectableBlocksInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)mutableString;

@end
