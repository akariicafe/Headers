@interface HKClinicalType : HKSampleType

+ (id)medicationRecordType;
+ (id)allTypes;
+ (id)procedureRecordType;
+ (id)coverageRecordType;
+ (id)conditionRecordType;
+ (id)allergyRecordType;
+ (id)clinicalNoteRecordType;
+ (id)immunizationRecordType;
+ (id)labResultRecordType;
+ (id)sampleTypesForResourceType:(id)a0 error:(id *)a1;
+ (id)vitalSignRecordType;

- (id)initWithIdentifier:(id)a0;
- (BOOL)isClinicalType;

@end
