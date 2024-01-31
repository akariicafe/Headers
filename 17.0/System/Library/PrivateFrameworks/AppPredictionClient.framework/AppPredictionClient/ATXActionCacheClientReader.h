@class NSIndexSet, NSData;

@interface ATXActionCacheClientReader : NSObject {
    NSData *_scoredActionsChunk;
}

@property (readonly, nonatomic) NSIndexSet *lockscreenPredictionIndices;

- (id)init;
- (id)_getLockScreenPredictionIndices:(id)a0;
- (unsigned long long)chunkCount;
- (id)_predicateForInstalledAndNonEngagedPredictions:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithChunks:(id)a0;
- (void).cxx_destruct;
- (id)actionsWithLimit:(long long)a0 shouldFilterRestrictedAppsAndRecentEngagements:(BOOL)a1;
- (id)actionsWithConsumerSubType:(unsigned char)a0 limit:(long long)a1;
- (id)lockscreenPredictionIndicesUpToLimit:(long long)a0;

@end
