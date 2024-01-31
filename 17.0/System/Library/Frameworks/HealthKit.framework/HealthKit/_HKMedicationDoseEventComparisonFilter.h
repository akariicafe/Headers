@interface _HKMedicationDoseEventComparisonFilter : _HKComparisonFilter

+ (BOOL)isSupportedKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (BOOL)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;
+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;

- (BOOL)_acceptsMedicationDoseEventWithHashedMedicationIdentifier:(id)a0;
- (BOOL)_acceptsMedicationDoseEventWithMedicationIdentifier:(id)a0;
- (BOOL)_acceptsMedicationDoseEventWithScheduleItemIdentifier:(id)a0;
- (BOOL)_acceptsMedicationDoseEventWithStatus:(long long)a0;
- (BOOL)acceptsDataObject:(id)a0;

@end
