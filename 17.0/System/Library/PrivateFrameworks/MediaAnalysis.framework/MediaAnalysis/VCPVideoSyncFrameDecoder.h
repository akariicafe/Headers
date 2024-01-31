@interface VCPVideoSyncFrameDecoder : NSObject {
    struct CF<OpaqueVTDecompressionSession *> { struct OpaqueVTDecompressionSession *value_; } _decompressionSession;
    BOOL _requiresRotation;
    struct Rotator { struct __CVPixelBufferPool *x0; int x1; int x2; int x3; struct OpaqueVTPixelRotationSession *x4; } *_rotator;
}

+ (BOOL)isSyncFrameForCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
+ (BOOL)readBigEndianInt:(int *)a0 fromBlockBuffer:(struct OpaqueCMBlockBuffer { } *)a1 forNumBytes:(int)a2 atOffset:(unsigned long long)a3;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)decodeCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 toCMSampleBuffer:(struct opaqueCMSampleBuffer **)a1 error:(id *)a2;
- (id)initWithDecoderSettings:(id)a0 formatDescription:(struct opaqueCMFormatDescription { } *)a1 rotationAngle:(int)a2;

@end
