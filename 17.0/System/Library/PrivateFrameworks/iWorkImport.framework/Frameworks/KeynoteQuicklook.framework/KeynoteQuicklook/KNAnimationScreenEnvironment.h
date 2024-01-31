@interface KNAnimationScreenEnvironment : NSObject <NSCopying>

@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) double pixelAspectRatio;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
