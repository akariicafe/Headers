@class GEOMapItemStorage, NSString, NSSet, NSNumber;

@interface MapsSync.MapsSyncFavoriteItem : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _contactHandles;
    void /* unknown type, empty encoding */ _customName;
    void /* unknown type, empty encoding */ _hidden;
    void /* unknown type, empty encoding */ _mapItemStorage;
    void /* unknown type, empty encoding */ _originatingAddressString;
    void /* unknown type, empty encoding */ _type;
    void /* unknown type, empty encoding */ _source;
    void /* unknown type, empty encoding */ _shortcutIdentifier;
    void /* unknown type, empty encoding */ _version;
    void /* unknown type, empty encoding */ _latitude;
    void /* unknown type, empty encoding */ _longitude;
    void /* unknown type, empty encoding */ _muid;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSSet *contactHandles;
@property (nonatomic, readonly) NSString *customName;
@property (nonatomic, readonly) BOOL hidden;
@property (nonatomic, readonly) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, readonly) NSString *originatingAddressString;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) short source;
@property (nonatomic, readonly) NSString *shortcutIdentifier;
@property (nonatomic, readonly) short version;
@property (nonatomic, readonly) NSNumber *latitude;
@property (nonatomic, readonly) NSNumber *longitude;
@property (nonatomic, readonly) NSNumber *muid;

+ (void)fetch:(long long)a0 :(long long)a1 :(id)a2 sort:(long long)a3 ascending:(BOOL)a4 completion:(id /* block */)a5;
+ (id)fetchFavoriteItemForIdentifier:(id)a0;
+ (id)fetchFavoriteItemForOriginatingAddressString:(id)a0;
+ (id)fetchFavoriteItemForShortcutIdentifier:(id)a0;
+ (void)fetchNearbyPlacesWithLatitude:(double)a0 longitude:(double)a1 callbackQueue:(id)a2 completion:(id /* block */)a3;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addEditWithBlock:(id /* block */)a0;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
