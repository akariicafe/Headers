@class NSString, _PSSuggestionFromTextPredictor;

@interface _PSSuggestionFromTextPredictorDelegateWrapper : NSObject <ATXProactiveSuggestionRealTimeProviderDelegateProtocol, _PSFaceTimeZKWWrapperProtocol> {
    long long _delegateType;
    _PSSuggestionFromTextPredictor *_textPredictor;
    double _startSecondsFromQuery;
    double _endSecondsFromQuery;
    float _priorScoreThreshold;
    BOOL _isEnabled;
    long long _defaultConfidenceCategory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pingWithCompletion:(id /* block */)a0;
- (id)initWithTextPredictor:(id)a0 remindersConfig:(id)a1;
- (void)updateWithCalendarConfig:(id)a0;
- (id)getSuggestionsWithPredictionContext:(id)a0;
- (id)initWithTextPredictor:(id)a0 calendarConfig:(id)a1;
- (void)suggestionsForInteractionSuggestionRequest:(id)a0 clientModelId:(id)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithDelegateType:(long long)a0 textPredictor:(id)a1 startSecondsFromQuery:(double)a2 endSecondsFromQuery:(double)a3 priorScoreThreshold:(float)a4 isEnabled:(BOOL)a5 defaultConfidenceCategory:(long long)a6;
- (void)updateWithRemindersConfig:(id)a0;

@end
