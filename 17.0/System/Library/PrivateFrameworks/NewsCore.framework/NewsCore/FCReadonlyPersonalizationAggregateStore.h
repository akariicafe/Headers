@class FCOnce, NSMutableDictionary, NSDictionary, NSString;
@protocol FCPersonalizationDataGeneratorType, FCDerivedPersonalizationData;

@interface FCReadonlyPersonalizationAggregateStore : NSObject <FCReadonlyPersonalizationAggregateStore>

@property (retain, nonatomic) FCOnce *prepareOnce;
@property (retain, nonatomic) id<FCPersonalizationDataGeneratorType> generator;
@property (retain, nonatomic) id<FCDerivedPersonalizationData> derivedPersonalizationData;
@property (nonatomic) unsigned long long scoringType;
@property (nonatomic) double decayRate;
@property (retain, nonatomic) NSMutableDictionary *overrideAggregatesByFeatureKey;
@property (readonly, nonatomic) NSDictionary *allAggregates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)modifyLocalAggregatesForFeatureKeys:(id)a0 withAction:(unsigned long long)a1 actionCount:(unsigned long long)a2 defaultClicks:(double)a3 defaultImpressions:(double)a4 impressionBias:(double)a5 configurableValues:(id)a6;
- (id)init;
- (id)baselineAggregateWithConfigurableValues:(id)a0;
- (void)prepareAggregatesForUseWithCompletionHandler:(id /* block */)a0;
- (void)enumerateAggregatesUsingBlock:(id /* block */)a0;
- (id)aggregateForFeatureKey:(id)a0;
- (void)processTodayPersonalizationUpdates:(id)a0 withConfigurableValues:(id)a1;
- (void).cxx_destruct;
- (id)aggregatesForFeatures:(id)a0;
- (id)initWithGenerator:(id)a0;
- (void)updateFeatures:(id)a0 withAction:(unsigned long long)a1 displayRank:(long long)a2 groupRank:(long long)a3 individually:(BOOL)a4 configurableValues:(id)a5;

@end
