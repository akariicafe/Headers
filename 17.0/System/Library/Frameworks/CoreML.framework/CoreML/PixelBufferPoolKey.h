@interface PixelBufferPoolKey : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGSize { double width; double height; } frameSize;
@property (readonly, nonatomic) unsigned int pixelFormatType;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 pixelFormatType:(unsigned int)a1;

@end
