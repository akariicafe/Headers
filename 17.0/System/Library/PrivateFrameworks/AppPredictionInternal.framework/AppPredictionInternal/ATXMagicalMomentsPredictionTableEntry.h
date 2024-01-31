@class ATXMagicalMomentsPrediction, NSCompoundPredicate;

@interface ATXMagicalMomentsPredictionTableEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXMagicalMomentsPrediction *prediction;
@property (readonly, nonatomic) NSCompoundPredicate *compoundPredicate;

+ (id)compoundPredicateFromPredicateArray:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPrediction:(id)a0 applicableCompoundPredicate:(id)a1;
- (id)initWithPrediction:(id)a0 applicablePredicates:(id)a1;

@end
