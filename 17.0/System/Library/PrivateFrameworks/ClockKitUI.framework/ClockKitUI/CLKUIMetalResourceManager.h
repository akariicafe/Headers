@class NSObject;
@protocol MTLTexture, MTLDevice, OS_dispatch_queue;

@interface CLKUIMetalResourceManager : CLKUIResourceManager {
    id<MTLDevice> _device;
    id<MTLTexture> _nilTexture2D;
    id<MTLTexture> _nilTextureCube;
    NSObject<OS_dispatch_queue> *_textureStreamingQueue;
}

@property (class, readonly, nonatomic) id<MTLDevice> sharedDevice;
@property (class, readonly, nonatomic) id<MTLTexture> sharedNilTexture2D;
@property (class, readonly, nonatomic) id<MTLTexture> sharedNilTextureCube;

+ (id)sharedCommandQueue;
+ (void)addCompletedErrorCheckToCommandBuffer:(id)a0 forCase:(id)a1;
+ (void)setSynchronousTextureStreamingEnabled:(BOOL)a0;
+ (id)sharedMetalInstance;
+ (BOOL)synchronousTextureStreamingEnabled;
+ (id)textureStreamingQueue;

- (id)init;
- (void).cxx_destruct;
- (id)_newAtlasForUuid:(id)a0 nilTexture:(id)a1 streaming:(BOOL)a2;
- (id)_newAtlasForUuid:(id)a0 nullTexture:(id)a1 streaming:(BOOL)a2;
- (void)_purgeAtlases:(id)a0;
- (void)_updateTextureStreamingForAtlas:(id)a0;
- (id)nullAtlas2D;
- (id)nullAtlasCube;

@end
