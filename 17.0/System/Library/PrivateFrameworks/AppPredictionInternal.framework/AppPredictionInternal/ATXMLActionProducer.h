@class NSString;

@interface ATXMLActionProducer : NSObject {
    NSString *_cacheBasePath;
}

+ (id)consumerSubTypesToUpdate;
+ (id)predictionChunksForActionResults:(id)a0;

- (id)init;
- (void)updateBlendingLayerForAllConsumerSubTypes;
- (BOOL)writeCacheIfNotExistsForConsumerSubType:(unsigned char)a0;
- (id)consumerSubTypesToInvalidateForTTL:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (id)_getActionsFromCacheForConsumerSubType:(unsigned char)a0 cacheFileData:(id)a1;
- (void)updateBlendingLayerForConsumerSubType:(unsigned char)a0;
- (void)readCacheAndSendFilteredResultsToBlendingForConsumerSubType:(unsigned char)a0;
- (void)updateBlendingLayerForLockscreen;
- (void)updateBlendingLayerForHomeScreen;
- (id)produceActions;
- (void)invalidateCacheForConsumerSubTypes:(id)a0 featureCache:(id)a1;
- (void).cxx_destruct;
- (id)lockscreenActionsFromPredictions:(id)a0;
- (void)invalidateCacheForConsumerSubType:(unsigned char)a0 actionPredictionCandidates:(id)a1 remainingPredictionItems:(struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; } x2; })a2;
- (id)_cachePathForConsumerSubtype:(unsigned char)a0;
- (BOOL)_writeIntermediateCacheForConsumerSubType:(unsigned char)a0 actionPredictionCandidates:(id)a1 remainingPredictionItems:(void *)a2;
- (void)updateBlendingLayerForSpotlight;

@end
