@protocol CNAutocompleteProbeProvider;

@interface CNAutocompleteUsageMonitor : NSObject

@property (readonly, nonatomic) id<CNAutocompleteProbeProvider> probeProvider;

+ (void)userSelectedResult:(id)a0 atSortedIndex:(unsigned long long)a1 forRequest:(id)a2 gotResultsFromDuet:(BOOL)a3;
+ (void)userIgnoredResultsForRequest:(id)a0 afterDelay:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (void)userSelectedResult:(id)a0 atSortedIndex:(unsigned long long)a1 forRequest:(id)a2 gotResultsFromDuet:(BOOL)a3;
- (id)initWithProbeProvider:(id)a0;
- (void)userIgnoredResultsOfBatch:(unsigned long long)a0 forRequest:(id)a1 afterDelay:(double)a2;
- (void)userSawNumberOfResults:(unsigned long long)a0 forBatch:(unsigned long long)a1 includingNumberOfSuggestions:(unsigned long long)a2 forRequest:(id)a3;

@end
