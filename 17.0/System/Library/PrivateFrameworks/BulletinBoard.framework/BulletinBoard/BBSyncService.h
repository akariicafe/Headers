@class BSContinuousMachTimer, NSString, NSMutableSet, NSObject, IDSService;
@protocol OS_dispatch_queue, BBSyncServiceDelegate;

@interface BBSyncService : NSObject <IDSServiceDelegate, BBSyncServiceInterface> {
    IDSService *_service;
    NSMutableSet *_pendingDismissalDictionaries;
    NSMutableSet *_pendingDismissalIDs;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _queuedFeed;
    NSString *_queuedSectionID;
    NSString *_queuedUniversalSectionID;
    BSContinuousMachTimer *_sendTimer;
}

@property (readonly, nonatomic) unsigned long long pairedDeviceCount;
@property (weak, nonatomic) id<BBSyncServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)dealloc;
- (id)_platformFromDeviceType:(long long)a0;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3;
- (unsigned long long)pairedDeviceCount;
- (id)_syncLocalDevices;
- (void)_reallyEnqueueBulletin:(id)a0 feeds:(unsigned long long)a1;
- (id)_syncAccount;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)_stopTimer;
- (id)_dismissalDictionaryForBulletin:(id)a0;
- (BOOL)_syncHasDefaultPairedDevice;
- (void)_startTimerIfNecessary;
- (void)_sendSyncMessage:(id)a0;
- (void)enqueueSyncedRemovalForBulletin:(id)a0 feeds:(unsigned long long)a1;
- (void)_reallySend;
- (BOOL)_hasDestination;

@end
