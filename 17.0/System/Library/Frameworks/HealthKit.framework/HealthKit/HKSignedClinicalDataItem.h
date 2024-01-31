@class HKConcept, NSUUID, NSString, HKMedicalCodingCollection, NSDate;

@interface HKSignedClinicalDataItem : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {
    HKConcept *_primaryConcept;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKConcept *primaryConcept;
@property (readonly, copy, nonatomic) HKMedicalCodingCollection *primaryConceptCodingCollection;
@property (readonly, copy, nonatomic) NSDate *relevantDate;
@property (readonly, copy, nonatomic) NSUUID *medicalRecordSampleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)indexableKeyPathsWithPrefix:(id)a0;
+ (id)itemWithPrimaryConceptCodingCollection:(id)a0 relevantDate:(id)a1 medicalRecordSampleID:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (id)initWithPrimaryConceptCodingCollection:(id)a0 relevantDate:(id)a1 medicalRecordSampleID:(id)a2;

@end
