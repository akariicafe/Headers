@protocol MTLTexture;

@interface PyramidStorage : NSObject {
    int levels;
    struct __CVBuffer *pixelBuffer[20];
    struct __CVBuffer *pixelBuffer2[20];
    id<MTLTexture> textureY[20];
    id<MTLTexture> textureUV[20];
    id<MTLTexture> textureY_RG[20];
    id<MTLTexture> textureUV_packed[20];
    BOOL isFP16[20];
}

+ (int)allocateOverlappingLevelsWithWidth:(unsigned short)a0 height:(unsigned short)a1 allocLevel0:(BOOL)a2 levels:(unsigned char)a3 texUsage:(unsigned long long)a4 scratchBuffer:(id)a5 offset:(unsigned long long *)a6 lumaFormat:(unsigned long long)a7 chromaFormat:(unsigned long long)a8 outPyramid:(id)a9 metal:(id)a10;
+ (int)allocatePyramidWithWidth:(unsigned short)a0 height:(unsigned short)a1 allocLevel0:(BOOL)a2 levels:(unsigned char)a3 texUsage:(unsigned long long)a4 scratchBuffer:(id)a5 offset:(unsigned long long *)a6 lumaFormat:(unsigned long long)a7 chromaFormat:(unsigned long long)a8 outPyramid:(id)a9 metal:(id)a10;
+ (int)allocatePyramidWithWidth:(unsigned short)a0 height:(unsigned short)a1 overlapLevels:(BOOL)a2 allocLevel0:(BOOL)a3 levels:(unsigned char)a4 texUsage:(unsigned long long)a5 scratchBuffer:(id)a6 offset:(unsigned long long *)a7 lumaFormat:(unsigned long long)a8 chromaFormat:(unsigned long long)a9 outPyramid:(id)a10 metal:(id)a11;
+ (id)createTextureAlias:(id)a0;
+ (int)overlappingLevelsMemorySize:(unsigned short)a0 height:(unsigned short)a1 allocLevel0:(BOOL)a2 levels:(unsigned char)a3 lumaFormat:(unsigned long long)a4 chromaFormat:(unsigned long long)a5 outSize:(unsigned long long *)a6 metal:(id)a7;
+ (int)pyramidMemorySize:(unsigned short)a0 height:(unsigned short)a1 allocLevel0:(BOOL)a2 levels:(unsigned char)a3 lumaFormat:(unsigned long long)a4 chromaFormat:(unsigned long long)a5 outSize:(unsigned long long *)a6 metal:(id)a7;
+ (int)pyramidMemorySize:(unsigned short)a0 height:(unsigned short)a1 overlapLevels:(BOOL)a2 allocLevel0:(BOOL)a3 levels:(unsigned char)a4 lumaFormat:(unsigned long long)a5 chromaFormat:(unsigned long long)a6 outSize:(unsigned long long *)a7 metal:(id)a8;

- (void)dealloc;
- (int)setLumaTexture:(id)a0 chromaTexture:(id)a1 level:(int)a2 metal:(id)a3;
- (int)setPixelBufferForLuma:(struct __CVBuffer { } *)a0 optionalChroma:(struct __CVBuffer { } *)a1 level:(int)a2 metal:(id)a3;
- (int)setPixelBuffer:(struct __CVBuffer { } *)a0 level:(int)a1 texUsage:(unsigned long long)a2 metal:(id)a3;
- (int)setPixelBuffer:(struct __CVBuffer { } *)a0 level:(int)a1 texUsage:(unsigned long long)a2 metal:(id)a3 alignDims:(BOOL)a4;
- (int)setPixelBufferFloat16:(struct __CVBuffer { } *)a0 chromaBuffer:(struct __CVBuffer { } *)a1 level:(int)a2 metal:(id)a3;
- (void).cxx_destruct;
- (void)clearLevel:(int)a0;
- (int)setPixelBuffer:(struct __CVBuffer { } *)a0 level:(int)a1 metal:(id)a2;
- (void)releaseBuffers;

@end
