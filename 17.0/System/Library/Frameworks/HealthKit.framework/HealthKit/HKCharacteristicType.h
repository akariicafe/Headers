@interface HKCharacteristicType : HKObjectType

- (id)initWithIdentifier:(id)a0;
- (id)_relatedSampleForInsertionWithCharacteristicValue:(id)a0;
- (id)_relatedCategoryType;
- (id)_canoncialUnit;
- (id)_relatedQuantityType;
- (BOOL)_validateCharacteristic:(id)a0 error:(id *)a1;

@end
