@class ATXDigestOnboardingSuggestionLoggingBiomeStream;

@interface ATXDigestOnboardingSuggestionLogging : NSObject {
    ATXDigestOnboardingSuggestionLoggingBiomeStream *_digestOnboardingSuggestionLoggingBiomeStream;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDigestOnboardingSuggestionLoggingBiomeStream:(id)a0;
- (void)logDigestOnboardingSuggestionWithOutcome:(int)a0 timeToResolution:(double)a1;

@end
