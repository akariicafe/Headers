@interface FramebufferDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) unsigned long long colorPixelFormat;
@property (nonatomic) unsigned long long depthPixelFormat;
@property (nonatomic) unsigned long long stencilPixelFormat;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRenderPassDescriptor:(id)a0;

@end
