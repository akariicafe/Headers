@class SSURLConnectionRequest, NSObject;
@protocol OS_dispatch_queue;

@interface RadioGetFeaturedStationsRequest : RadioRequest {
    NSObject<OS_dispatch_queue> *_artworkQueue;
    SSURLConnectionRequest *_request;
    unsigned int _stationCount;
}

@property (nonatomic) BOOL disableArtworkLoading;
@property (nonatomic) BOOL disableCachedResponses;

- (id)init;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)_importFeaturedStationWithDictionary:(id)a0 inModel:(id)a1 loadArtworkSynchronously:(BOOL)a2;
- (id)_stationDictionariesByApplyingResponse:(id)a0 error:(id *)a1;
- (id)initWithStationCount:(unsigned int)a0;
- (void)startWithFeaturedStationsCompletionHandler:(id /* block */)a0;

@end
