@class HDOriginalFHIRResourceObject, NSString, HDFHIRResourceObject, HKMedicalRecord, NSMutableDictionary, NSDictionary, NSNumber, HDHealthRecordClinicalType;

@interface HDHealthRecordClinicalItem : NSObject {
    NSMutableDictionary *_medicalRecordProperties;
}

@property (readonly, copy, nonatomic) NSDictionary *originalAttributes;
@property (retain, nonatomic) HKMedicalRecord *extractedMedicalRecord;
@property (copy, nonatomic) NSDictionary *medicalRecordMetadata;
@property (copy, nonatomic) HDHealthRecordClinicalType *clinicalType;
@property (readonly, nonatomic) HDOriginalFHIRResourceObject *representedResource;
@property (retain, nonatomic) HDFHIRResourceObject *APIResource;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) Class medicalRecordClass;
@property (readonly, copy, nonatomic) NSNumber *rulesVersion;
@property (readonly, copy, nonatomic) NSString *country;

- (id)valueForUndefinedKey:(id)a0;
- (void).cxx_destruct;
- (id)candidateValueForKeyPath:(id)a0 error:(id *)a1;
- (id)_medicalRecordPropertyArrayFromKey:(id)a0 expectedClass:(Class)a1 error:(id *)a2;
- (id)_medicalRecordPropertyFromKey:(id)a0 expectedClass:(Class)a1 error:(id *)a2;
- (void)assignExtractedMedicalRecord:(id)a0;
- (void)assignMedicalRecordMetadata:(id)a0;
- (id)correspondingClinicalTypeWithError:(id *)a0;
- (id)initWithRepresentedResource:(id)a0 clinicalType:(id)a1 rulesVersion:(id)a2;
- (id)medicalRecordPropertyValueForKey:(id)a0 expectedClass:(Class)a1 isArray:(BOOL)a2 error:(id *)a3;
- (void)setMedicalRecordPropertyValue:(id)a0 forKey:(id)a1;

@end
