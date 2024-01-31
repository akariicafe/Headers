@class NSString, GEOStorageRouteRequestStorage, NSData, NSNumber;

@interface MapsSync.MapsSyncHistoryMultiPointRoute : MapsSync.MapsSyncHistoryItem {
    void /* unknown type, empty encoding */ _navigationInterrupted;
    void /* unknown type, empty encoding */ _routeProgressWaypointIndex;
    void /* unknown type, empty encoding */ _routeRequestStorage;
    void /* unknown type, empty encoding */ _sharedETAData;
    void /* unknown type, empty encoding */ _requiredCharge;
    void /* unknown type, empty encoding */ _type;
    void /* unknown type, empty encoding */ _vehicleIdentifier;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL navigationInterrupted;
@property (nonatomic, readonly) short routeProgressWaypointIndex;
@property (nonatomic, readonly) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, readonly) NSData *sharedETAData;
@property (nonatomic, readonly) NSNumber *requiredCharge;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) NSString *vehicleIdentifier;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addEditWithBlock:(id /* block */)a0;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
