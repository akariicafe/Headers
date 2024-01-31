@interface NSPathStore2 : NSString {
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathWithComponents:(id)a0;
+ (id)pathStoreWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;

- (unsigned long long)hash;
- (id)stringByDeletingLastPathComponent;
- (id)stringByDeletingPathExtension;
- (BOOL)isAbsolutePath;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)copy;
- (id)lastPathComponent;
- (id)stringByExpandingTildeInPath;
- (BOOL)isEqualToString:(id)a0;
- (id)stringByAppendingPathComponent:(id)a0;
- (id)pathExtension;
- (id)_stringByStandardizingPathUsingCache:(BOOL)a0;
- (id)stringByResolvingSymlinksInPath;
- (id)stringByAbbreviatingWithTildeInPath;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (const unsigned short *)_fastCharacterContents;
- (id)pathComponents;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)a0;
- (id)stringByStandardizingPath;
- (id)stringByAppendingPathExtension:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
