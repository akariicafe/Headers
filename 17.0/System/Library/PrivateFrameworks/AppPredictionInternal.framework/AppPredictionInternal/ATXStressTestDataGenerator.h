@interface ATXStressTestDataGenerator : NSObject

- (id)_startCallIntentWithRecipientName:(id)a0;
- (void)_updateActionFeedbackWithConfirmsAndRejects;
- (void)_updateDonationPipelineWithIntentsAndNSUAs;
- (id)_visitWebpageNSUAForURLString:(id)a0;
- (void)clearAllDataForStressCycler;
- (void)clearAllDataForStressCyclerWithCompletion:(id /* block */)a0;
- (void)clearDataForBehavioralActionPredictions;
- (void)enumerateSampleIntentAndUserActivityATXActionsWithBlock:(id /* block */)a0;
- (void)enumerateSampleIntentAndUserActivityEventsWithBlock:(id /* block */)a0;
- (void)generateDataForBehavioralActionPredictions;
- (void)seedAllDataForStressCycler;
- (void)setupForStressCyclerWithCompletion:(id /* block */)a0;

@end
