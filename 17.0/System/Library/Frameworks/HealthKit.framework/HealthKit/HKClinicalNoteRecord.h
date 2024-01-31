@class NSUUID, NSString, NSArray, NSLocale, HKMedicalCodingCollection, HKConcept, HKMedicalDate, HKMedicalCoding, HKClinicalNoteRecordType;

@interface HKClinicalNoteRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {
    HKMedicalCoding *_statusCoding;
    HKMedicalCodingCollection *_documentTypeCodingCollection;
    HKMedicalDate *_noteCreationDate;
    NSArray *_categoriesCodingCollections;
    HKMedicalDate *_relevantStartDate;
    HKMedicalDate *_relevantEndDate;
    NSArray *_authors;
    HKConcept *_status;
    HKConcept *_documentType;
    NSArray *_categories;
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
@property (readonly, copy) HKClinicalNoteRecordType *clinicalNoteRecordType;
@property (readonly, copy) NSArray *authors;
@property (readonly, copy) NSArray *categories;
@property (readonly, copy) NSArray *categoriesCodingCollections;
@property (readonly, copy) HKConcept *documentType;
@property (readonly, copy) HKMedicalCodingCollection *documentTypeCodingCollection;
@property (readonly, copy) HKMedicalDate *noteCreationDate;
@property (readonly, copy) HKMedicalDate *relevantEndDate;
@property (readonly, copy) HKMedicalDate *relevantStartDate;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;

+ (BOOL)_isConcreteObjectClass;
+ (BOOL)supportsEquivalence;
+ (id)_newClinicalNoteRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 statusCoding:(id)a12 documentTypeCodingCollection:(id)a13 noteCreationDate:(id)a14 categoriesCodingCollections:(id)a15 relevantStartDate:(id)a16 relevantEndDate:(id)a17 authors:(id)a18 config:(id /* block */)a19;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)clinicalNoteRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 country:(id)a9 state:(unsigned long long)a10 statusCoding:(id)a11 documentTypeCodingCollection:(id)a12 noteCreationDate:(id)a13 categoriesCodingCollections:(id)a14 relevantStartDate:(id)a15 relevantEndDate:(id)a16 authors:(id)a17;
+ (id)clinicalNoteRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 statusCoding:(id)a12 documentTypeCodingCollection:(id)a13 noteCreationDate:(id)a14 categoriesCodingCollections:(id)a15 relevantStartDate:(id)a16 relevantEndDate:(id)a17 authors:(id)a18;
+ (id)defaultDisplayString;
+ (id)indexableConceptKeyPaths;

- (void)_setStatus:(id)a0;
- (id)init;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setDocumentType:(id)a0;
- (void)_setCategories:(id)a0;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void)_setAuthors:(id)a0;
- (void)_setCategoriesCodingCollections:(id)a0;
- (void)_setDocumentTypeCodingCollection:(id)a0;
- (void)_setNoteCreationDate:(id)a0;
- (void)_setRelevantEndDate:(id)a0;
- (void)_setRelevantStartDate:(id)a0;
- (void)_setStatusCoding:(id)a0;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (id)medicalRecordCodings;
- (id)statusCodingCollection;

@end
