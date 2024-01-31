@interface NSAffineTransform : NSObject <NSCopying, NSSecureCoding> {
    struct { double m11; double m12; double m21; double m22; double tX; double tY; } _transformStruct;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property struct { double x0; double x1; double x2; double x3; double x4; double x5; } transformStruct;

+ (id)transform;
+ (id)transformWithRotationInRadians:(double)a0;
+ (id)transformWithRotationInDegrees:(double)a0;
+ (id)transformWithFlipUsingHeight:(double)a0;
+ (id)transformWithScale:(double)a0;
+ (id)transformWithTransformStruct:(struct { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
+ (id)transformWithXScale:(double)a0 yScale:(double)a1;
+ (id)transformWithXTranslation:(double)a0 yTranslation:(double)a1;

- (void)invert;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)scaleBy:(double)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGPoint { double x0; double x1; })transformPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)appendTransform:(id)a0;
- (id)initWithTransform:(id)a0;
- (void)prependTransform:(id)a0;
- (void)rotateByDegrees:(double)a0;
- (void)rotateByRadians:(double)a0;
- (void)scaleXBy:(double)a0 yBy:(double)a1;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (void)translateXBy:(double)a0 yBy:(double)a1;

@end
