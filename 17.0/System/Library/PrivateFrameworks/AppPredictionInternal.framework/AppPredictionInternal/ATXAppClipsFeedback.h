@class _ATXAppLaunchCategoricalHistogram;

@interface ATXAppClipsFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogram;
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogramNoDecay;
}

- (id)init;
- (double)_confirmsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (double)_overallAppClipsengagement;
- (double)_engagementForAppClipWithHeroAppPrediction:(id)a0;
- (double)_rejectsForAppClipWithHeroAppPrediction:(id)a0;
- (double)_overallConfirms;
- (BOOL)shouldShowAppClipWithHeroAppPrediction:(id)a0;
- (void)addRejectForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (double)_overallConfirmsNoDecay;
- (double)_rejectsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (BOOL)shouldShowAppClips;
- (id)initWithAppClipsHistogram:(id)a0 appClipsHistogramNoDecay:(id)a1;
- (double)_confirmsForAppClipWithHeroAppPrediction:(id)a0;
- (double)_overallRejectsNoDecay;
- (void).cxx_destruct;
- (double)_engagementForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)_overallRejects;
- (BOOL)_shouldHideAppClipForLowEngagementNoDecay:(id)a0;

@end
