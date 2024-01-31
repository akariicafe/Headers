@class NSComparisonPredicate, NSSortDescriptor;

@interface HKQuerySortConstraint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSortDescriptor *sortDescriptor;
@property (readonly, copy, nonatomic) NSComparisonPredicate *predicate;

+ (id)sortConstraintByRelaxingSortConstraint:(id)a0 error:(id *)a1;
+ (id)sortConstraintWithSortDescriptor:(id)a0 predicate:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (id)initWithSortDescriptor:(id)a0 predicate:(id)a1;
- (BOOL)canRelax;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
