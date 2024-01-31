@class NSArray, NSString, EKEventSuggestion, NSObject;
@protocol OS_dispatch_queue, EKAutocompletePendingSearchProtocol;

@interface EKEventSuggestionGenerator : NSObject

@property (retain) id<EKAutocompletePendingSearchProtocol> runningTitleSearch;
@property (retain) NSObject<OS_dispatch_queue> *queryQueue;
@property (retain) NSArray *lastSuggestions;
@property (retain) NSString *lastQueryString;
@property (retain) EKEventSuggestion *lastDefaultSuggestion;

+ (id)eventWithSuggestedTimeFromString:(id)a0 referenceDate:(id)a1 inEventStore:(id)a2 options:(unsigned long long)a3;

- (id)init;
- (void).cxx_destruct;
- (void)_completeSuggestion:(id)a0 timeDetectionResults:(id)a1 referenceDate:(id)a2 result:(id)a3 calendar:(id)a4;
- (id)_createPartialSuggestionWithTimeDetectionResults:(id)a0 result:(id)a1;
- (void)eventSuggestionsFromString:(id)a0 defaultCalendar:(id)a1 referenceDate:(id)a2 options:(unsigned long long)a3 handler:(id /* block */)a4;
- (void)eventSuggestionsFromString:(id)a0 initialEvent:(id)a1 options:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)generateEventSuggestionsAsynchronouslyFromString:(id)a0 options:(unsigned long long)a1 defaultCalendar:(id)a2 referenceDate:(id)a3 initialEvent:(id)a4 handler:(id /* block */)a5;

@end
