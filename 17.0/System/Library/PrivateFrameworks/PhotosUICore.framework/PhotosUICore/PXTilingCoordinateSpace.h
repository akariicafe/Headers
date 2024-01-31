@interface PXTilingCoordinateSpace : NSObject

@property (readonly, nonatomic) void *identifier;
@property (weak, nonatomic) PXTilingCoordinateSpace *parentSpace;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

- (id)init;
- (void).cxx_destruct;

@end
