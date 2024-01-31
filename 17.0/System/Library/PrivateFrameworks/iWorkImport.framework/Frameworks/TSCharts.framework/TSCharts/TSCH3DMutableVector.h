@interface TSCH3DMutableVector : TSCH3DVector

@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;
@property (nonatomic) float w;

- (void)setX:(float)a0;
- (void)setY:(float)a0;
- (void)setW:(float)a0;
- (void)setZ:(float)a0;
- (void)setValue:(struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; })a0;
- (void)setValue2:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a0;
- (void)setValue3:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })a0;
- (void)setValue4:(struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; })a0;
- (void)swapXY;

@end
