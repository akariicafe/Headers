@interface SKPhysicsGrid : NSObject

@property (readonly, nonatomic) float width;
@property (readonly, nonatomic) float height;

+ (id)vectorGridFromTexture:(id)a0 accuracy:(float)a1;
+ (id)gridFromOccupancyArray:(const char *)a0 width:(int)a1 height:(int)a2;
+ (id)gridFromTexture:(id)a0 alphaThreshold:(float)a1 accuracy:(float)a2;

- (void)spritesFromGrid:(id)a0 gridSize:(struct CGSize { double x0; double x1; })a1 zPosition:(double)a2 edgeColor:(id)a3 interiorColor:(id)a4 spriteSize:(struct CGSize { double x0; double x1; })a5 physicsBody:(id)a6;
- (void)spritesFromGrid:(id)a0 xDivisions:(int)a1 zPosition:(double)a2 spriteSize:(struct CGSize { double x0; double x1; })a3 texture:(id)a4 physicsBody:(id)a5;

@end
