@class HMSoftwareUpdate, NSUUID, _HMContext, HMAccessory, NSString, NSObject;
@protocol OS_dispatch_queue, HMSoftwareUpdateControllerDelegate;

@interface HMSoftwareUpdateController : NSObject <HMFMessageReceiver, HMObjectMerge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) _HMContext *context;
@property (weak) HMAccessory *accessory;
@property (retain) HMSoftwareUpdate *availableUpdate;
@property (readonly, getter=isControllable) BOOL controllable;
@property (weak) id<HMSoftwareUpdateControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)namespace;
+ (id)logCategory;

- (id)init;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)messageDestination;
- (BOOL)isEqual:(id)a0;
- (void)configureWithContext:(id)a0 accessory:(id)a1;
- (void)changeUpdateSource:(long long)a0 path:(id)a1 documentationPath:(id)a2 userInitiatedStaging:(BOOL)a3 completion:(id /* block */)a4;
- (void)fetchAvailableUpdateWithCompletionHandler:(id /* block */)a0;
- (id)initWithAccessory:(id)a0;
- (BOOL)mergeFromNewObject:(id)a0;
- (void)removeStagedSoftwareUpdate:(id /* block */)a0;
- (void)startUpdate:(id)a0 completionHandler:(id /* block */)a1;

@end
