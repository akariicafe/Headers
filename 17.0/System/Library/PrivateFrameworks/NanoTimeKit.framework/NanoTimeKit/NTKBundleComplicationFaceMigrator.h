@class NTKBundleComplicationMigrationProvider, NSObject;
@protocol OS_dispatch_queue;

@interface NTKBundleComplicationFaceMigrator : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NTKBundleComplicationMigrationProvider *_migrationProvider;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_enumerateMigratableComplicationsOnFace:(id)a0 withBlock:(id /* block */)a1;
- (void)_migrateFace:(id)a0 slot:(id)a1 complication:(id)a2 completion:(id /* block */)a3;
- (BOOL)_shouldAttemptToMigrateComplicationType:(unsigned long long)a0;
- (id)initWithMigrationProvider:(id)a0;
- (void)migrateFace:(id)a0 completion:(id /* block */)a1;
- (void)migrateFaces:(id)a0 completion:(id /* block */)a1;

@end
