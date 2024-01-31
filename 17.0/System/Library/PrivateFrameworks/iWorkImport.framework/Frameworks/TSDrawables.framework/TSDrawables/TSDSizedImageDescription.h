@interface TSDSizedImageDescription : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) BOOL isWideGamut;
@property (readonly, nonatomic) BOOL hasBakedMask;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToSizedImageDescription:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 isWideGamut:(BOOL)a1 hasBakedMask:(BOOL)a2;

@end
