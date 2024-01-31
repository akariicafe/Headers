@class NSArray, NSString, NSDictionary, HKOntologyLocalizedEducationContent, HKMedicalUserDomainConceptSemanticIdentifier;

@interface HKMedicalUserDomainConcept : HKUserDomainConcept <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _computedPropertyLock;
    NSDictionary *_preferredNameByLocaleIdentifier;
    HKMedicalUserDomainConceptSemanticIdentifier *_semanticIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *categoryTypes;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *ontologyPreferredName;
@property (readonly, copy, nonatomic) NSDictionary *preferredNameByLocaleIdentifier;
@property (readonly, copy, nonatomic) HKOntologyLocalizedEducationContent *educationContent;
@property (readonly, nonatomic) BOOL chartsBloodPressure;
@property (readonly, nonatomic) BOOL hidesOutOfRangeFilter;
@property (readonly, nonatomic) BOOL isLowUtility;

+ (id)_typeIdentifier;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (BOOL)unitTesting_isIdentical:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_dataDescription;
- (id)_generateSemanticIdentifier;
- (void)_setCategoryTypes:(id)a0;
- (void)_setCountryCode:(id)a0;
- (BOOL)canRequestSyncUponInsertion;
- (id)initWithCategoryTypes:(id)a0;
- (id)initWithCategoryTypes:(id)a0 countryCode:(id)a1 codingCollection:(id)a2 propertyCollection:(id)a3;
- (id)initWithCodingCollection:(id)a0 linkCollection:(id)a1 propertyCollection:(id)a2;
- (id)medicalConceptByAddingCategoryType:(long long)a0;
- (id)medicalConceptByReplacingCategoryTypes:(id)a0;
- (id)medicalConceptByReplacingCategoryTypes:(id)a0 codingCollection:(id)a1 linkCollection:(id)a2;
- (id)semanticIdentifier;

@end
