@class NSUUID, HMDService, NSString, NSPredicate, HMFMessageDispatcher, NSObject, HMDBulletinBoardNotificationServiceGroup, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDBulletinBoardNotification : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly) HMDHome *home;
@property (weak, nonatomic) HMDService *service;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) NSPredicate *condition;
@property (retain, nonatomic) HMDBulletinBoardNotificationServiceGroup *notificationServiceGroup;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)supportsBulletinNotificationGroup:(id)a0;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)dumpState;
- (id)initWithService:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithCoder:(id)a0;
- (void)_handleBulletinBoardNotificationCommitRequest:(id)a0;
- (void)_updateLocalSettingsWithEnabled:(BOOL)a0 condition:(id)a1 forMessage:(id)a2;
- (void)configureBulletinNotification;
- (void)configureWithWorkQueue:(id)a0 messageDispatcher:(id)a1;
- (void)registerNotificationHandlers;
- (void)_updateAccessoryBulletinNotificationManagerWithEnabled:(BOOL)a0 condition:(id)a1 completion:(id /* block */)a2;
- (id)initWithService:(id)a0 enabled:(BOOL)a1 condition:(id)a2;
- (void)updateRegistrations;

@end
