@class NSUUID, NSString, NSArray, HKMedicationRecordType, HKMedicalDate, NSLocale, HKConcept, HKMedicalCodingCollection, HKMedicalCoding;

@interface HKMedicationRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {
    HKMedicalCodingCollection *_medicationCodingCollection;
    long long _assertionType;
    NSString *_asserter;
    HKMedicalDate *_assertionDate;
    HKMedicalCoding *_statusCoding;
    NSArray *_dosages;
    HKMedicalDate *_earliestDosageDate;
    NSArray *_reasonForUseCodingCollections;
    BOOL _notTaken;
    NSArray *_reasonsNotTakenCodingCollections;
    HKMedicalDate *_effectiveStartDate;
    HKMedicalDate *_effectiveEndDate;
    HKConcept *_medication;
    HKConcept *_status;
    NSArray *_reasonForUse;
    NSArray *_reasonsNotTaken;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, nonatomic) long long recordCategoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) HKMedicationRecordType *medicationRecordType;
@property (readonly, copy) NSString *asserter;
@property (readonly, copy) HKMedicalDate *assertionDate;
@property (readonly) long long assertionType;
@property (readonly, copy) NSArray *dosages;
@property (readonly, copy) HKMedicalDate *earliestDosageDate;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly, copy) HKConcept *medication;
@property (readonly, copy) HKMedicalCodingCollection *medicationCodingCollection;
@property (readonly) BOOL notTaken;
@property (readonly, copy) NSArray *reasonForUse;
@property (readonly, copy) NSArray *reasonForUseCodingCollections;
@property (readonly, copy) NSArray *reasonsNotTaken;
@property (readonly, copy) NSArray *reasonsNotTakenCodingCollections;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;

+ (BOOL)_isConcreteObjectClass;
+ (BOOL)supportsEquivalence;
+ (id)_newMedicationRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 medicationCodingCollection:(id)a12 assertionType:(long long)a13 asserter:(id)a14 assertionDate:(id)a15 statusCoding:(id)a16 dosages:(id)a17 earliestDosageDate:(id)a18 reasonForUseCodingCollections:(id)a19 notTaken:(BOOL)a20 reasonsNotTakenCodingCollections:(id)a21 effectiveStartDate:(id)a22 effectiveEndDate:(id)a23 config:(id /* block */)a24;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (BOOL)groupsByUserDomainConcept;
+ (id)indexableConceptKeyPaths;
+ (id)medicationRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 country:(id)a9 state:(unsigned long long)a10 medicationCodingCollection:(id)a11 assertionType:(long long)a12 asserter:(id)a13 assertionDate:(id)a14 statusCoding:(id)a15 dosages:(id)a16 earliestDosageDate:(id)a17 reasonForUseCodingCollections:(id)a18 notTaken:(BOOL)a19 reasonsNotTakenCodingCollections:(id)a20 effectiveStartDate:(id)a21 effectiveEndDate:(id)a22;
+ (id)medicationRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 medicationCodingCollection:(id)a12 assertionType:(long long)a13 asserter:(id)a14 assertionDate:(id)a15 statusCoding:(id)a16 dosages:(id)a17 earliestDosageDate:(id)a18 reasonForUseCodingCollections:(id)a19 notTaken:(BOOL)a20 reasonsNotTakenCodingCollections:(id)a21 effectiveStartDate:(id)a22 effectiveEndDate:(id)a23;

- (void)_setStatus:(id)a0;
- (id)init;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setMedicationCodingCollection:(id)a0;
- (void)_setMedication:(id)a0;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void)_setAsserter:(id)a0;
- (void)_setAssertionDate:(id)a0;
- (void)_setAssertionType:(long long)a0;
- (void)_setDosages:(id)a0;
- (void)_setEarliestDosageDate:(id)a0;
- (void)_setEffectiveEndDate:(id)a0;
- (void)_setEffectiveStartDate:(id)a0;
- (void)_setNotTaken:(BOOL)a0;
- (void)_setReasonForUse:(id)a0;
- (void)_setReasonForUseCodingCollections:(id)a0;
- (void)_setReasonsNotTaken:(id)a0;
- (void)_setReasonsNotTakenCodingCollections:(id)a0;
- (void)_setStatusCoding:(id)a0;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (id)medicalRecordCodings;
- (id)statusCodingCollection;

@end
