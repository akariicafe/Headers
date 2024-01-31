@class _HMCameraProfile, _HMContext, NSUUID, NSString, NSObject, HMHome;
@protocol OS_dispatch_queue;

@interface _HMCameraControl : NSObject <HMFLogging, HMFMessageReceiver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) _HMContext *context;
@property (weak) _HMCameraProfile *cameraProfile;
@property (readonly, copy) NSUUID *profileUniqueIdentifier;
@property (weak) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)_registerNotificationHandlers;
- (id)initWithCameraProfile:(id)a0 profileUniqueIdentifier:(id)a1;

@end
