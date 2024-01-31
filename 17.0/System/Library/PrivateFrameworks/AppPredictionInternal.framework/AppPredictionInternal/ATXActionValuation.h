@class ATXIntentMetadataCache;

@interface ATXActionValuation : NSObject {
    ATXIntentMetadataCache *_intentCache;
}

- (id)init;
- (void)scoreActions:(id)a0 scoreLogger:(id)a1 consumerSubType:(unsigned char)a2;
- (id)initWithIntentCache:(id)a0;
- (id)getCurrentLocation;
- (void)setFeatureValuesAndFilterPredictableActions:(id)a0 actionStatistics:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldPredictCreateEventIntent:(id)a0;
- (BOOL)shouldPredictRequestRideIntent:(id)a0;
- (BOOL)shouldPredictIntent:(id)a0;
- (BOOL)shouldPredictSendMessageIntent:(id)a0;

@end
