@interface EPBorder : EDBorder {
    unsigned long long mPrecedence;
}

+ (id)borderWithBorder:(id)a0 precedence:(unsigned long long)a1 resources:(id)a2;

- (unsigned long long)precedence;
- (id)initWithBorder:(id)a0 precedence:(unsigned long long)a1 resources:(id)a2;
- (BOOL)isEqualToBorder:(id)a0;

@end
