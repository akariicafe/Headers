@class NSArray, HKMedicalCoding, NSString, NSSet, HKConceptIdentifier;

@interface HKConcept : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) HKMedicalCoding *coding;
@property (readonly, copy, nonatomic) NSArray *attributes;
@property (readonly, copy, nonatomic) NSString *preferredName;
@property (readonly, copy, nonatomic) NSString *localizedPreferredName;
@property (readonly, copy, nonatomic) HKConceptIdentifier *identifier;
@property (readonly, copy, nonatomic) NSSet *validInRegions;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) BOOL isUndefined;
@property (readonly, nonatomic) BOOL isAdHoc;
@property (readonly, nonatomic) BOOL isNebulous;
@property (readonly, nonatomic) BOOL isGeneric;
@property (readonly, nonatomic) BOOL isLowUtility;
@property (readonly, nonatomic) BOOL isInMemory;
@property (readonly, nonatomic) BOOL chartsBloodPressure;
@property (readonly, nonatomic) BOOL hidesOutOfRangeFilter;
@property (readonly, copy, nonatomic) NSArray *synonyms;
@property (readonly, copy, nonatomic) NSString *adHocCode;
@property (readonly, copy, nonatomic) HKMedicalCoding *LOINCCoding;
@property (readonly, copy, nonatomic) HKMedicalCoding *RxNormCoding;
@property (readonly, copy, nonatomic) NSArray *relationships;
@property (readonly, nonatomic) BOOL relationshipsAreLoaded;
@property (readonly, copy, nonatomic) HKConcept *groupByConcept;
@property (readonly, copy, nonatomic) HKConcept *chartedWithConcept;

+ (id)preferredLanguages;
+ (id)conceptWithIdentifier:(id)a0 attributes:(id)a1 relationships:(id)a2;
+ (id)fallbackLanguagesForLocale:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)firstConceptOfRelationshipType:(long long)a0;
- (id)treeDescription;
- (void)_appendSortedAttributeTypeCountDescriptionToString:(id)a0;
- (void)_appendTreeDescriptionToString:(id)a0 visitedStack:(id)a1;
- (id)_sortedRelationships;
- (id)allConceptsOfRelationshipType:(long long)a0;
- (id)attributesForType:(long long)a0;
- (id)copyWithRelationships:(id)a0;
- (void)enumerateAttributesWithType:(long long)a0 block:(id /* block */)a1;
- (id)firstAttributeForType:(long long)a0;
- (id)initWithIdentifier:(id)a0 attributes:(id)a1 relationships:(id)a2 version:(long long)a3 deleted:(BOOL)a4 options:(unsigned long long)a5;
- (void)mutateBySettingRelationships:(id)a0;
- (id)stringsForAttributeType:(long long)a0;

@end
