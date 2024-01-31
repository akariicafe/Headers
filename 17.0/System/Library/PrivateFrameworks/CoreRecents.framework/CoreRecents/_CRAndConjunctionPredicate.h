@class NSArray;

@interface _CRAndConjunctionPredicate : CRSearchPredicate

@property (readonly, copy) NSArray *subpredicates;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)asNSPredicate;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSubpredicates:(id)a0;

@end
