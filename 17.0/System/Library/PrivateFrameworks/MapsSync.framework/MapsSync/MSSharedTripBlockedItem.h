@class NSString;

@interface MSSharedTripBlockedItem : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _expiryTime;
    void /* unknown type, empty encoding */ _sharedTripIdentifier;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) long long expiryTime;
@property (nonatomic, copy) NSString *sharedTripIdentifier;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 expiryTime:(long long)a1 sharedTripIdentifier:(id)a2;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;

@end
