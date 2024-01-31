@class ATXScoredPrediction, ATXSlotSet;

@interface ATXGuardedActionPredictionContainerData : NSObject {
    ATXScoredPrediction *_scoredAction;
    ATXSlotSet *_slotSet;
    float _score;
}

- (void).cxx_destruct;
- (id)initWithScoredAction:(id)a0 slotSet:(id)a1 score:(float)a2;

@end
