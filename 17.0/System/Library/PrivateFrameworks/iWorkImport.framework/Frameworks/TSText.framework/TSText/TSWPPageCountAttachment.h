@interface TSWPPageCountAttachment : TSWPNumberAttachment

- (unsigned int)elementKind;
- (BOOL)changesWithPageCount;
- (BOOL)shouldArchiveStringEquivalent;
- (id)stringWithPageNumber:(unsigned long long)a0 pageCount:(unsigned long long)a1 charIndex:(unsigned long long)a2;
- (void)saveToArchiver:(id)a0;

@end
