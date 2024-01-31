@class NSString, NSData, NSDate, _TtC8MapsSync19MapsSyncDataSession;

@interface MapsSync.MapsSyncCachedCuratedCollection : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _collectionDescription;
    void /* unknown type, empty encoding */ _image;
    void /* unknown type, empty encoding */ _imageUrl;
    void /* unknown type, empty encoding */ _title;
    void /* unknown type, empty encoding */ _curatedCollectionIdentifier;
    void /* unknown type, empty encoding */ _isTombstone;
    void /* unknown type, empty encoding */ _lastFetchedDate;
    void /* unknown type, empty encoding */ _lastSignificantChangeDate;
    void /* unknown type, empty encoding */ _placesCount;
    void /* unknown type, empty encoding */ _publisherAttribution;
    void /* unknown type, empty encoding */ _titleLocale;
    void /* unknown type, empty encoding */ _resultProviderIdentifier;
}

@property (nonatomic, readonly) long long identifierHash;
@property (nonatomic, readonly) NSString *collectionDescription;
@property (nonatomic, readonly) NSData *image;
@property (nonatomic, readonly) NSString *imageUrl;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long curatedCollectionIdentifier;
@property (nonatomic, readonly) BOOL isTombstone;
@property (nonatomic, readonly) NSDate *lastFetchedDate;
@property (nonatomic, readonly) NSDate *lastSignificantChangeDate;
@property (nonatomic, readonly) int placesCount;
@property (nonatomic, readonly) NSString *publisherAttribution;
@property (nonatomic, readonly) NSString *titleLocale;
@property (nonatomic, readonly) int resultProviderIdentifier;
@property (nonatomic, readonly) _TtC8MapsSync19MapsSyncDataSession *session;
@property (nonatomic, readonly) NSString *description;

+ (void)fetchWithHistoryCuratedCollections:(id)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;
+ (void)fetchWithCuratedCollection:(id)a0 completion:(id /* block */)a1;
+ (void)fetchWithCuratedCollections:(id)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;
+ (void)fetch:(long long)a0 :(long long)a1 :(id)a2 sort:(long long)a3 ascending:(BOOL)a4 completion:(id /* block */)a5;
+ (void)fetchWithHistoryCuratedCollection:(id)a0 completion:(id /* block */)a1;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addEditWithBlock:(id /* block */)a0;
- (id)initWithCuratedCollectionIdentifier:(unsigned long long)a0;
- (id)initWithCuratedCollectionIdentifier:(unsigned long long)a0 resultProviderIdentifier:(int)a1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
