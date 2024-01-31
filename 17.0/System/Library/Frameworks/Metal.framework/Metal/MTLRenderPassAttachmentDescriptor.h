@protocol MTLTexture;

@interface MTLRenderPassAttachmentDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) id<MTLTexture> texture;
@property (nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long slice;
@property (nonatomic) unsigned long long depthPlane;
@property (retain, nonatomic) id<MTLTexture> resolveTexture;
@property (nonatomic) unsigned long long resolveLevel;
@property (nonatomic) unsigned long long resolveSlice;
@property (nonatomic) unsigned long long resolveDepthPlane;
@property (nonatomic) unsigned long long loadAction;
@property (nonatomic) unsigned long long storeAction;
@property (nonatomic) unsigned long long storeActionOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
