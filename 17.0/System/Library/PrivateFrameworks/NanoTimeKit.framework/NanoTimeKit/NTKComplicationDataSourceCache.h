@class NSMutableDictionary;

@interface NTKComplicationDataSourceCache : NSObject {
    int _capabilitiesChangedNotificationToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_cache;
}

@property (class, readonly, nonatomic) NTKComplicationDataSourceCache *sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_invalidateCache;
- (void).cxx_destruct;
- (Class)_dataSourceClassForComplicationType:(unsigned long long)a0 family:(long long)a1 forDevice:(id)a2;
- (Class)dataSourceClassForComplicationType:(unsigned long long)a0 family:(long long)a1 forDevice:(id)a2;

@end
