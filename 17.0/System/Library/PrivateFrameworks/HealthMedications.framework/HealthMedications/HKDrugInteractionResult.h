@class HKDrugInteractionSeverity, NSString, NSSet, HKOntologyLocalizedEducationContent, HKDrugInteractionClass, HKConceptIdentifier;

@interface HKDrugInteractionResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKDrugInteractionClass *firstInteractionClass;
@property (readonly, nonatomic) HKDrugInteractionClass *secondInteractionClass;
@property (readonly, copy, nonatomic) HKDrugInteractionSeverity *severity;
@property (readonly, copy, nonatomic) HKOntologyLocalizedEducationContent *educationContent;
@property (readonly, copy, nonatomic) HKConceptIdentifier *identifier;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSSet *validRegionCodes;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasSameAncestorIdentifiersAsInteractionResult:(id)a0;
- (id)initWithFirstInteractionClass:(id)a0 secondInteractionClass:(id)a1 severity:(id)a2 educationContent:(id)a3 ontologyIdentifier:(id)a4 validRegionCodes:(id)a5;
- (id)interactionClasses;

@end
