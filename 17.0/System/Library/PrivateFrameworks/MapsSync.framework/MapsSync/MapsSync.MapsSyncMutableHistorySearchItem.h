@class GEOMapRegion, NSString;

@interface MapsSync.MapsSyncMutableHistorySearchItem : MapsSync.MapsSyncMutableHistoryItem {
    void /* unknown type, empty encoding */ _proxyHistory;
}

@property (nonatomic, retain) GEOMapRegion *geoMapRegion;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *locationDisplay;
@property (nonatomic, copy) NSString *query;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)a0;

@end
