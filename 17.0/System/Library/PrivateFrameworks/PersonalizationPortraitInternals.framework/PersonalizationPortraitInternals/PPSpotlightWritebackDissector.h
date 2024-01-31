@class PPLocalNamedEntityStore, PPUniversalSearchSpotlightIndexScorer;

@interface PPSpotlightWritebackDissector : NSObject {
    PPUniversalSearchSpotlightIndexScorer *_scorer;
    PPLocalNamedEntityStore *_namedEntityStore;
    BOOL _significanceCheckEnabled;
}

+ (id)sharedCache;
+ (BOOL)bundleIdIsAllowed:(id)a0;

- (id)init;
- (BOOL)consumeContentFromBundleId:(id)a0 extractions:(id)a1 spotlightIdentifier:(id)a2 fileProtectionType:(id)a3 shouldContinueBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithNamedEntityStore:(id)a0 significanceCheckEnabled:(BOOL)a1;
- (void)_getNamedEntityPortraitScores:(id)a0 priorityQueue:(id)a1;

@end
