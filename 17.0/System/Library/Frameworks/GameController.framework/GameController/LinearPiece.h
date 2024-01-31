@interface LinearPiece : NSObject

@property float value;
@property float delta;

+ (id)pieceWithValue:(float)a0 delta:(float)a1;

- (id)init;

@end
