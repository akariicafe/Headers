@interface TSWPFootnoteMarkAttachment : TSWPTextualAttachment

- (unsigned int)elementKind;
- (id)copyWithContext:(id)a0;
- (BOOL)shouldStyleBeExtended;
- (id)stringEquivalent;
- (void)saveToArchiver:(id)a0;

@end
