@class NSString, WLKWatchListModificationResponse;

@interface WLKAddToUpNextRequest : WLKRequest {
    NSString *_channelID;
}

@property (readonly, copy, nonatomic) NSString *canonicalID;
@property (readonly, copy, nonatomic) NSString *statsID;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *externalID;
@property (readonly, nonatomic) WLKWatchListModificationResponse *response;

- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 externalID:(id)a1;
- (id)initWithCanonicalID:(id)a0;
- (id)initWithStatsID:(id)a0;
- (void)makeRequestWithCompletion:(id /* block */)a0;

@end
