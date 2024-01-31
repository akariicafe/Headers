@class SFCache, NSMutableDictionary;

@interface NWPVarBandit : NWPVar

@property (retain, nonatomic) SFCache *uuidCache;
@property (retain, nonatomic) NSMutableDictionary *lastSampleRewards;

- (BOOL)setInitialValue:(id)a0;
- (void).cxx_destruct;
- (void)_defaultModelInit;
- (id)_epsilongreedy_predictValueGivenContext:(id)a0;
- (id)_ucb_predictValueGivenContext:(id)a0;
- (id)initInNumRangeFrom:(id)a0 to:(id)a1 stride:(float)a2 withLabel:(id)a3;
- (id)initInValueSpace:(id)a0 withLabel:(id)a1;
- (id)predictValueGivenContext:(id)a0 generationId:(id *)a1;
- (BOOL)selectModel:(unsigned long long)a0;
- (BOOL)setReward:(float)a0 onValue:(id)a1 forPredictionGenerationId:(id)a2;

@end
