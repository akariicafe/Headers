@class PHASESpatialMixerDefinition, NSMutableArray, PHASENumberMetaParameterDefinition;

@interface PHASEBlendNodeDefinition : PHASESoundEventNodeDefinition

@property (retain, nonatomic) NSMutableArray *ranges;
@property (readonly, nonatomic) PHASENumberMetaParameterDefinition *blendParameterDefinition;
@property (readonly, nonatomic) PHASESpatialMixerDefinition *spatialMixerDefinitionForDistance;

+ (id)new;

- (id)children;
- (id)init;
- (void).cxx_destruct;
- (void)addRangeForInputValuesAbove:(double)a0 fullGainAtValue:(double)a1 fadeCurveType:(long long)a2 subTree:(id)a3;
- (void)addRangeForInputValuesAbove:(double)a0 fullGainAtValue:(double)a1 fadeCurveType:(long long)a2 subtree:(id)a3;
- (void)addRangeForInputValuesBelow:(double)a0 fullGainAtValue:(double)a1 fadeCurveType:(long long)a2 subTree:(id)a3;
- (void)addRangeForInputValuesBelow:(double)a0 fullGainAtValue:(double)a1 fadeCurveType:(long long)a2 subtree:(id)a3;
- (void)addRangeForInputValuesBetween:(double)a0 highValue:(double)a1 fullGainAtLowValue:(double)a2 fullGainAtHighValue:(double)a3 lowFadeCurveType:(long long)a4 highFadeCurveType:(long long)a5 subTree:(id)a6;
- (void)addRangeForInputValuesBetween:(double)a0 highValue:(double)a1 fullGainAtLowValue:(double)a2 fullGainAtHighValue:(double)a3 lowFadeCurveType:(long long)a4 highFadeCurveType:(long long)a5 subtree:(id)a6;
- (void)addRangeWithEnvelope:(id)a0 subTree:(id)a1;
- (void)addRangeWithEnvelope:(id)a0 subtree:(id)a1;
- (id)initDistanceBlendWithSpatialMixerDefinition:(id)a0;
- (id)initDistanceBlendWithSpatialMixerDefinition:(id)a0 identifier:(id)a1;
- (id)initDistanceBlendWithSpatialMixerDefinition:(id)a0 uid:(id)a1;
- (id)initWithBlendMetaParameterDefinition:(id)a0;
- (id)initWithBlendMetaParameterDefinition:(id)a0 identifier:(id)a1;
- (id)initWithBlendMetaParameterDefinition:(id)a0 uid:(id)a1;

@end
