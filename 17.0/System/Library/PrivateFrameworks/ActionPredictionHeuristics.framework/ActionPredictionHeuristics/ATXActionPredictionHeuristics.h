@interface ATXActionPredictionHeuristics : NSObject

+ (id)addCacheExpirerNotification:(id /* block */)a0;
+ (id)nextCacheExpirationDate;
+ (id)actionsWithLocationManager:(id)a0;

@end
