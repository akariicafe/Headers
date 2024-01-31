@class NSMapTable;

@interface _HKFactorization : NSObject <NSCopying, NSSecureCoding> {
    NSMapTable *_factors;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)factorizationFromString:(id)a0 factorGrammar:(id)a1;
+ (id)factorizationWithFactorsAndExponents:(id)a0;
+ (id)factorizationWithFactor:(id)a0 exponent:(long long)a1;
+ (id)factorization;

- (id)unitString;
- (id)init;
- (unsigned long long)hash;
- (void)_raiseToExponent:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)factorizationByMultiplying:(id)a0;
- (void)enumerateFactorsWithHandler:(id /* block */)a0;
- (void)_multiplyByFactorization:(id)a0;
- (void)_multiplyByFactor:(id)a0 exponent:(long long)a1;
- (long long)_exponentForFactor:(id)a0;
- (id)description;
- (id)anyFactor;
- (void).cxx_destruct;
- (id)factorizationByDividing:(id)a0;
- (id)factorizationByRaisingToExponent:(long long)a0;
- (void)_enumerateFactorsWithHandler:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (long long)exponentForFactor:(id)a0;
- (unsigned long long)factorCount;
- (id)reciprocal;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
