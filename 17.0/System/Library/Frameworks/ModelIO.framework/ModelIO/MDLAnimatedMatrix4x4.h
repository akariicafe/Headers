@interface MDLAnimatedMatrix4x4 : MDLAnimatedValue

- (unsigned long long)precision;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)getFloat4x4Array:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 maxCount:(unsigned long long)a1;
- (struct { void /* unknown type, empty encoding */ x0[4]; })float4x4AtTime:(double)a0;
- (struct VtValue { struct type { unsigned char x0[8]; } x0; struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::VtValue::_TypeInfo> { struct _TypeInfo *x0; } x1; })defaultVtValue;
- (struct { void /* unknown type, empty encoding */ x0[4]; })double4x4AtTime:(double)a0;
- (unsigned long long)getDouble4x4Array:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 maxCount:(unsigned long long)a1;
- (void)resetWithDouble4x4Array:(const struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 atTimes:(const double *)a1 count:(unsigned long long)a2;
- (void)resetWithFloat4x4Array:(const struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 atTimes:(const double *)a1 count:(unsigned long long)a2;
- (void)resetWithUsdAttribute:(const void *)a0 timeScale:(double)a1;
- (void)resetWithUsdAttribute:(const void *)a0 timeScale:(double)a1 time:(double)a2;
- (void)setDouble4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 atTime:(double)a1;
- (void)setFloat4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 atTime:(double)a1;

@end
