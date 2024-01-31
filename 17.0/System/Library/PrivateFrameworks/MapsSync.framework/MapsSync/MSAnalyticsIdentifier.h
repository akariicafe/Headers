@class NSData;

@interface MSAnalyticsIdentifier : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _data;
    void /* unknown type, empty encoding */ _positionIndex;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSData *data;
@property (nonatomic) long long positionIndex;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 data:(id)a1 positionIndex:(long long)a2;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;

@end
