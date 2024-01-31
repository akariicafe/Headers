@interface TSWPPageNumberAttachment : TSWPNumberAttachment

- (int)elementKind;
- (BOOL)changesWithPageNumber;
- (BOOL)shouldArchiveStringEquivalent;
- (id)stringWithPageNumber:(unsigned long long)a0 pageCount:(unsigned long long)a1 charIndex:(unsigned long long)a2;

@end
