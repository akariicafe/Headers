@class NSDictionary, NSString;
@protocol MTLTexture, MTLCommandBuffer;

@interface CMIResourceMetalTextureBiPlanarYUV : NSObject <CMIResourceMetal> {
    id<MTLCommandBuffer> _commandBuffer;
}

@property (readonly, nonatomic) id<MTLTexture> textureY;
@property (readonly, nonatomic) id<MTLTexture> textureUV;
@property (readonly, nonatomic) unsigned int matchingPixelBufferFormat;
@property (readonly, nonatomic) int resourceType;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSDictionary *attachments;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (int)waitForCompletion;
- (void).cxx_destruct;
- (void)releaseAll;
- (id)initWithTextureY:(id)a0 textureUV:(id)a1 descriptor:(id)a2;
- (id)initWithTextureY:(id)a0 textureUV:(id)a1 metadata:(id)a2;

@end
