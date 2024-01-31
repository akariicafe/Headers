@class RadioStation, NSString, SSURLConnectionRequest;

@interface RadioRecentStationsRequest : RadioRequest {
    SSURLConnectionRequest *_request;
    RadioStation *_currentStation;
    NSString *_currentStationStringID;
}

@property (nonatomic) BOOL shouldGroupResponses;
@property (nonatomic) unsigned long long stationCount;

- (void)startWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCurrentStationStringID:(id)a0;
- (void)_configureRequestPropertiesForCaching:(id)a0 returningCacheKey:(id *)a1;
- (id)_newRecentStationsURLRequestPropertiesWithBaseURL:(id)a0;
- (id)_recentStationsResponseWithConnectionResponse:(id)a0 returningError:(id *)a1;
- (void)getCachedRecentStationsResponseWithCompletionHandler:(id /* block */)a0;
- (id)initWithCurrentStation:(id)a0;

@end
