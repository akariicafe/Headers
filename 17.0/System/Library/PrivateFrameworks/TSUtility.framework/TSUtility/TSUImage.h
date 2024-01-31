@class UIImage;

@interface TSUImage : NSObject {
    struct CGImage { } *mCachedSliceableImage;
    struct __CFDictionary { } *mImageSlices;
    long long mImageSliceCacheLock;
    id mCachedSystemImage;
    long long mCachedImageLock;
}

@property (readonly, nonatomic) UIImage *UIImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) long long imageOrientation;
@property (readonly, nonatomic) double scale;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)imageWithCGImage:(struct CGImage { } *)a0;
+ (id)imageWithContentsOfFile:(id)a0;
+ (id)imageWithData:(id)a0;
+ (id)imageNamed:(id)a0 inBundle:(id)a1;
+ (id)imageWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2;
+ (id)imageWithUIImage:(id)a0;
+ (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 drawnUsingBlock:(id /* block */)a1;
+ (id)noisePatternWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 factor:(double)a2;

- (id)init;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (id)TIFFRepresentation;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2;
- (id)PNGRepresentation;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGImage { } *)CGImageForContentsScale:(double)a0;
- (id)JPEGRepresentationWithCompressionQuality:(double)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 stretchingCenterWidthBy:(double)a2;
- (id)imagePartsWithLeftCapWidth:(double)a0 rightCapWidth:(double)a1 topCapHeight:(double)a2 bottomCapHeight:(double)a3;
- (id)initWithImageSourceRef:(struct CGImageSource { } *)a0;
- (id)initWithUIImage:(id)a0;
- (id)stretchedImageOfSize:(struct CGSize { double x0; double x1; })a0 leftCapWidth:(double)a1 rightCapWidth:(double)a2 topCapHeight:(double)a3 bottomCapHeight:(double)a4;

@end
