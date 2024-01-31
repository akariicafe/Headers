@class TSCH3DResource, TSCH3DTextureResource;

@interface TSCH3DTexture : NSObject <NSCopying> {
    TSCH3DTextureResource *_textureResource;
}

@property (readonly, nonatomic) TSCH3DResource *resource;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)resource;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasCompleteData;
- (void)didInitFromSOS;
- (BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)a0;
- (id)optimizedMipmapBuffer;
- (id)representativeColorBuffer;
- (void)resetResource;

@end
