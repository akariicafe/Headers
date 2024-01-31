@class NSPredicate, NSSet, NSOrderedSet;

@interface _CDContextualPredicate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSPredicate *predicateForPreviousState;
@property (copy, nonatomic) NSSet *keyPaths;
@property (nonatomic) double minimumDurationInPreviousState;
@property (nonatomic) BOOL evaluateOnEveryKeyPathUpdate;
@property (retain, nonatomic) NSOrderedSet *timeBasedPredicateEvaluationIntervals;
@property (retain, nonatomic) NSSet *circularLocationRegions;
@property (readonly, nonatomic) BOOL firesOnAnyChange;

+ (id)andPredicateWithSubpredicates:(id)a0;
+ (id)predicateForKeyPath:(id)a0 withPredicate:(id)a1 withPredicateForPreviousState:(id)a2 withMinimumDurationInPreviousState:(double)a3;
+ (id)predicateForKeyPath:(id)a0 withFormat:(id)a1;
+ (id)notPredicateWithSubpredicate:(id)a0;
+ (id)predicateForKeyPath:(id)a0 withPredicate:(id)a1;
+ (id)orPredicateWithSubpredicates:(id)a0;
+ (id)contextualPredicateForKeyPaths:(id)a0 withPredicate:(id)a1;
+ (id)predicateForChangeAtKeyPath:(id)a0;
+ (id)predicateForKeyPath:(id)a0 equalToValue:(id)a1;
+ (id)predicateForKeyPath:(id)a0 equalToValue:(id)a1 withMinimumDurationInPreviousState:(double)a2;
+ (id)predicateForChangeAtKeyPaths:(id)a0;
+ (id)predicateForChangeAtKeyPath:(id)a0 withMinimumDurationInPreviousState:(double)a1;

- (BOOL)evaluateWithObject:(id)a0;
- (unsigned long long)hash;
- (BOOL)evaluateWithState:(id)a0 previousValue:(id)a1;
- (id)initForChangeAtKeyPath:(id)a0 equalToValue:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initForChangeAtKeyPath:(id)a0;
- (void).cxx_destruct;
- (id)initForChangeAtKeyPaths:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
