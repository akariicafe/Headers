@interface _HKGraphTileRenderToImage : NSObject

@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) BOOL invertedYAxis;
@property (readonly, nonatomic) unsigned long long widthInPixels;
@property (readonly, nonatomic) unsigned long long heightInPixels;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly, nonatomic) unsigned long long bufferSize;
@property (readonly, nonatomic) void *rawBufferBytes;
@property (readonly, nonatomic) unsigned int bitmapInfo;
@property (readonly, nonatomic) struct CGContext { } *drawingContext;
@property (readonly, nonatomic) struct CGImage { } *lastRenderedImage;
@property (readonly, nonatomic) struct CGSize { double width; double height; } sizeInPoints;

- (void)dealloc;
- (struct CGImage { } *)drawToImage:(id /* block */)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 invertedYAxis:(BOOL)a2;

@end
