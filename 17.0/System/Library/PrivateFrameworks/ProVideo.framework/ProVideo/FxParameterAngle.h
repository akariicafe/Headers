@interface FxParameterAngle : FxPinParameter {
    struct FxParameterAnglePriv { BOOL x0; double x1; double x2; } *_anglePriv;
}

- (id)init;
- (void)dealloc;
- (double)stepValue;
- (void)setStepValue:(double)a0;
- (void)setStartValue:(double)a0;
- (double)startValue;
- (void)setIsClockwise:(BOOL)a0;
- (BOOL)isClockwise;

@end
