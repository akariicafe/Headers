@class NSString;

@interface HFDictionaryValueControlItem : HFControlItem

@property (readonly, copy, nonatomic) NSString *characteristicType;

+ (Class)valueClass;
+ (id)defaultMainTextColorForCharacteristicType:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)characteristicValuesForValue:(id)a0;
- (BOOL)canCopyWithCharacteristicOptions:(id)a0;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (void)getStatus:(out id *)a0 mainTextColor:(out id *)a1 supplementaryDescription:(out id *)a2 withBatchReadResponse:(id)a3;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (id)initWithValueSource:(id)a0 characteristicType:(id)a1 displayResults:(id)a2;
- (id)resultsForBatchReadResponse:(id)a0;
- (id)valueForCharacteristicValues:(id)a0;

@end
