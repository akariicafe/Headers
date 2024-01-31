@class ATXLocationManager, NSDateInterval;

@interface ATXContextWeatherSuggestionProducer : NSObject {
    NSDateInterval *_validDateInterval;
    double _score;
    long long _reasonCode;
    ATXLocationManager *_locationManager;
}

- (void).cxx_destruct;
- (id)_dummySuggestionWithAction:(id)a0 predictionReasons:(unsigned long long)a1 score:(double)a2;
- (id)_suggestionWithAction:(id)a0 predictionReasons:(unsigned long long)a1 score:(double)a2;
- (id)dummyWeatherSuggestion;
- (id)initWithValidDateInterval:(id)a0 reasonCode:(long long)a1 score:(double)a2;
- (id)weatherSuggestionWithRefreshTriggers:(id)a0;

@end
