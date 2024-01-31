@interface TSCH3DTextureTiling : NSObject <NSCopying>

+ (id)tiling;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)restoreDefault;

@end
