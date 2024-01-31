@class OS_os_log;

@interface MapsSync.MapsSyncFavoriteItemQuery : MapsSync.MapsSyncBaseQuery {
    void /* unknown type, empty encoding */ _specifiedQuery;
    void /* unknown type, empty encoding */ _hasDeletedExpired;
}

@property (class, nonatomic, readonly) OS_os_log *signpostLog;

- (void)preFetchHook:(id /* block */)a0;
- (void)fetchContents:(id /* block */)a0;
- (id)initWithOptions:(id)a0 delegate:(id)a1;
- (id)mergeDuplicateObjectsWithDuplicates:(id)a0;
- (void).cxx_destruct;
- (void)fetchQueryContents:(id /* block */)a0;
- (id)initWithDelegate:(id)a0;
- (id)findDuplicates:(id)a0;
- (void)fetchQueryContentsWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)fetchContentsWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithQueryDelegate:(id)a0 predicate:(id)a1;

@end
