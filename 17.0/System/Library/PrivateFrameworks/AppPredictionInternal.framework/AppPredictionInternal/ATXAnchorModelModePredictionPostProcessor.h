@class NSArray, ATXAnchorModelPrediction, BMUserFocusComputedModeStream;

@interface ATXAnchorModelModePredictionPostProcessor : NSObject {
    ATXAnchorModelPrediction *_anchorModelPrediction;
    BMUserFocusComputedModeStream *_modeStream;
}

@property (retain, nonatomic) NSArray *serializedTriggers;

- (void).cxx_destruct;
- (id)_triggerForAnchorType;
- (id)initWithAnchorModelPrediction:(id)a0;
- (BOOL)shouldPredictAnchorModelModePrediction;

@end
