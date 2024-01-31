@class NSString, NSArray;

@interface TIFeedbackController : NSObject

@property (readonly, nonatomic) NSString *feedbackFeatureEnabledKey;
@property (readonly, nonatomic) NSString *stateKey;
@property (readonly, nonatomic) NSString *initialInputModesKey;
@property (readonly, nonatomic) NSString *initialTimestampKey;
@property (readonly, nonatomic) NSString *initialPreferenceValueKey;
@property (readonly, nonatomic) NSString *finalInputModesKey;
@property (readonly, nonatomic) NSString *finalTimestampKey;
@property (readonly, nonatomic) NSString *finalPreferenceValueKey;
@property (readonly, nonatomic) NSString *surveyOutcomeKey;
@property (readonly, nonatomic) NSString *countsRetainedKey;
@property (readonly, nonatomic) NSString *initiationEventTimestampKey;
@property (readonly, nonatomic) NSString *completionEventTimestampKey;
@property (readonly, nonatomic) NSString *preferenceKey;
@property (readonly, nonatomic) NSArray *supportedLanguages;

- (long long)currentState;
- (void).cxx_destruct;
- (BOOL)isEligibleDevice;
- (id)finalInputModes;
- (id)completionEventTimestamp;
- (id)computeRandomizedTimeIntervalFromTimestamp:(id)a0;
- (BOOL)countsRetained;
- (id)currentInputModes;
- (BOOL)currentPreferenceValue;
- (void)dispatchScheduledEventsWithDelegate:(id)a0;
- (void)dispatchScheduledInitiationAndCompletionEventsImmediatelyWithDelegate:(id)a0;
- (void)dispatchScheduledInitiationAndTerminationEventsImmediatelyWithDelegate:(id)a0;
- (BOOL)feedbackFeatureEnabled;
- (BOOL)finalPreferenceValue;
- (id)finalTimestamp;
- (void)handleFeedbackActionsWithDelegate:(id)a0;
- (id)initWithPreferenceKey:(id)a0 supportedLanguages:(id)a1;
- (id)initialInputModes;
- (BOOL)initialPreferenceValue;
- (id)initialTimestamp;
- (id)initiationEventTimestamp;
- (void)scheduleCompletionEvent;
- (void)scheduleInitiationEvent;
- (void)setCompletionState;
- (void)setInitiationState;
- (void)setTerminationStateWithValue:(long long)a0;
- (long long)surveyOutcome;
- (void)updateStateWithValue:(long long)a0;
- (BOOL)wasSurveySubmitted;

@end
