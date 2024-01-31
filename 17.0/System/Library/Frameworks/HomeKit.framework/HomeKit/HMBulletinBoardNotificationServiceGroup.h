@class NSObject, NSSet, _HMContext, NSArray, NSUUID, NSString, HMBulletinBoardNotification;
@protocol OS_dispatch_queue;

@interface HMBulletinBoardNotificationServiceGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (retain, nonatomic) NSSet *cameraProfileUUIDs;
@property (retain, nonatomic) NSSet *associatedServiceUUIDs;
@property (retain, nonatomic) NSArray *cameraProfiles;
@property (retain, nonatomic) NSArray *associatedServices;
@property (readonly, copy, nonatomic) NSUUID *targetUUID;
@property (readonly, copy, nonatomic) NSString *logID;
@property (readonly, weak, nonatomic) HMBulletinBoardNotification *bulletinBoardNotification;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (void)_unconfigure;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_handleBulletinBoardNotificationServiceGroupUpdateNotification:(id)a0;
- (void)__configureWithContext:(id)a0;
- (void)_callServiceGroupUpdate;
- (void)_findObjects;
- (void)_registerNotificationHandlers;
- (void)_requestServiceGroup;
- (void)_unconfigureContext;
- (void)handleConfigureNotification:(id)a0;
- (BOOL)mergeFromNewObject:(id)a0;

@end
