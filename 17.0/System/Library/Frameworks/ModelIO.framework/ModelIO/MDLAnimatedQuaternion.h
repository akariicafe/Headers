@interface MDLAnimatedQuaternion : MDLAnimatedValue

- (unsigned long long)precision;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct VtValue { struct type { unsigned char x0[8]; } x0; struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::VtValue::_TypeInfo> { struct _TypeInfo *x0; } x1; })defaultVtValue;
- (struct { })doubleQuaternionAtTime:(double)a0;
- (struct { })floatQuaternionAtTime:(double)a0;
- (unsigned long long)getDoubleQuaternionArray:(struct { } *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)getFloatQuaternionArray:(struct { } *)a0 maxCount:(unsigned long long)a1;
- (void)resetWithDoubleQuaternionArray:(const struct { } *)a0 atTimes:(const double *)a1 count:(unsigned long long)a2;
- (void)resetWithFloatQuaternionArray:(const struct { } *)a0 atTimes:(const double *)a1 count:(unsigned long long)a2;
- (void)resetWithUsdAttribute:(const void *)a0 timeScale:(double)a1;
- (void)resetWithUsdAttribute:(const void *)a0 timeScale:(double)a1 time:(double)a2;
- (void)setDoubleQuaternion:(struct { })a0 atTime:(double)a1;
- (void)setFloatQuaternion:(struct { })a0 atTime:(double)a1;

@end
