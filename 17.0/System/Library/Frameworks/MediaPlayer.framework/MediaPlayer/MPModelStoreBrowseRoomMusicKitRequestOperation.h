@class NSIndexSet;

@interface MPModelStoreBrowseRoomMusicKitRequestOperation : MPStoreModelRequestOperation {
    NSIndexSet *_allowedFCKinds;
}

- (void).cxx_destruct;
- (id)_roomURLWithRoomID:(id)a0 storeURLBag:(id)a1;
- (id)_produceResponseWithParser:(id)a0 results:(id)a1 error:(id *)a2;
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)a0 error:(id *)a1;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;

@end
