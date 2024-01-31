@class NSDictionary, NSURL, NSDate, NPTONotificationCenter, NPTOPreferencesAccessor;

@interface NPTOLibraryInfo : NSObject {
    NSURL *_libraryURL;
    NPTONotificationCenter *_notificationCenter;
    NPTOPreferencesAccessor *_legacyPreferencesAccessor;
}

@property (readonly, nonatomic) NSDate *lastUpdatedDate;
@property (nonatomic, getter=isSyncing) BOOL syncing;
@property (retain, nonatomic) NSDictionary *collectionTargetMap;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)collectionTargetMapChangeObserverWithQueue:(id)a0 block:(id /* block */)a1;
- (BOOL)isSyncNeeded;
- (void)setSyncNeeded;
- (id)syncNeededChangeObserverWithQueue:(id)a0 block:(id /* block */)a1;
- (id)syncingChangeObserverWithQueue:(id)a0 block:(id /* block */)a1;

@end
