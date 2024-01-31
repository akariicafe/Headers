@class NSXPCConnection;

@interface RTMapServiceManager : RTService <RTHelperServiceProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)fetchMapItemsFromAddressDictionary:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)fetchMapItemFromHandle:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (id)mapItemWithIdentifier:(id)a0 geoMapItem:(id)a1 source:(unsigned long long)a2 creationDate:(id)a3 error:(id *)a4;
- (void)createMapItemWithIdentifier:(id)a0 geoMapItemStorage:(id)a1 source:(unsigned long long)a2 creationDate:(id)a3 handler:(id /* block */)a4;
- (void)fetchMapItemsFromNaturalLanguageQuery:(id)a0 location:(id)a1 options:(id)a2 handler:(id /* block */)a3;
- (void)fetchPostalAddressForMapItem:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)fetchMapItemsFromAddressString:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (id)mapItemWithIdentifier:(id)a0 geoMapItemStorage:(id)a1 source:(unsigned long long)a2 creationDate:(id)a3 error:(id *)a4;
- (void).cxx_destruct;
- (void)fetchCountryAndSubdivisionCodesFromLocation:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)fetchBuildingPolygonsFromLocation:(id)a0 radius:(double)a1 handler:(id /* block */)a2;
- (void)fetchMapItemsFromLocations:(id)a0 accessPoints:(id)a1 startDate:(id)a2 endDate:(id)a3 options:(id)a4 handler:(id /* block */)a5;
- (void)fetchAppClipURLsForMapItem:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)fetchMapItemsFromLocation:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (id)_proxyForServicingSelector:(SEL)a0 withErrorHandler:(id /* block */)a1;
- (void)fetchMapItemWithIdentifier:(id)a0 geoMapItem:(id)a1 source:(unsigned long long)a2 creationDate:(id)a3 handler:(id /* block */)a4;

@end
