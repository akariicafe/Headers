@class NSMutableDictionary;

@interface AVTMutableEditingModelColors : AVTEditingModelColors

@property (readonly, nonatomic) NSMutableDictionary *mutableStorage;

- (void).cxx_destruct;
- (id)initWithStorage:(id)a0 variationStore:(id)a1;
- (id)initWithVariationStore:(id)a0;
- (void)setColor:(id)a0 forSettingKind:(struct { long long x0; long long x1; })a1 identifier:(id)a2;

@end
