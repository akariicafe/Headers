@interface RCPNaturalInputCollectionSelection : NSObject <NSCopying>

@property (readonly) struct CGPoint { double x; double y; } location;
@property (readonly) double zPosition;
@property (readonly) struct CGPoint { double x; double y; } direction;
@property (readonly) double zDirection;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 zPosition:(double)a1;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 zPosition:(double)a1 direction:(struct CGPoint { double x0; double x1; })a2 zDirection:(double)a3;

@end
