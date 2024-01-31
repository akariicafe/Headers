@class NSArray, NSString, NSIndexSet, PXGMetalRenderContext, NSObject, PXGColorProgram;
@protocol OS_dispatch_queue, PXGTextureConverter, PXGTextureAtlasManagerDelegate;

@interface PXGMetalTextureAtlasManager : NSObject <PXGMetalTextureAtlasDelegate, PXGTextureAtlasManager> {
    PXGMetalRenderContext *_metalRenderContext;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_requestQueue;
}

@property (copy) NSArray *atlasTextures;
@property (readonly, nonatomic) PXGColorProgram *colorProgram;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue;
@property (readonly, nonatomic) unsigned int capacityPerAtlas;
@property (nonatomic) BOOL mipmapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXGTextureConverter> textureConverter;
@property (weak, nonatomic) id<PXGTextureAtlasManagerDelegate> delegate;
@property (readonly, nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (retain, nonatomic) NSIndexSet *skipRenderSpriteIndexes;
@property (readonly, copy, nonatomic) NSArray *textures;

- (id)init;
- (void)addSpriteWithTextureRequestID:(int)a0 thumbnailData:(id)a1 size:(struct CGSize { double x0; double x1; })a2 bytesPerRow:(unsigned long long)a3 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)_requestQueue_getNextAvailableAtlas:(id *)a0 thumbnailOffset:(unsigned int *)a1;
- (void)_getAtlas:(id *)a0 localThumbnailIndex:(unsigned int *)a1 forGlobalThumbnailIndex:(unsigned int)a2;
- (void)_updateAtlasSpriteIndexSkips;
- (void)textureAtlasDidBecomeUnused:(id)a0;
- (void).cxx_destruct;
- (id)initWithThumbnailSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned long long)a1 capacityPerAtlas:(unsigned int)a2 mipmapped:(BOOL)a3 requestQueue:(id)a4 layoutQueue:(id)a5 colorProgram:(id)a6 context:(id)a7;
- (void)removeSpriteIndex:(unsigned int)a0 atThumbnailIndex:(unsigned int)a1;
- (void)pruneUnusedTextures;
- (void)processPendingThumbnailRequestIDsWithHandler:(id /* block */)a0;
- (void)applyChangeDetails:(id)a0;

@end
