@class ICStoreRequestContext, NSArray;

@interface ICMusicSubscriptionRecommendationsRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    long long _seedItemID;
    BOOL _isLibraryID;
    long long _maxResultCount;
    NSArray *_resultsList;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0 seedItemID:(long long)a1 isLibraryID:(BOOL)a2 maxResultCount:(long long)a3;

@end
