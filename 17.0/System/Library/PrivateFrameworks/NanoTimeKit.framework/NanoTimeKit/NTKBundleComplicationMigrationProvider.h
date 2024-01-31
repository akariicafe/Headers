@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NTKBundleComplicationMigrationProvider : NSObject {
    NSMutableDictionary *_typeMigrationCaches;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachesLock;
}

+ (id)cachedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_cachedLookupForDevice:(id)a0;
- (void)_fetchTypeLookupForDevice:(id)a0 completion:(id /* block */)a1;
- (void)_handleDeviceDidUpdate:(id)a0;
- (id)_loadMigrationCacheForDevice:(id)a0;
- (void)_regenerateTypeLookupForDevice:(id)a0 completion:(id /* block */)a1;
- (void)ensureTypeLookupForDevice:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasTypeLookupForDevice:(id)a0;
- (id)migratedComplicationFromType:(unsigned long long)a0 family:(long long)a1 device:(id)a2;
- (void)serviceRequest:(id)a0 completion:(id /* block */)a1;

@end
