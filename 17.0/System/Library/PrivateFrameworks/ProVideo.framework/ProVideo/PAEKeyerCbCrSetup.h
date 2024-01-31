@class NSNumber, NSMutableArray;

@interface PAEKeyerCbCrSetup : NSObject <NSSecureCoding> {
    NSNumber *_tolPieX[5];
    NSNumber *_tolPieY[5];
    NSNumber *_softPieX[5];
    NSNumber *_softPieY[5];
    NSMutableArray *_splineVertex;
    void *_keyer2DSatSpline;
    void *_keyer2DTolPie;
    void *_keyer2DSoftPie;
    BOOL _initialized;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualTo:(id)a0;
- (void *)getKeyer2DSatSpline;
- (void *)getKeyer2DSoftPie;
- (void *)getKeyer2DTolPie;
- (void)interpPieWithWeight:(float)a0 currentDirectionCorrection:(float)a1 nextDirectionCorrection:(float)a2 interpolatedCenter:(struct Vec2f { float x0[2]; })a3 currentCenter:(struct Vec2f { float x0[2]; })a4 currentPolar:(const struct Vec2f { float x0[2]; } *)a5 nextCenter:(struct Vec2f { float x0[2]; })a6 nextPolar:(const struct Vec2f { float x0[2]; } *)a7 interpolationType:(int)a8 interpolatedPie:(void *)a9;
- (void)interpVec2f:(float)a0 left:(struct Vec2f { float x0[2]; })a1 right:(struct Vec2f { float x0[2]; })a2 interpolated:(struct Vec2f { float x0[2]; } *)a3;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (void)offsetPie:(struct Vec2f { float x0[2]; } *)a0 offsetDegrees:(float)a1;
- (void)pieToPolarForPie:(void *)a0 polar:(struct Vec2f { float x0[2]; } *)a1;
- (void)pieToPolarForPie:(void *)a0 softPie:(void *)a1 tolPolar:(struct Vec2f { float x0[2]; } *)a2 softPolar:(struct Vec2f { float x0[2]; } *)a3;
- (struct Vec2f { float x0[2]; })polarToCartesian:(struct Vec2f { float x0[2]; })a0;
- (void)setSoftPieX:(id)a0 indice:(int)a1;
- (void)setSoftPieY:(id)a0 indice:(int)a1;
- (void)setTolPieX:(id)a0 indice:(int)a1;
- (void)setTolPieY:(id)a0 indice:(int)a1;
- (void)toPolar:(const struct Vec2f { float x0[2]; } *)a0 polar:(struct Vec2f { float x0[2]; } *)a1;

@end
