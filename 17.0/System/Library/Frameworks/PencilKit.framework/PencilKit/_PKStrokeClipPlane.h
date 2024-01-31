@interface _PKStrokeClipPlane : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } origin;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } normal;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)distanceToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithOrigin:(struct CGPoint { double x0; double x1; })a0 normal:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isEqualToClipPlane:(id)a0;

@end
