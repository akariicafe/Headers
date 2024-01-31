@class _TtC8MapsSync13MapsSyncStore, _TtC8MapsSync19MapsSyncStoreConfig;

@interface MapsSync.MapsSyncStoreConfig : NSObject {
    void /* unknown type, empty encoding */ _primaryContainer;
    void /* unknown type, empty encoding */ _cacheContainer;
    void /* unknown type, empty encoding */ _store;
    void /* unknown type, empty encoding */ _storeLock;
}

@property (class, nonatomic, readonly) _TtC8MapsSync19MapsSyncStoreConfig *defaultStoreConfig;

@property (nonatomic, retain) _TtC8MapsSync13MapsSyncStore *store;

+ (id)createInMemoryStore;
+ (id)getDefault;

- (id)init;
- (void).cxx_destruct;

@end
