@class NSMutableArray, LPFetcherConfiguration;

@interface LPFetcherGroup : NSObject {
    LPFetcherConfiguration *_configuration;
    long long _responsePolicy;
    id /* block */ _completionHandler;
    NSMutableArray *_tasks;
    BOOL _doneAddingFetchers;
    BOOL _done;
    BOOL _cancelled;
    unsigned int _loggingID;
}

- (void)_completed;
- (void).cxx_destruct;
- (void)cancel;
- (void)prependFetcher:(id)a0;
- (void)_addFetcher:(id)a0 atIndex:(unsigned long long)a1;
- (id)_responsesRespectingPolicy;
- (void)appendFetcher:(id)a0;
- (void)doneAddingFetchers;
- (void)evaluateCompleteness;
- (id)initWithPolicy:(long long)a0 configuration:(id)a1 description:(id)a2 completionHandler:(id /* block */)a3;
- (unsigned long long)numberOfActiveFetches;
- (void)startFetchesIfNeeded;

@end
