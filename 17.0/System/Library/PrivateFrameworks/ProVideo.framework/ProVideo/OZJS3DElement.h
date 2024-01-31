@interface OZJS3DElement : OZJSElement <OZ3DElementJSExport>

@property (nonatomic) void *tdElement;

+ (id)elementWith3DElement:(void *)a0;

- (void)applyColorR:(float)a0 g:(float)a1 b:(float)a2;
- (void)applyContourToMotionPath:(struct SCNVector3 { float x0; float x1; float x2; })a0 vertically:(BOOL)a1 direction:(float)a2 rotation:(float)a3 addStart:(BOOL)a4 addEnd:(BOOL)a5;
- (struct SCNVector4 { float x0; float x1; float x2; float x3; })floorPosition:(id)a0 atTime:(float)a1;
- (struct SCNVector4 { float x0; float x1; float x2; float x3; })floorPosition:(id)a0 beneath:(struct SCNVector3 { float x0; float x1; float x2; })a1;
- (id)initWith3DElement:(void *)a0;
- (void)placeOnFloorRelativeTo:(int)a0 inScene:(id)a1 faceCamera:(BOOL)a2;
- (void)placeRelativeTo:(int)a0 inScene:(id)a1 alignment:(int)a2 distance:(float)a3 faceCamera:(BOOL)a4 preserveY:(BOOL)a5 time:(float)a6;
- (void)setColor:(struct SCNVector4 { float x0; float x1; float x2; float x3; })a0 forShaderParameterWithName:(id)a1;
- (void)setPosition:(struct SCNVector3 { float x0; float x1; float x2; })a0 forShaderParameterWithName:(id)a1;

@end
