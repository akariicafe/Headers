@interface RawBayerPostProcessor : DefaultPostProcessor

@property (nonatomic) BOOL rawBayerMSBReplication;

- (id)initWithOriginalPixelFormat:(unsigned int)a0 rawBayerMSBReplication:(BOOL)a1;
- (struct __CVBuffer { } *)processedPixelBufferFrom:(struct __CVBuffer { } *)a0 metadata:(id)a1 error:(id *)a2;
- (unsigned int)processedPixelFormat;

@end
