@interface MDLAnimatedQuaternionArray : MDLAnimatedValue

@property (nonatomic) unsigned long long elementCount;

- (unsigned long long)precision;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)getDoubleQuaternionArray:(struct { } *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (struct VtValue { struct type { unsigned char x0[8]; } x0; struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::VtValue::_TypeInfo> { struct _TypeInfo *x0; } x1; })defaultVtValue;
- (unsigned long long)getDoubleQuaternionArray:(struct { } *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)getFloatQuaternionArray:(struct { } *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)getFloatQuaternionArray:(struct { } *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (id)initWithElementCount:(unsigned long long)a0;
- (void)resetWithDoubleQuaternionArray:(const struct { } *)a0 count:(unsigned long long)a1 atTimes:(const double *)a2 count:(unsigned long long)a3;
- (void)resetWithFloatQuaternionArray:(const struct { } *)a0 count:(unsigned long long)a1 atTimes:(const double *)a2 count:(unsigned long long)a3;
- (void)resetWithUsdAttribute:(const void *)a0 timeScale:(double)a1;
- (void)resetWithUsdAttribute:(const void *)a0 timeScale:(double)a1 time:(double)a2;
- (void)setDoubleQuaternionArray:(const struct { } *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (void)setFloatQuaternionArray:(const struct { } *)a0 count:(unsigned long long)a1 atTime:(double)a2;

@end
