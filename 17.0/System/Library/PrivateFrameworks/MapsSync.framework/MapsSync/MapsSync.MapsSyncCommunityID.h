@class NSString, NSSet;

@interface MapsSync.MapsSyncCommunityID : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _communityIdentifier;
    void /* unknown type, empty encoding */ _expired;
    void /* unknown type, empty encoding */ _usedCount;
    void /* unknown type, empty encoding */ _reviewedPlaces;
    void /* unknown type, empty encoding */ _rapRecords;
}

@property (nonatomic, readonly) NSString *communityIdentifier;
@property (nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) long long usedCount;
@property (nonatomic, readonly) NSSet *rapRecords;
@property (nonatomic, readonly) NSSet *reviewedPlaces;
@property (nonatomic, readonly) NSString *description;

- (id)initWithObject:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addEditWithBlock:(id /* block */)a0;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
