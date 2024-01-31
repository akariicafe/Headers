@interface _HKSPUnsignedIntegerProperty : _HKSPNumberBoxedProperty

- (void)decodeValueForObject:(id)a0 fromCoder:(id)a1;
- (void)encodeValueForObject:(id)a0 fromCoder:(id)a1;
- (void)copyValueFromObject:(id)a0 toObject:(id)a1;
- (unsigned long long)unsignedIntegerValueForObject:(id)a0;

@end
