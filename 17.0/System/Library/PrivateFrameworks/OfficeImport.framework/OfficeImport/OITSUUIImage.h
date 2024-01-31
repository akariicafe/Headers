@class UIImage, OITSUUIImageAutoreleasePoolGuard;

@interface OITSUUIImage : OITSUImage {
    UIImage *mUIImage;
    OITSUUIImageAutoreleasePoolGuard *mGuard;
}

+ (id)imageNamed:(id)a0;
+ (void)i_performBlockWithUIImageLock:(id /* block */)a0;

- (long long)imageOrientation;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)a0;
- (struct CGImage { } *)CGImage;
- (struct CGSize { double x0; double x1; })size;
- (double)scale;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)UIImage;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithUIImage:(id)a0;
- (id)p_initWithUIImage:(id)a0 needsGuard:(BOOL)a1;

@end
