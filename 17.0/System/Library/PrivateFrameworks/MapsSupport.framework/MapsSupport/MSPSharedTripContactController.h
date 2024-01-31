@class NSOrderedSet, MSPSharingRestorationStorage, NSMutableSet, NSUUID, NSObject;
@protocol MSPSharedTripContactControllerDelegate, OS_dispatch_queue, MSPSharedTripXPCServer;

@interface MSPSharedTripContactController : NSObject {
    NSOrderedSet *_activeContacts;
    NSOrderedSet *_activeHandles;
    NSMutableSet *_pendingContacts;
    id<MSPSharedTripXPCServer> _sharedTripServer;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSUUID *_sessionIdentifier;
}

@property (weak, nonatomic) id<MSPSharedTripContactControllerDelegate> delegate;
@property (readonly, nonatomic) NSOrderedSet *activeContactsValues;
@property (readonly, nonatomic) MSPSharingRestorationStorage *archivedSharingStorage;

- (void)reset;
- (void)_stopSharingWithContactValue:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_reset;
- (id)_archivedSharingStorage;
- (void)_stopAllSharingWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)stopSharingWithContactValue:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (BOOL)_contactIsActive:(id)a0;
- (void)_updateActiveSharingHandles:(id)a0;
- (void)_didStartSharingWithContact:(id)a0 withCapabilityType:(unsigned long long)a1 error:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)_notifyDelegateContactsChanged;
- (void)updateActiveSharingHandles:(id)a0;
- (void)_shareWithContactValue:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)initWithSharedTripServer:(id)a0;
- (BOOL)contactIsActive:(id)a0;
- (void)stopAllSharingWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)shareWithContactValue:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
