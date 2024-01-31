@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AFOpportuneSpeakingModuleDataCollection : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_speakableMap;
}

+ (id)sharedCollector;

- (id)init;
- (void).cxx_destruct;
- (void)_deleteSpeakablesOlderThan:(id)a0;
- (void)logFeedbackOfType:(long long)a0 forSpeakableId:(id)a1 withModelId:(id)a2;
- (void)logInteractionEvents:(id)a0 forSpeakableId:(id)a1;
- (void)logRecommendedAction:(id)a0 forSpeakableId:(id)a1 withModelId:(id)a2;
- (void)logSpeakable:(id)a0 forContact:(id)a1 withModelId:(id)a2 withFeatures:(id)a3 withScore:(float)a4;

@end
