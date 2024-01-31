@class ICURLBag;

@interface MPModelRecentlyPlayedRequestOperation : MPStoreModelRequestOperation {
    ICURLBag *_storeURLBag;
}

- (void).cxx_destruct;
- (id)_produceResponseWithRecentlyPlayedArray:(id)a0 completion:(id /* block */)a1;
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)a0 error:(id *)a1;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;
- (id)recentlyPlayedURLWithStoreURLBag:(id)a0;

@end
