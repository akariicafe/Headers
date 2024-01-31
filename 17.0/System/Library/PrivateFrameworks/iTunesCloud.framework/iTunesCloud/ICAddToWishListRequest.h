@class ICStoreRequestContext, NSString, ICAddToWishListResponse;

@interface ICAddToWishListRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    NSString *_buyParams;
    long long _storeItemID;
    NSString *_itemName;
    NSString *_itemKind;
    ICAddToWishListResponse *_response;
}

- (void)performWithResponseHandler:(id /* block */)a0;
- (void)execute;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0 buyParams:(id)a1 storeItemID:(long long)a2 itemName:(id)a3 itemKind:(id)a4;
- (id)initWithRequestContext:(id)a0 platformMetadataItem:(id)a1;

@end
