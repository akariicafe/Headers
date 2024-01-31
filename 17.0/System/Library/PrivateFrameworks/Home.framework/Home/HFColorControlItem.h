@protocol HFColorProfile;

@interface HFColorControlItem : HFControlItem

@property (readonly, nonatomic) BOOL supportsRGBColor;
@property (readonly, nonatomic) BOOL supportsNaturalLighting;
@property (nonatomic) BOOL naturalLightingEnabled;
@property (readonly, nonatomic) id<HFColorProfile> colorProfile;

+ (Class)valueClass;
+ (id)na_identity;
+ (id)colorCharacteristicTypes;

- (id)_subclass_updateWithOptions:(id)a0;
- (id)characteristicValuesForValue:(id)a0;
- (id)initWithValueSource:(id)a0 displayResults:(id)a1;
- (id)normalizedValueForValue:(id)a0;
- (id)writeValue:(id)a0;
- (void)_logForNaturalLightUserStudy:(id)a0;
- (BOOL)canCopyWithCharacteristicOptions:(id)a0;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (BOOL)supportsItemRepresentingServices:(id)a0;
- (id)valueForCharacteristicType:(id)a0 inBatchReadResponse:(id)a1;
- (id)valueForCharacteristicValues:(id)a0;

@end
