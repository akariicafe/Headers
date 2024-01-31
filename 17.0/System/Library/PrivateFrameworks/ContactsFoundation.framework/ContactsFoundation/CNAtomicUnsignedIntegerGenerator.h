@interface CNAtomicUnsignedIntegerGenerator : NSObject {
    _Atomic long long _n;
}

- (id)init;
- (id)description;
- (unsigned long long)nextUnsignedInteger;

@end
