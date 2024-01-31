@class NSString, LPiTunesMediaLookupTask, LPFetcherConfiguration;

@interface LPiTunesCuratorProfileURLFetcher : LPFetcher {
    LPFetcherConfiguration *_configuration;
    id /* block */ _completionHandler;
    LPiTunesMediaLookupTask *_lookupTask;
    BOOL _cancelled;
}

@property (readonly, retain, nonatomic) NSString *curatorID;

- (void)_failedWithError:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)_completedWithResponse:(id)a0;
- (void)fetchWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCuratorID:(id)a0;

@end
