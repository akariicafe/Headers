@class NSUUID, NSString, HMDSnapshotFile, HMDNotificationRegistration, HMFMessageDispatcher, NSDictionary, NSObject, NSMapTable, HMDAccessory;
@protocol OS_dispatch_queue;

@interface HMDSnapshotSlotManager : HMFObject <HMFLogging> {
    NSMapTable *_filledSnapshotSlotIdentifiersByProcess;
    NSMapTable *_snapshotFilesByAssociatedProcessInfo;
    HMDAccessory *_accessory;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSString *_imageCacheDirectory;
    HMDNotificationRegistration *_notificationRegistration;
    HMDSnapshotFile *_mostRecentSnapshot;
}

@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSDictionary *encodedMostRecentSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)registerForMessages;
- (void)backboardServicesRelaunched:(id)a0;
- (id)createSlotForSnapshotFile:(id)a0 requestMessages:(id)a1 shouldNotifyClients:(BOOL)a2;
- (id)encodedMostRecentSnapshotForMessage:(id)a0;
- (void)handleFillSnapshotSlot:(id)a0;
- (void)handleProcessStateChange:(id)a0;
- (void)handleReleaseSnapshot:(id)a0;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 imageCacheDirectory:(id)a2 logID:(id)a3 uniqueIdentifier:(id)a4 msgDispatcher:(id)a5;

@end
