@class NSString, GEOStorageRouteRequestStorage, NSData;

@interface MapsSync.MapsSyncHistoryDirectionsItem : MapsSync.MapsSyncHistoryItem {
    void /* unknown type, empty encoding */ _navigationInterrupted;
    void /* unknown type, empty encoding */ _routeRequestStorage;
    void /* unknown type, empty encoding */ _sharedETAData;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL navigationInterrupted;
@property (nonatomic, readonly) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, readonly) NSData *sharedETAData;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addEditWithBlock:(id /* block */)a0;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
