@class MDLTexture;

@interface MTKTextureLoaderMDL : MTKTextureLoaderData {
    MDLTexture *_texture;
    struct MTLPixelFormatInfo { char *name; unsigned int flags; unsigned long long castClass; union { struct MTLNormalPixelFormatInfo { unsigned long long pixelBytes; unsigned char componentCount; unsigned char alignment; unsigned long long pixelBytesRender; unsigned long long pixelBytesRenderMSAA; } normal; struct MTLCompressedPixelFormatInfo { unsigned long long blockBytes; unsigned long long blockWidth; unsigned long long blockHeight; unsigned long long blockDepth; } compressed; } type; } _pixelFormatInfo;
}

- (void)dealloc;
- (BOOL)determineFormatFromChannelEncoding:(long long)a0 channelCount:(unsigned long long)a1 error:(id *)a2;
- (id)getDataForArrayElement:(unsigned long long)a0 face:(unsigned long long)a1 level:(unsigned long long)a2 depthPlane:(unsigned long long)a3 bytesPerRow:(unsigned long long *)a4 bytesPerImage:(unsigned long long *)a5;
- (id)initWithMDLTexture:(id)a0 options:(id)a1 error:(id *)a2;

@end
