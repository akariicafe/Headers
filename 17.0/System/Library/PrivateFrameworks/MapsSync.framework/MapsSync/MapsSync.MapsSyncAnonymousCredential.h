@class NSSet, NSString, _TtC8MapsSync27MapsSyncAnonymousCredential, NSData, NSDate;

@interface MapsSync.MapsSyncAnonymousCredential : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _anonymousId;
    void /* unknown type, empty encoding */ _mapsToken;
    void /* unknown type, empty encoding */ _mapsTokenCreatedAt;
    void /* unknown type, empty encoding */ _mapsTokenTTL;
    void /* unknown type, empty encoding */ _reviewedPlaces;
    void /* unknown type, empty encoding */ _reviewedPlacesUnstored;
}

@property (class, nonatomic, readonly) _TtC8MapsSync27MapsSyncAnonymousCredential *fetchLatestAnonymousCredential;

@property (nonatomic, copy) NSSet *_reviewedPlacesUnstored;
@property (nonatomic, readonly) NSData *anonymousId;
@property (nonatomic, readonly) NSData *mapsToken;
@property (nonatomic, readonly) NSDate *mapsTokenCreatedAt;
@property (nonatomic, readonly) unsigned long long mapsTokenTTL;
@property (nonatomic, readonly) NSSet *reviewedPlaces;
@property (nonatomic, readonly) NSString *description;

+ (id)fetchWithAnonymousId:(id)a0;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addEditWithBlock:(id /* block */)a0;
- (void)executeOnFirstSave:(id)a0;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
