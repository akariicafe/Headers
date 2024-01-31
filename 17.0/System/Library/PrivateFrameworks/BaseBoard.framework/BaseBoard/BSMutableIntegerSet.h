@interface BSMutableIntegerSet : BSIntegerSet

- (void)minusSet:(id)a0;
- (BOOL)addValue:(long long)a0;
- (void)unionSet:(id)a0;
- (void)removeValue:(long long)a0;
- (void)removeAllValues;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
