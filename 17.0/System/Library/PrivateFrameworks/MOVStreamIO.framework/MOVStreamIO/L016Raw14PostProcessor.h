@interface L016Raw14PostProcessor : DefaultPostProcessor

@property (nonatomic) BOOL l010OutputFormatRAW14L016;

- (id)initWithOriginalPixelFormat:(unsigned int)a0 l010OutputFormatRAW14L016:(BOOL)a1;
- (struct __CVBuffer { } *)processedPixelBufferFrom:(struct __CVBuffer { } *)a0 metadata:(id)a1 error:(id *)a2;
- (unsigned int)processedPixelFormat;

@end
