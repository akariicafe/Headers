@class NSArray, PVColorSpace;

@interface CVPixelBufferCacheItem : NSObject

@property (readonly, nonatomic) NSArray *buffers;
@property (readonly, nonatomic) NSArray *DODs;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fullSize;
@property (readonly, nonatomic) PVColorSpace *colorSpace;

- (void).cxx_destruct;
- (id)initWithCVPixelBuffers:(id)a0 DODs:(id)a1 fullSize:(struct CGSize { double x0; double x1; })a2 colorSpace:(id)a3;

@end
