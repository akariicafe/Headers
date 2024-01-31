@interface PKRendererTileProperties : NSObject <NSCopying>

@property (readonly, nonatomic) long long level;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } offset;
@property (readonly, nonatomic) BOOL sixChannelMode;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } drawingTransform;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLevel:(long long)a0 offset:(struct CGPoint { double x0; double x1; })a1 drawingTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 sixChannelMode:(BOOL)a3;

@end
