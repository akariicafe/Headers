@class MKAutocompleteAnalyticsState, NSObject;
@protocol OS_dispatch_queue;

@interface MKAutocompleteAnalyticsProvider : NSObject <MKAutocompleteAnalyticsState, MKAutocompleteAnalyticsProvider>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain, nonatomic) MKAutocompleteAnalyticsState *currentState;

- (id)init;
- (void).cxx_destruct;
- (id)captureNewMetrics;
- (void)updateStateWithQuery:(id)a0 queryTokens:(id)a1 visibleSuggestionEntries:(id)a2;

@end
