@class NSOrderedSet, NSDictionary, NSString, NSArray;

@interface HKFeatureAvailabilityRequirementsEvaluation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *satisfactionByRequirementIdentifier;
@property (readonly, copy, nonatomic) NSOrderedSet *requirementIdentifiersOrderedByPriority;
@property (readonly, nonatomic) NSString *highestPriorityUnsatisfiedRequirement;
@property (readonly, copy, nonatomic) NSArray *unsatisfiedRequirementIdentifiers;

+ (id)emptyEvaluation;
+ (id)evaluationOfRequirements:(id)a0 dataSource:(id)a1 overrides:(id)a2 error:(id *)a3;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)unsatisfiedRequirementIdentifiersDescription;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)copyUpdatingRequirementForIdentifier:(id)a0 isSatisfied:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)areAllRequirementsSatisfied;
- (BOOL)isRequirementSatisfiedWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequirementIdentifiersOrderedByPriority:(id)a0 satisfactionByRequirementIdentifier:(id)a1;

@end
