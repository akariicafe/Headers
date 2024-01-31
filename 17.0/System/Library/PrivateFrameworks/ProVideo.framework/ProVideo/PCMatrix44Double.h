@interface PCMatrix44Double : NSObject <NSSecureCoding, NSCopying> {
    double _m[4][4];
    void *_pcMatrix;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } SIMDFloat4x4;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } SIMDDouble4x4;

+ (id)matrixWithSIMDDouble4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
+ (id)matrixWithSIMDFloat4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

- (BOOL)invert;
- (id)extendedDescription;
- (id)compactDescription;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)array;
- (id)debugDescription;
- (id)initWithArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isIdentity;
- (void)leftFlipAboutY:(double)a0;
- (id)newTransformTo:(id)a0;
- (double)doubleValueAtRow:(unsigned int)a0 col:(unsigned int)a1;
- (void)getDoubles:(double[16])a0;
- (id)initWithDoubles:(double[16])a0;
- (id)initWithDoubles:(double[16])a0 external:(BOOL)a1;
- (id)initWithPCMatrix:(const void *)a0;
- (id)initWithSIMDDouble4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)initWithSIMDFloat4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (BOOL)invert2D;
- (BOOL)isEqualToPCMatrix44Double:(id)a0;
- (void)leftMult:(id)a0;
- (void)leftRotate:(double)a0 axis:(int)a1;
- (void)leftScaleX:(double)a0 scaleY:(double)a1 scaleZ:(double)a2;
- (void)leftShearX:(double)a0 shearY:(double)a1;
- (void)leftTranslateX:(double)a0 translateY:(double)a1 translateZ:(double)a2;
- (void)makeIdentity;
- (id)newPlanarTransformTo:(id)a0;
- (void *)pcMatrix;
- (void)rightMult:(id)a0;
- (void)rightRotate:(double)a0 axis:(int)a1;
- (void)rightScaleX:(double)a0 scaleY:(double)a1 scaleZ:(double)a2;
- (void)rightShearX:(double)a0 shearY:(double)a1;
- (void)rightTranslateX:(double)a0 translateY:(double)a1 translateZ:(double)a2;
- (void)scaleSizeX:(double)a0 sizeY:(double)a1 sizeZ:(double)a2 scaledSizeX:(double *)a3 scaledSizeY:(double *)a4 scaledSizeZ:(double *)a5;
- (void)setDoubleValue:(double)a0 atRow:(unsigned int)a1 col:(unsigned int)a2;
- (void)setDoubles:(double[16])a0;
- (struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })transformInfo;
- (void)transpose;

@end
