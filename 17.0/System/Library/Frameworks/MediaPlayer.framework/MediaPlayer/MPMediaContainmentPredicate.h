@class NSString, NSSet;

@interface MPMediaContainmentPredicate : MPMediaPredicate

@property (readonly, copy, nonatomic) NSString *property;
@property (readonly, copy, nonatomic) NSSet *values;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0 values:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)ML3PredicateForTrack;
- (void).cxx_destruct;
- (id)ML3PredicateForContainer;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_ML3PredicateForEntityClass:(Class)a0;

@end
