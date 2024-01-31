@interface NSComparisonPredicateOperator : NSPredicateOperator {
    unsigned long long _variant;
    unsigned long long _options;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)predicateFormat;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)options;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)variant;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2 options:(unsigned long long)a3;

@end
