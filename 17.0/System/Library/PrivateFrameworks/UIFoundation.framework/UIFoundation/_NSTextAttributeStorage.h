@interface _NSTextAttributeStorage : _NSTextRunStorage

- (BOOL)_attributesInTextRange:(id)a0 areEqualToAttributes:(id)a1;
- (BOOL)_setAttributes:(id)a0 forTextRange:(id)a1 checkForChange:(BOOL)a2;
- (BOOL)addAttribute:(id)a0 value:(id)a1 forTextRange:(id)a2;
- (void)enumerateAttributesFromLocation:(id)a0 reverse:(BOOL)a1 usingBlock:(id /* block */)a2;
- (BOOL)removeAttribute:(id)a0 forTextRange:(id)a1;
- (BOOL)setAttribute:(id)a0 value:(id)a1 forTextRange:(id)a2;
- (BOOL)setAttributes:(id)a0 forTextRange:(id)a1;

@end
