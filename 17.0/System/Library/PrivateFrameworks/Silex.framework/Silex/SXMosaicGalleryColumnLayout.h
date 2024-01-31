@interface SXMosaicGalleryColumnLayout : NSObject

@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double gutter;

- (id)initWithWidth:(double)a0 gutter:(double)a1;
- (double)positionForColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 numberOfColumns:(unsigned long long)a1;
- (double)positionOfColumn:(unsigned long long)a0 inNumberOfColumns:(unsigned long long)a1;
- (double)widthForColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 numberOfColumns:(unsigned long long)a1;
- (double)widthOfColumn:(unsigned long long)a0 inNumberOfColumns:(unsigned long long)a1;

@end
