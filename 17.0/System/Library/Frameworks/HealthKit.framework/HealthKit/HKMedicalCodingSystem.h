@class NSString, NSArray;

@interface HKMedicalCodingSystem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *OID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic) BOOL hasDisplayStrings;

+ (id)appleOntologySystem;
+ (id)FHIRMedicationDispenseStatus;
+ (id)FHIRConditionClinicalStatus;
+ (id)appleHealthDataTypeSystem;
+ (id)FHIRCarePlanStatus;
+ (id)FHIRConditionVerificationStatus;
+ (id)NDCSystem;
+ (id)ICD10System;
+ (id)RxNormCodeSystem;
+ (id)FHIRAllergyIntoleranceCriticality;
+ (id)FHIRCoverageStatus;
+ (id)externalCodeSystems;
+ (id)FHIRCoverageClassification;
+ (id)FHIRDocumentReferenceClinicalNoteStatus;
+ (id)FHIRAllergyIntoleranceVerificationStatus;
+ (id)FHIRDocumentReferenceClinicalNoteCategorySystem;
+ (id)FHIRCoverageType;
+ (id)textSystem;
+ (id)FHIRAllergyIntoleranceType;
+ (id)FHIRDeviceStatus;
+ (id)FHIRDocumentReferenceClinicalNoteDocStatus;
+ (id)CVXSystem;
+ (id)systemWithSystemDefinition:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; BOOL x5; })a0;
+ (id)FHIRMedicationDispenseStatusR4;
+ (id)FHIRMedicationRequestStatus;
+ (id)adHocConceptSystem;
+ (id)FHIRProcedureStatus;
+ (id)UCUMSystem;
+ (id)FHIRObservationStatus;
+ (id)FHIRMedicationAdminStatus;
+ (id)FHIRMedicationOrderStatus;
+ (id)LOINCCodeSystem;
+ (id)FHIRImmunizationStatus;
+ (id)FHIREventStatus;
+ (id)FHIRDiagnosticReportStatus;
+ (id)FHIRAllergyIntoleranceSeverity;
+ (id)FHIRAllergyIntoleranceCategory;
+ (id)FHIRQuantityComparatorSystem;
+ (id)argonautHL7System;
+ (id)FHIRGoalStatus;
+ (id)ICD9System;
+ (id)FHIRMedicationStatementStatus;
+ (id)unknownSystem;
+ (id)FHIRAllergyIntoleranceStatus;
+ (id)SNOMEDCodeSystem;
+ (id)codeSystemWithIdentifier:(id)a0;
+ (id)FHIRAllergyIntoleranceClinicalStatus;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCustomIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 OID:(id)a2 type:(unsigned long long)a3 synonyms:(id)a4 hasDisplayStrings:(BOOL)a5;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)ontology_hasCodingSystemAttributeIdentifier;

@end
