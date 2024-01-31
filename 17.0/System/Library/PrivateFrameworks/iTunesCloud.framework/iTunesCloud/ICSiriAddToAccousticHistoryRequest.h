@class ICStoreRequestContext, NSString;

@interface ICSiriAddToAccousticHistoryRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    long long _storeItemID;
    NSString *_affiliateIdentifier;
}

- (void)execute;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0 storeItemID:(long long)a1 affiliateIdentifier:(id)a2;

@end
