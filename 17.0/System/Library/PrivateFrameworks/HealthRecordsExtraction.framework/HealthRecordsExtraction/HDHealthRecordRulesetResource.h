@class NSArray, NSString, NSDictionary, HDHealthRecordClinicalType, HDHRConditionRule;

@interface HDHealthRecordRulesetResource : NSObject

@property (readonly, copy, nonatomic) HDHealthRecordClinicalType *clinicalType;
@property (readonly, copy, nonatomic) NSArray *containReferences;
@property (readonly, copy, nonatomic) NSArray *APIReferenceRules;
@property (readonly, copy, nonatomic) NSArray *retrieveReferences;
@property (readonly, copy, nonatomic) NSString *resourceName;
@property (readonly, copy, nonatomic) NSString *resourceType;
@property (readonly, copy, nonatomic) NSDictionary *medicalRecordProperties;
@property (readonly, copy, nonatomic) NSArray *displayNameKeyPaths;
@property (readonly, copy, nonatomic) NSDictionary *redactionRules;
@property (readonly, copy, nonatomic) HDHRConditionRule *condition;

+ (id)resourceFromDictionary:(id)a0 resourceName:(id)a1 error:(id *)a2;

- (BOOL)evaluateWithObject:(id)a0;
- (void).cxx_destruct;

@end
