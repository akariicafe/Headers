@interface PLThumbFileManager : PLThumbFileManagerCore

- (BOOL)setImageForEntry:(id)a0 withIdentifier:(id)a1 orIndex:(unsigned long long)a2 photoUUID:(id)a3 options:(id)a4;
- (struct CGImage { } *)createImageWithIdentifier:(id)a0 orIndex:(unsigned long long)a1;
- (BOOL)_writeImage:(id)a0 forThumbIdentifier:(id)a1;

@end
