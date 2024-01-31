@class _CNAutocompleteUserSessionDisplayedResults, CNAutocompleteFetchRequest, NSDate, CNAutocompleteUsageMonitor, NSObject;
@protocol CNAutocompleteProbeProvider, OS_dispatch_queue, CNFuture;

@interface CNAutocompleteUserSession : NSObject

@property (readonly, nonatomic) id<CNAutocompleteProbeProvider> probeProvider;
@property (retain, nonatomic) CNAutocompleteFetchRequest *currentRequest;
@property (nonatomic) unsigned long long currentBatch;
@property (retain, nonatomic) _CNAutocompleteUserSessionDisplayedResults *lastDisplayedResults;
@property (retain, nonatomic) NSDate *requestStartTime;
@property (retain, nonatomic) CNAutocompleteUsageMonitor *usageMonitor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) id<CNFuture> duetResultsFuture;

- (void)_resetState;
- (void).cxx_destruct;
- (void)didReceiveResults:(id)a0 forRequest:(id)a1;
- (void)didSelectResult:(id)a0 atSortedIndex:(unsigned long long)a1;
- (id)initWithProbeProvider:(id)a0;
- (void)willStartDuetRequestWithMatchingResultsFuture:(id)a0;
- (void)willStartExecutingRequest:(id)a0;

@end
