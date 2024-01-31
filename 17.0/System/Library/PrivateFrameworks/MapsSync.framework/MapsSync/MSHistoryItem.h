@interface MSHistoryItem : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _position;
    void /* unknown type, empty encoding */ _positionIndex;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) double position;
@property (nonatomic) long long positionIndex;

+ (void)beforeFetchWithStore:(id)a0;
+ (id)optionsWith:(id)a0;
+ (void)pruneHistoryItemsWithStore:(id)a0;

- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 position:(double)a1 positionIndex:(long long)a2;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;

@end
