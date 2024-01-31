@interface GLKHashableBigInt : NSObject <NSCopying> {
    struct GLKBigInt_s { unsigned long long n0; unsigned long long n1; } _bigInt;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBigInt:(struct GLKBigInt_s { unsigned long long x0; unsigned long long x1; } *)a0;

@end
