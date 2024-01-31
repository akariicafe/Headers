@class NSArray, NSError, _TtC8MapsSync20MapsSyncQueryOptions;

@interface MSHistoryDirectionsItemRequest : NSObject {
    void /* unknown type, empty encoding */ _request;
}

- (id)init;
- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)fetchSyncAndReturnError:(id *)a0;
- (id)fetchSyncWithOptions:(id)a0 error:(id *)a1;
- (void)fetchWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;
- (void)fetchWithOptions:(_TtC8MapsSync20MapsSyncQueryOptions *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;

@end
