@interface MTBaseFeedRequest : MTBaseMAPIRequest <MTMAPIRequest> {
    void /* unknown type, empty encoding */ storeID;
    void /* unknown type, empty encoding */ showMetadata;
}

- (id)initWithStoreID:(long long)a0;
- (id)init;
- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
