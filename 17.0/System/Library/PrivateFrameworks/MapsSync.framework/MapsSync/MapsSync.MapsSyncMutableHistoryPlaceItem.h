@class NSUUID, GEOMapItemStorage;

@interface MapsSync.MapsSyncMutableHistoryPlaceItem : MapsSync.MapsSyncMutableHistoryItem {
    void /* unknown type, empty encoding */ _proxyHistory;
}

@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, copy) NSUUID *supersededSearchId;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)a0;

@end
