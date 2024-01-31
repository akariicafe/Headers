@class WBSCoalescedAsynchronousWriter, NSString, NSMutableDictionary, NSURL, NSMutableSet, NSObject, NSCache;
@protocol WBSDataCacheDelegate, OS_dispatch_queue;

@interface WBSOnDiskDataCache : NSObject <WBSDataCache> {
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSCache *_entriesForKeyStringsCache;
    NSMutableSet *_pendingKeyStringRequests;
    NSMutableSet *_missingEntryKeyStrings;
    NSMutableDictionary *_cacheSettings;
    WBSCoalescedAsynchronousWriter *_cacheSettingsWriter;
}

@property (nonatomic) BOOL isInMemoryCacheEnabled;
@property (readonly, nonatomic) NSURL *cacheDirectoryURL;
@property (readonly, nonatomic, getter=isTerminating) BOOL terminating;
@property (weak, nonatomic) id<WBSDataCacheDelegate> dataCacheDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUp;
- (id)init;
- (void)reset;
- (id)settingForKey:(id)a0;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)_cacheSettingsFileURL;
- (void)_didFailToLoadEntryForKeyString:(id)a0 error:(id)a1;
- (void)_didLoadEntry:(id)a0 forKeyString:(id)a1;
- (id)_diskAccessQueueName;
- (void)_dispatchDiskAccessBlock:(id /* block */)a0;
- (id)_fileLocationForKeyString:(id)a0;
- (long long)_internalEntryStateForKeyString:(id)a0;
- (void)_internalQueueDispatchAsync:(id /* block */)a0;
- (void)_internalQueueDispatchSync:(id /* block */)a0;
- (id)_internalQueueName;
- (void)_notifyDidFinishSettingUp;
- (long long)entryStateForKeyString:(id)a0;
- (void)getEntryURLForKeyString:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCacheDirectoryURL:(id)a0;
- (void)removeEntriesForKeyStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeEntriesForKeyStringsNotIncludedIn:(id)a0 completionHandler:(id /* block */)a1;
- (id)requestEntryForKeyString:(id)a0;
- (void)savePendingChangesBeforeTearDown;
- (void)setEntry:(id)a0 forKeyString:(id)a1 completionHandler:(id /* block */)a2;

@end
