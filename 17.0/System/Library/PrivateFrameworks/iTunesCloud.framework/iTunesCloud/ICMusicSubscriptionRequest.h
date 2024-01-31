@class ICStoreRequestContext;

@interface ICMusicSubscriptionRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    long long _requestType;
    BOOL _requestingOfflineSlot;
}

- (void)execute;
- (void).cxx_destruct;
- (id)_bagKeyForRequestType:(long long)a0;
- (id)initWithStoreRequestContext:(id)a0 requestType:(long long)a1 requestingOfflineSlot:(BOOL)a2;

@end
