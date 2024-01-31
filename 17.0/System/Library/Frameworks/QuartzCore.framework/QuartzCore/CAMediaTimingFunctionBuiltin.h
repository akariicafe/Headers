@interface CAMediaTimingFunctionBuiltin : CAMediaTimingFunction {
    unsigned int _index;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCAMLWriter:(id)a0;
- (void)_getPoints:(double *)a0;
- (Class)classForCoder;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
