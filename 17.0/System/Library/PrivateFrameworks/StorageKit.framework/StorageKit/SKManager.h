@class NSXPCConnection, NSString, NSHashTable, NSArray, NSSet, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SKManager : SKBaseManager <SKManagerListener> {
    BOOL diskQueueStuck;
    BOOL _shouldBeBindingsSafe;
    NSMutableSet *allDisks;
    NSSet *visibleRoles;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_diskNotificationQueue;
    NSHashTable *_listeners;
    NSMutableDictionary *_listenersAppearedDisks;
    NSObject<OS_dispatch_queue> *_waitingForDiskQueue;
    NSMutableSet *_waitingForDiskSet;
    NSArray *_filesystems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)defaultVisibleRoles;
+ (BOOL)isMountPointWithPath:(id)a0;
+ (id)sharedManagerWithBindingsSafety:(BOOL)a0;
+ (id)syncSharedManager;

- (void)addListener:(id)a0;
- (BOOL)isBusy;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (id)diskForPath:(id)a0;
- (id)diskForBSDname:(id)a0;
- (id)_diskForString:(id)a0;
- (id)_diskForPath:(id)a0;
- (void)_disksAppeared:(id)a0 toListener:(id)a1;
- (void)_initialPopulateCompleteForListener:(id)a0;
- (id)allDisks;
- (id)allDisksSet;
- (id)childDisksForWholeDisk:(id)a0;
- (id)contentDiskWithDisk:(id)a0;
- (id)diskForString:(id)a0;
- (id)diskForUUID:(id)a0;
- (id)diskForVolumeName:(id)a0;
- (void)disksAppeared:(id)a0;
- (void)disksChanged:(id)a0;
- (void)disksDisappeared:(id)a0;
- (id)filesystemWithSKType:(id)a0 isCaseSensitive:(BOOL)a1 isEncrypted:(BOOL)a2;
- (id)filesystems;
- (id)formatableFileSystems;
- (id)initWithBindingSafety:(BOOL)a0;
- (void)initialPopulateComplete;
- (id)knownDiskForDictionary:(id)a0;
- (void)knownDiskForDictionary:(id)a0 notify:(id /* block */)a1 onQueue:(id)a2;
- (id)knownDiskForDictionary:(id)a0 waitingForDaemon:(BOOL)a1;
- (id)knownDiskForDictionary:(id)a0 waitingForDaemon:(BOOL)a1 fromSet:(id)a2;
- (id)knownDisksForDictionaries:(id)a0;
- (id)knownDisksForDictionaries:(id)a0 waitingForDaemon:(BOOL)a1;
- (id)knownDisksForDictionaries:(id)a0 waitingForDaemon:(BOOL)a1 fromSet:(id)a2;
- (void)managerResumed;
- (void)managerStalled;
- (id)newDiskWithDictionary:(id)a0;
- (id)physicalStoresForAPFSVolume:(id)a0;
- (void)setVisibleRoles:(id)a0;
- (void)syncAllDisks;
- (id)visibleDisks;
- (id)visibleRoles;
- (id)volumesForAPFSPS:(id)a0;
- (id)wholeDiskForDisk:(id)a0;

@end
