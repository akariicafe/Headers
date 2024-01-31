@class NSString, BLTPingSubscriber, PSYSyncCoordinator;
@protocol NNMKSyncStateManagerDelegate;

@interface NNMKSyncStateManager : NSObject <PSYSyncCoordinatorDelegate, NNMKSyncStateManager>

@property (retain, nonatomic) BLTPingSubscriber *notificationsPingSubscriber;
@property (retain, nonatomic) PSYSyncCoordinator *initialSyncCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NNMKSyncStateManagerDelegate> delegate;

- (id)init;
- (void)syncCoordinator:(id)a0 didInvalidateSyncSession:(id)a1;
- (BOOL)pairedDeviceSupportsMultipleMailboxes;
- (void)dealloc;
- (void)reportInitialSyncProgress:(double)a0;
- (void)syncCoordinator:(id)a0 beginSyncSession:(id)a1;
- (id)pairedDeviceScreenScale;
- (void)_handlePairedDeviceChangedNotification:(id)a0;
- (void)reportInitialSyncDidFailWithError:(id)a0;
- (BOOL)willPresentNotificationForMessage:(id)a0;
- (id)_pairedNanoRegistryDevice;
- (id)_bbSubsectionIdsForMessage:(id)a0;
- (id)pairedDeviceScreenSize;
- (BOOL)pairedDeviceSupportsStandaloneMode;
- (void).cxx_destruct;
- (void)reportInitialSyncDidCompleteSending;
- (BOOL)pairedDeviceSupportsMailContentProtectedChannel;
- (void)_handleDidUnpairNotification:(id)a0;
- (id)pairingStorePath;
- (void)reportInitialSyncDidComplete;
- (BOOL)isInitialSyncRestricted;

@end
