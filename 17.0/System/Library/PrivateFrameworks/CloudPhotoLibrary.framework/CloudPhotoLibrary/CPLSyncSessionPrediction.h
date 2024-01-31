@class NSDictionary;

@interface CPLSyncSessionPrediction : NSObject {
    NSDictionary *_predictions;
}

- (id)init;
- (id)redactedDescription;
- (void)updateXPCActivityCriteria:(id)a0;
- (id)initWithPredictedValuesAndTypes:(id)a0;
- (id)description;
- (id)updatedPredictionWithValuesAndTypes:(id)a0;
- (BOOL)matchesXPCActivity:(id)a0;
- (void).cxx_destruct;
- (BOOL)matchesXPCActivityCriteria:(id)a0;
- (BOOL)_oldPredictionWithKey:(const char *)a0 inCriteria:(id)a1 matchesPredictionWithKey:(id)a2;
- (id)predictedValueForType:(id)a0;
- (void)updateXPCActivity:(id)a0;

@end
