@class SKNode;

@interface IKLink : NSObject

@property (retain, nonatomic) SKNode *node;
@property (nonatomic) union _GLKVector2 { struct { float x; float y; } ; struct { float s; float t; } ; float v[2]; } position;
@property (nonatomic) float angleInitial;
@property (readonly, nonatomic) float angle;
@property (nonatomic) float length;
@property (nonatomic) union _GLKVector2 { struct { float x; float y; } ; struct { float s; float t; } ; float v[2]; } size;

- (id)initWithNode:(id)a0;
- (void).cxx_destruct;
- (double)normalizeAngle:(double)a0;
- (void)rotateByAngle:(float)a0;

@end
