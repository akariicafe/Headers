@class ATXAnchor, ATXAnchorModelHyperParameters, NSDate, ATXDuetEvent;
@protocol ATXPETEventTracker2Protocol, ATXAnchorModelDataStoreWrapperProtocol;

@interface ATXAnchorModelAnchorEventHandler : NSObject {
    id<ATXAnchorModelDataStoreWrapperProtocol> _dataStoreWrapper;
    id<ATXPETEventTracker2Protocol> _tracker;
    NSDate *_baseDate;
    ATXAnchorModelHyperParameters *_hyperParameters;
}

@property (readonly, nonatomic) ATXAnchor *anchor;
@property (readonly, nonatomic) ATXDuetEvent *anchorEvent;

- (void).cxx_destruct;
- (id)dateIntervalFromTrainingResult:(id)a0;
- (void)_logPhaseFilteredMetricFromTrainingResults:(id)a0 anchorModelPredictions:(id)a1;
- (id)anchorModelPredictionFromTrainingResult:(id)a0 classificationResult:(id)a1;
- (id)initWithAnchor:(id)a0 anchorEvent:(id)a1;
- (id)initWithAnchor:(id)a0 anchorEvent:(id)a1 dataStoreWrapper:(id)a2 hyperParameters:(id)a3 tracker:(id)a4;
- (id)predictionForCandidateFromTrainingResult:(id)a0;
- (BOOL)predictionIsHighConfidence:(id)a0;
- (BOOL)predictionIsMediumConfidence:(id)a0;
- (double)predictionScoreFromTrainingResult:(id)a0;
- (id)predictionsForAnchorEvent;

@end
