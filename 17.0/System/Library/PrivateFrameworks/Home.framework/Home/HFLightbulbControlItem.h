@interface HFLightbulbControlItem : HFIncrementalStateControlItem

+ (id)optionsForPrimaryStateControlItem:(id)a0 incrementalCharacteristicType:(id)a1;
+ (id)readOnlyCharacteristicTypes;

- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)supportsRGBColor;
- (id)writeValue:(id)a0;
- (id)_tintColorForNaturalLightFromResults:(id)a0;
- (id)_tintColorFromResults:(id)a0;
- (id)readValueAndPopulateStandardResults;

@end
