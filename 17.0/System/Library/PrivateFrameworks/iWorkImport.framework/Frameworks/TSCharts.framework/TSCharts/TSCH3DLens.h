@interface TSCH3DLens : NSObject <NSCopying>

@property (nonatomic) float near;
@property (nonatomic) float far;

+ (id)lens;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)calculateCullingPlanes:(void *)a0;

@end
