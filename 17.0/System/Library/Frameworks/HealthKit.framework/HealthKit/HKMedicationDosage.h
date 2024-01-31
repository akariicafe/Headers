@class HKConcept, NSString, HKMedicalCoding, HKMedicalDateInterval;

@interface HKMedicationDosage : NSObject <NSSecureCoding, NSCopying, HKCodedObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *instruction;
@property (readonly, copy, nonatomic) HKMedicalDateInterval *timingPeriod;
@property (readonly, copy, nonatomic) HKConcept *site;
@property (readonly, copy, nonatomic) HKMedicalCoding *siteCoding;
@property (readonly, copy, nonatomic) HKConcept *route;
@property (readonly, copy, nonatomic) HKMedicalCoding *routeCoding;
@property (readonly, copy, nonatomic) HKConcept *method;
@property (readonly, copy, nonatomic) HKMedicalCoding *methodCoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dosageWithInstruction:(id)a0 timingPeriod:(id)a1;
+ (id)dosageWithInstruction:(id)a0 timingPeriod:(id)a1 siteCoding:(id)a2 routeCoding:(id)a3 methodCoding:(id)a4;
+ (id)indexableKeyPathsWithPrefix:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setSiteCoding:(id)a0;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (id)_methodCodingCollection;
- (id)_routeCodingCollection;
- (void)_setMethodCoding:(id)a0;
- (void)_setRouteCoding:(id)a0;
- (id)_siteCodingCollection;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (id)initWithInstruction:(id)a0 timingPeriod:(id)a1 siteCoding:(id)a2 routeCoding:(id)a3 methodCoding:(id)a4;

@end
