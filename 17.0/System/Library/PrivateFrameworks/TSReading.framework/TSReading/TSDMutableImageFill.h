@class TSPData, TSUColor;

@interface TSDMutableImageFill : TSDImageFill

@property (retain, nonatomic) TSPData *imageData;
@property (nonatomic) BOOL interpretsUntaggedImageDataAsGeneric;
@property (nonatomic) int technique;
@property (copy, nonatomic) TSUColor *tintColor;
@property (nonatomic) struct CGSize { double x0; double x1; } fillSize;

- (void)setImageData:(id)a0;
- (void)setTechnique:(int)a0;
- (void)setTintColor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setScale:(double)a0;
- (void)setFillSize:(struct CGSize { double x0; double x1; })a0;
- (void)setInterpretsUntaggedImageDataAsGeneric:(BOOL)a0;

@end
