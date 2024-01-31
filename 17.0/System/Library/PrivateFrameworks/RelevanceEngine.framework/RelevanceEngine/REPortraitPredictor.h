@class NSDictionary, PPNamedEntityStore, NSMutableDictionary;

@interface REPortraitPredictor : REPredictor <REPortraitPredictorProperties> {
    PPNamedEntityStore *_namedEntityStore;
    NSMutableDictionary *_namedEntityScores;
}

@property (readonly, nonatomic) NSDictionary *namedEntityScores;

+ (double)updateInterval;

- (void)dealloc;
- (id)_init;
- (void)update;
- (void).cxx_destruct;
- (void)_loadStoreIfNeeded;
- (float)userAffinityToContent:(id)a0;

@end
