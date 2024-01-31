@class HKQuantity, NSArray, NSString, NSDictionary, HKOntologyLocalizedEducationContent, NSNumber, HKMedicationUserDomainConceptSemanticIdentifier;

@interface HKMedicationUserDomainConcept : HKUserDomainConcept <NSCopying, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _computedPropertyLock;
    HKMedicationUserDomainConceptSemanticIdentifier *_semanticIdentifier;
    NSDictionary *_localizedOntologyPreferredNames;
    NSDictionary *_localizedOntologyBrandNames;
    NSDictionary *_localizedOntologyGenericNames;
    NSDictionary *_localizedOntologyManufacturedDoseForms;
    NSDictionary *_localizedOntologyBasicDoseForms;
    NSDictionary *_localizedOntologyLoggingUnitSingular;
    NSDictionary *_localizedOntologyLoggingUnitPlural;
    NSDictionary *_localizedComponentNames;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *freeTextMedicationIngredientNamedStrengthQuantities;
@property (readonly, copy, nonatomic) NSString *userSpecifiedName;
@property (readonly, copy, nonatomic) NSString *userSpecifiedNotes;
@property (readonly, copy, nonatomic) NSString *userVisualizationConfigJSONString;
@property (readonly, copy, nonatomic) NSString *freeTextMedicationName;
@property (readonly, nonatomic) NSNumber *freeTextMedicationFormCode;
@property (readonly, copy, nonatomic) NSNumber *freeTextMedicationLoggingUnitCode;
@property (readonly, copy, nonatomic) HKQuantity *freeTextMedicationStrengthQuantity;
@property (readonly, copy, nonatomic) NSDictionary *localizedOntologyPreferredNames;
@property (readonly, copy, nonatomic) NSDictionary *localizedOntologyBrandNames;
@property (readonly, copy, nonatomic) NSDictionary *localizedOntologyGenericNames;
@property (readonly, copy, nonatomic) NSDictionary *localizedOntologyManufacturedDoseForms;
@property (readonly, copy, nonatomic) NSString *unlocalizedQuantifiedUnitStrengthPreferredDisplayString;
@property (readonly, copy, nonatomic) NSDictionary *localizedOntologyBasicDoseForms;
@property (readonly, copy, nonatomic) NSDictionary *localizedOntologyLoggingUnitSingular;
@property (readonly, copy, nonatomic) NSDictionary *localizedOntologyLoggingUnitPlural;
@property (readonly, copy, nonatomic) HKOntologyLocalizedEducationContent *localizedOntologyEducationContent;
@property (readonly, copy, nonatomic) NSDictionary *localizedOntologyComponentNames;

+ (id)_typeIdentifier;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_dataDescription;
- (BOOL)canRequestSyncUponInsertion;
- (id)displayNameComponents;
- (id)initWithCodingCollection:(id)a0 linkCollection:(id)a1 propertyCollection:(id)a2;
- (id)loggingUnit;
- (id)semanticIdentifier;
- (id)initWithConceptIdentifier:(id)a0 userSpecifiedName:(id)a1 userSpecifiedNotes:(id)a2;
- (id)copyMedicationByUpdatingUserSpecifiedName:(id)a0 userSpecifiedNotes:(id)a1 userVisualizationConfigJSONString:(id)a2;
- (id)initWithCodingCollection:(id)a0 supplementalPropertyCollection:(id)a1;
- (id)initWithOntologyCoding:(id)a0 userSpecifiedName:(id)a1 userSpecifiedNotes:(id)a2;
- (id)initWithOntologyCoding:(id)a0 userSpecifiedName:(id)a1 userSpecifiedNotes:(id)a2 medicationVisualizationConfig:(id)a3 freeTextProperties:(id)a4;

@end
