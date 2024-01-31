@class NSString;

@interface CNAutocompleteFetchBlockDelegate : NSObject <CNAutocompleteFetchDelegate>

@property (copy) id /* block */ resultHandler;
@property (copy) id /* block */ errorHandler;
@property (copy) id /* block */ finishHandler;
@property (copy) id /* block */ beganNetworkActivityHandler;
@property (copy) id /* block */ endedNetworkActivityHandler;
@property (copy) id /* block */ supplementalResultHandler;
@property (copy) id /* block */ adjustmentHandler;
@property (copy) id /* block */ willSortHandler;
@property (copy) id /* block */ comparatorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (BOOL)autocompleteFetch:(id)a0 shouldExpectSupplementalResultsForRequest:(id)a1 completionHandler:(id /* block */)a2;
- (id)autocompleteFetch:(id)a0 willAdjustResults:(id)a1;
- (void)autocompleteFetch:(id)a0 willSortResults:(id)a1;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)a0;
- (void)autocompleteFetchDidEndNetworkActivity:(id)a0;
- (void)autocompleteFetchDidFinish:(id)a0;
- (id /* block */)resultComparatorForAutocompleteFetch:(id)a0;

@end
