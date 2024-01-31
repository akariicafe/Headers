@interface _HKVerifiableClinicalRecordComparisonFilter : _HKComparisonFilter

+ (BOOL)isSupportedKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (BOOL)allowsEmptyDataTypesSetForKeyPath:(id)a0;
+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;

- (BOOL)_acceptsSampleWithDate:(id)a0;
- (BOOL)acceptsDataObject:(id)a0;

@end
