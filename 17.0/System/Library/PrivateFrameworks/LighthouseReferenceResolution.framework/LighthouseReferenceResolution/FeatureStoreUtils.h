@interface FeatureStoreUtils : NSObject

+ (id)extractJSONStringFromFSFFeature:(id)a0;
+ (id)getEventsFromStreamName:(id)a0;
+ (id)getEventsFromStreamName:(id)a0 starting:(id)a1 ending:(id)a2;
+ (BOOL)insertCurareEvaluationToFeatureStore:(id)a0 streamId:(id)a1 interactionId:(id)a2;
+ (BOOL)insertDictionaryToFeatureStore:(id)a0 streamId:(id)a1 interactionId:(id)a2;

- (id)init;

@end
