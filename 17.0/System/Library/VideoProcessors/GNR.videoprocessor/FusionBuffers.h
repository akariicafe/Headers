@protocol MTLTexture, MTLBuffer;

@interface FusionBuffers : NSObject {
    char *morphology;
    struct __CVBuffer { } *similarityMap;
    id<MTLBuffer> scratchBuffer;
    id<MTLTexture> ltmLumaTex;
    id<MTLTexture> ltmChromaTex;
}

- (void).cxx_destruct;

@end
