@class ICStoreURLRequest, NSString, ICStoreRequestContext, NSObject;
@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionPlaybackRequestOperation : ICAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreURLRequest *_activeURLRequest;
}

@property (copy, nonatomic) NSString *assetSourceStorefrontID;
@property (nonatomic, getter=isDelegatedPlayback) BOOL delegatedPlayback;
@property (nonatomic) long long requestType;
@property (copy, nonatomic) id /* block */ willBeginExecutionHandler;
@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storeSubscriptionAdamID;
@property (nonatomic) long long storePurchasedAdamID;
@property (copy, nonatomic) NSString *cloudUniversalLibraryID;
@property (nonatomic, getter=isFollowUp) BOOL followUp;
@property (copy, nonatomic) NSString *playbackAuthorizationToken;

- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)cancel;

@end
