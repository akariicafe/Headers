@interface SCNJSValue : NSValue

+ (id)SCNJSExportProtocol;
+ (id)valueWithMatrix4:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a0;
+ (id)valueWithVector3:(struct SCNVector3 { float x0; float x1; float x2; })a0;
+ (id)valueWithVector4:(struct SCNVector4 { float x0; float x1; float x2; float x3; })a0;

- (struct SCNVector4 { float x0; float x1; float x2; float x3; })vector4;
- (struct SCNVector3 { float x0; float x1; float x2; })vector3;
- (struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })matrix4;

@end
