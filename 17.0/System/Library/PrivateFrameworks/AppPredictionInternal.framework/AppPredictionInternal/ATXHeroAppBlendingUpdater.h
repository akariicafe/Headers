@interface ATXHeroAppBlendingUpdater : NSObject

+ (id)clientModelForHeroAppPredictions;
+ (id)clientModelSpecForHeroAppPredictions;
+ (void)updateBlendingLayerWithHeroAppPredictions:(id)a0 currentLocation:(id)a1;
+ (id)nonBlacklistedPredictionsFrom:(id)a0;

@end
