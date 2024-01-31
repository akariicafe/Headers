@interface ATXAppBlendingUpdater : NSObject

+ (void)updateBlendingLayerForConsumerSubType:(unsigned char)a0;
+ (id)clientModelIdForConsumerSubType:(unsigned char)a0;
+ (id)clientModelForAppPredictionsForClientModelId:(id)a0;
+ (id)clientModelSpecForAppPredictionsForClientModelId:(id)a0;

@end
