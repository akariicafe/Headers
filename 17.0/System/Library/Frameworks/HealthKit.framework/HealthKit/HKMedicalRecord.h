@class HKMedicalRecordOriginIdentifier, NSString, NSArray, NSUUID, NSDate, HKMedicalType, NSLocale, HKSemanticDate, HKConcept, HKFHIRIdentifier;

@interface HKMedicalRecord : HKSample <HKMedicalRecordCodings, HKConceptIndexable, HKCodedSample, NSSecureCoding, NSCopying> {
    HKConcept *_primaryConcept;
}

@property (class, readonly, nonatomic) BOOL groupsByUserDomainConcept;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *medicalRecordCodings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, nonatomic) long long recordCategoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly, copy, nonatomic) HKMedicalType *medicalType;
@property (readonly, copy, nonatomic) NSString *note;
@property (readonly, nonatomic) BOOL enteredInError;
@property (readonly, copy, nonatomic) NSDate *modifiedDate;
@property (readonly, copy, nonatomic) HKMedicalRecordOriginIdentifier *originIdentifier;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) long long extractionVersion;
@property (readonly, copy, nonatomic) HKSemanticDate *sortDate;
@property (readonly, nonatomic) HKConcept *primaryConcept;
@property (retain, nonatomic) NSString *country;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) HKFHIRIdentifier *FHIRIdentifier;
@property (readonly, nonatomic) unsigned long long medicalRecordOriginType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isConcreteObjectClass;
+ (BOOL)supportsEquivalence;
+ (id)_newMedicalRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 config:(id /* block */)a12;
+ (id)_sortDateIntervalFromStartDateComponents:(id)a0 endDateComponents:(id)a1 error:(out id *)a2;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (id)indexableConceptKeyPaths;
+ (id)indexableKeyPathsWithPrefix:(id)a0;

- (void)_setState:(unsigned long long)a0;
- (id)_init;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setNote:(id)a0;
- (void)_setLocale:(id)a0;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void)_setCountry:(id)a0;
- (void)_setEnteredInError:(BOOL)a0;
- (void)_setExtractionVersion:(long long)a0;
- (void)_setModifiedDate:(id)a0;
- (void)_setOriginIdentifier:(id)a0;
- (void)_setPrimaryConcept:(id)a0;
- (void)_setSortDate:(id)a0;
- (id)attachmentObjectIdentifier;
- (id)attachmentSchemaIdentifier;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (id)fallbackDisplayString;

@end
