@class NSUUID, NSString, NSArray, NSLocale, HKMedicalCodingCollection, HKConcept, HKDiagnosticTestReportType, HKMedicalDate, HKMedicalCoding;

@interface HKDiagnosticTestReport : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {
    HKMedicalCodingCollection *_diagnosticTestCodingCollection;
    NSArray *_results;
    HKMedicalDate *_effectiveStartDate;
    HKMedicalCoding *_statusCoding;
    HKMedicalDate *_effectiveEndDate;
    HKMedicalDate *_issueDate;
    HKConcept *_diagnosticTest;
    HKConcept *_status;
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
@property (readonly, copy) HKDiagnosticTestReportType *diagnosticTestReportType;
@property (readonly, copy) HKConcept *diagnosticTest;
@property (readonly, copy) HKMedicalCodingCollection *diagnosticTestCodingCollection;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly, copy) HKMedicalDate *issueDate;
@property (readonly, copy) NSArray *results;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;

+ (BOOL)_isConcreteObjectClass;
+ (BOOL)supportsEquivalence;
+ (id)_newDiagnosticTestReportWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 diagnosticTestCodingCollection:(id)a12 results:(id)a13 effectiveStartDate:(id)a14 statusCoding:(id)a15 effectiveEndDate:(id)a16 issueDate:(id)a17 config:(id /* block */)a18;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (id)diagnosticTestReportWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 country:(id)a9 state:(unsigned long long)a10 diagnosticTestCodingCollection:(id)a11 results:(id)a12 effectiveStartDate:(id)a13 statusCoding:(id)a14 effectiveEndDate:(id)a15 issueDate:(id)a16;
+ (id)diagnosticTestReportWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 diagnosticTestCodingCollection:(id)a12 results:(id)a13 effectiveStartDate:(id)a14 statusCoding:(id)a15 effectiveEndDate:(id)a16 issueDate:(id)a17;
+ (id)indexableConceptKeyPaths;

- (void)_setStatus:(id)a0;
- (id)init;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void)_setDiagnosticTest:(id)a0;
- (void)_setDiagnosticTestCodingCollection:(id)a0;
- (void)_setEffectiveEndDate:(id)a0;
- (void)_setEffectiveStartDate:(id)a0;
- (void)_setIssueDate:(id)a0;
- (void)_setResults:(id)a0;
- (void)_setStatusCoding:(id)a0;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (id)medicalRecordCodings;
- (id)statusCodingCollection;

@end
