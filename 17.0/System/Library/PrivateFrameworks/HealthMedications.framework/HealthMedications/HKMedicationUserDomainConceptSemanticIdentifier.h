@class NSUUID, HKMedicalCoding;

@interface HKMedicationUserDomainConceptSemanticIdentifier : HKUserDomainConceptSemanticIdentifier

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) HKMedicalCoding *medicalCoding;

+ (id)semanticIdentifierWithComponents:(id)a0;

- (id)stringValue;
- (id)init;
- (id)initWithTypeIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 medicalCoding:(id)a1;

@end
