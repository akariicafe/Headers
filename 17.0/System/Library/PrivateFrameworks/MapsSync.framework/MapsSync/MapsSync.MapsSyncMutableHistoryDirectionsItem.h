@class GEOStorageRouteRequestStorage, NSData;

@interface MapsSync.MapsSyncMutableHistoryDirectionsItem : MapsSync.MapsSyncMutableHistoryItem {
    void /* unknown type, empty encoding */ _proxyHistory;
}

@property (nonatomic) BOOL navigationInterrupted;
@property (nonatomic, retain) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)a0;

@end
