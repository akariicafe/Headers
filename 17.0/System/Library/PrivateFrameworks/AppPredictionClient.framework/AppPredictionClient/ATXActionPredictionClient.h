@class NSString, ATXCacheReader, NSXPCConnection, ATXEngagementRecordManager, NSObject;
@protocol OS_dispatch_queue;

@interface ATXActionPredictionClient : NSObject <ATXActionPredictionInterface> {
    NSXPCConnection *_xpcConnection;
    NSString *_cacheBasePath;
    ATXCacheReader *_cacheReader;
    ATXEngagementRecordManager *_engagementRecordManager;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (id)init;
- (void)dealloc;
- (id)initWithCacheBasePath:(id)a0;
- (void)removeActionPredictionNotificationsMatchingSuggestion:(id)a0 reply:(id /* block */)a1;
- (void)getActionPredictionsForContext:(id)a0 includeBundleIds:(id)a1 excludeBundleIds:(id)a2 includeActionTypes:(id)a3 excludeActionTypes:(id)a4 limit:(unsigned long long)a5 reply:(id /* block */)a6;
- (id)_atxActionFromProactiveSuggestion:(id)a0;
- (void).cxx_destruct;
- (id)actionPredictionsForConsumerSubType:(unsigned char)a0 limit:(int)a1;
- (id)atxActionResponseFromBlendingActionPredictionCacheForConsumerSubType:(unsigned char)a0 limit:(int)a1;
- (void)shouldDisplayDailyRoutineForContext:(id)a0 reply:(id /* block */)a1;
- (void)getActionPredictionsForCandidateBundleIdentifiers:(id)a0 candidateActionTypes:(id)a1 consumerType:(unsigned long long)a2 consumerSubType:(unsigned char)a3 limit:(int)a4 reply:(id /* block */)a5;

@end
