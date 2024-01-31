@interface KNSlideNumberAttachment : TSWPPageNumberAttachment

+ (Class)classForUnarchiver:(id)a0;
+ (const void *)textualAttachmentArchiveFromUnarchiver:(id)a0;

- (BOOL)shouldArchiveStringEquivalent;
- (id)stringWithPageNumber:(unsigned long long)a0 pageCount:(unsigned long long)a1 charIndex:(unsigned long long)a2;
- (const void *)textualAttachmentArchiveFromUnarchiver:(id)a0;

@end
