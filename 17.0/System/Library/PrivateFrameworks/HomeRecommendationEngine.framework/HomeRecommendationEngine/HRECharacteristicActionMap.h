@class NSMutableDictionary;

@interface HRECharacteristicActionMap : HREActionMap

@property (retain, nonatomic) NSMutableDictionary *characteristicTypeValues;

+ (id)characteristicActionMap:(id)a0;
+ (id)conditonalCharacteristicActionMap:(id)a0 condition:(id)a1;
+ (id)emptyMap;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)flattenedMapEvaluatedForObject:(id)a0;
- (id)initWithMap:(id)a0 condition:(id)a1;
- (id)mergeWithActionMaps:(id)a0;

@end
