@class ICRadioGetTracksRequest, NSString;

@interface MPCModelRadioGetTracksOperation : MPAsyncOperation {
    ICRadioGetTracksRequest *_request;
    NSString *_siriAssetInfo;
    void *_radioQueueFeederPointerForLogging;
}

@property (copy, nonatomic) id /* block */ completionHandler;

- (void)execute;
- (void).cxx_destruct;
- (id)_cacheTracksForStep:(id)a0;
- (void)_runStep:(id)a0 withFinishHandler:(id /* block */)a1;
- (id)initWithGetTracksRequest:(id)a0 siriAssetInfo:(id)a1 radioQueueFeeder:(id)a2;

@end
