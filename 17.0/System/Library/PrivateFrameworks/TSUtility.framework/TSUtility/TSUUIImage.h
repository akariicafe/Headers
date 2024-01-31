@class UIImage;

@interface TSUUIImage : TSUImage {
    UIImage *mUIImage;
}

+ (id)imageNamed:(id)a0 inBundle:(id)a1;

- (long long)imageOrientation;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)a0;
- (struct CGImage { } *)CGImage;
- (struct CGSize { double x0; double x1; })size;
- (double)scale;
- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)UIImage;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithUIImage:(id)a0;

@end
