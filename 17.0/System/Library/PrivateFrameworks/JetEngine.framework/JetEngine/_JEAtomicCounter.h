@interface _JEAtomicCounter : NSObject {
    _Atomic long long _value;
}

- (id)init;
- (unsigned long long)hash;
- (id)initWithInitialValue:(long long)a0;
- (id)description;
- (long long)decrement;
- (long long)increment;
- (BOOL)isEqual:(id)a0;

@end
