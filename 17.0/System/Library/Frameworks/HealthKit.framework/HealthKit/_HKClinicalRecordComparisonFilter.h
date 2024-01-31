@interface _HKClinicalRecordComparisonFilter : _HKComparisonFilter

+ (BOOL)isSupportedKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;

- (BOOL)acceptsDataObject:(id)a0;

@end
