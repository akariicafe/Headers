@interface RMDSystemArc4RandomSource : RMDRandomSource

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (long long)nextInt;

@end
