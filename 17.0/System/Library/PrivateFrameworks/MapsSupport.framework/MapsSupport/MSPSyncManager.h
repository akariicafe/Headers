@class NSString, SYService, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MSPSyncManager : NSObject <SYServiceDelegate, SYSessionDelegate> {
    SYService *_service;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSMutableArray *_pins;
    NSMutableDictionary *_pinsMap;
    BOOL _resetSyncRequested;
    NSMutableArray *_pendingSyncItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_notifyObservers;
- (id)init;
- (void)completedSync;
- (BOOL)service:(id)a0 startSession:(id)a1 error:(id *)a2;
- (void)notifyObservers;
- (void).cxx_destruct;
- (void)service:(id)a0 didSwitchFromPairingID:(id)a1 toPairingID:(id)a2;
- (void)syncSession:(id)a0 applyChanges:(id)a1 completion:(id /* block */)a2;
- (void)syncSession:(id)a0 didEndWithError:(id)a1;
- (unsigned int)syncSession:(id)a0 enqueueChanges:(id /* block */)a1 error:(id *)a2;
- (BOOL)syncSession:(id)a0 resetDataStoreWithError:(id *)a1;
- (id)pins;
- (void)_updateFromDisk;
- (void)_addPin:(id)a0;
- (void)_applyAddItem:(id)a0;
- (void)_applyDeleteItem:(id)a0;
- (void)_applyUpdateItem:(id)a0;
- (void)_clearAllNanoPersistableData;
- (void)_removePin:(id)a0;
- (void)_resumeSyncService;
- (void)_setHasChangesAvailable;
- (void)_updatePin:(id)a0;
- (id)_wrapPin:(id)a0 changeType:(long long)a1;
- (void)completedPreparingSync;
- (id)readPins;
- (void)setDroppedPin:(id)a0;
- (void)setNeedsFullSync;
- (void)writePins:(id)a0;

@end
