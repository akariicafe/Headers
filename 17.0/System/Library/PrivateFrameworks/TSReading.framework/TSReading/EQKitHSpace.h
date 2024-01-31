@interface EQKitHSpace : EQKitBox

@property (readonly, nonatomic) double width;

- (id)init;
- (id)initWithWidth:(double)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;

@end
