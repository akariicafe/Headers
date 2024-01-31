@interface PAEOffsetColorCurveChannelData : NSObject <NSSecureCoding, NSCopying, FxCustomParameterInterpolation_v2> {
    void *_curve_private;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)channelDataWithRed:(double)a0 green:(double)a1 blue:(double)a2;
+ (id)channelDataWithRed:(double)a0 green:(double)a1 blue:(double)a2 curve:(const void *)a3;

- (double)green;
- (double)blue;
- (double)red;
- (id)init;
- (void)reset;
- (void)dealloc;
- (double)evaluate:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2;
- (BOOL)conformFromColorCurve:(id)a0;
- (void *)curveRef;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 curve:(const void *)a3;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (BOOL)isAtDefaults;

@end
