@class TMLAffineTransform;

@interface TMLTransform3D : NSObject <TMLTransform3DJSExports>

@property (readonly, nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } transform;
@property (readonly, nonatomic) TMLAffineTransform *affineTransform;
@property (nonatomic) double m11;
@property (nonatomic) double m12;
@property (nonatomic) double m13;
@property (nonatomic) double m14;
@property (nonatomic) double m21;
@property (nonatomic) double m22;
@property (nonatomic) double m23;
@property (nonatomic) double m24;
@property (nonatomic) double m31;
@property (nonatomic) double m32;
@property (nonatomic) double m33;
@property (nonatomic) double m34;
@property (nonatomic) double m41;
@property (nonatomic) double m42;
@property (nonatomic) double m43;
@property (nonatomic) double m44;

+ (void)initializeJSContext:(id)a0;

- (id)CATransform3DValue;
- (id)initWithTransform3D:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;

@end
