@class PXGImageTexture;
@protocol PXGDisplayAssetAdjustment;

@interface PXGAdjustedTexturePayload : NSObject <NSCopying>

@property (readonly, nonatomic) PXGImageTexture *texture;
@property (readonly, nonatomic) id<PXGDisplayAssetAdjustment> adjustment;
@property (readonly, nonatomic) BOOL mipmaps;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTexture:(id)a0 adjustment:(id)a1 mipmaps:(BOOL)a2;

@end
