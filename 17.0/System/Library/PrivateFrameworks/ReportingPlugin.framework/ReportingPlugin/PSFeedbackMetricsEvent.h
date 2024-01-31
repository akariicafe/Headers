@class _PSFeedbackMetricsEventInternal;

@interface PSFeedbackMetricsEvent : NSObject

@property (readonly) _PSFeedbackMetricsEventInternal *underlyingObject;

- (void).cxx_destruct;
- (id)initWithId:(id)a0 type:(long long)a1 engagedSuggestionId:(id)a2 airdropOptionPresent:(BOOL)a3 visiblePeopleSuggestionCount:(unsigned char)a4 visibleAppSuggestionCount:(unsigned char)a5 inferenceSource:(long long)a6 trialExperimentId:(id)a7 trialTreatmentId:(id)a8 trialDeploymentId:(id)a9 peopleSuggestionTimeoutOccurred:(BOOL)a10;
- (id)initWithId:(id)a0 type:(long long)a1 engagedSuggestionId:(id)a2 airdropOptionPresent:(BOOL)a3 visiblePeopleSuggestionCount:(unsigned char)a4 visibleAppSuggestionCount:(unsigned char)a5 inferenceSource:(long long)a6 trialExperimentId:(id)a7 trialTreatmentId:(id)a8 trialDeploymentId:(id)a9;

@end
