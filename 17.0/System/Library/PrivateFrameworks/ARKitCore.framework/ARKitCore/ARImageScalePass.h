@interface ARImageScalePass : NSObject {
    struct OpaqueVTPixelTransferSession { } *_vtPixelTransferSession;
    struct __CVPixelBufferPool { } *_scaledPixelBufferPool;
}

@property (readonly, nonatomic) unsigned int conversionPixelFormatType;
@property (readonly, nonatomic) struct CGSize { double width; double height; } scaledSize;

- (void)dealloc;
- (id)initWithDescription:(id)a0;
- (struct __CVBuffer { } *)scalePixelBuffer:(struct __CVBuffer { } *)a0;
- (void)setConversionPixelFormatType:(unsigned int)a0;

@end
