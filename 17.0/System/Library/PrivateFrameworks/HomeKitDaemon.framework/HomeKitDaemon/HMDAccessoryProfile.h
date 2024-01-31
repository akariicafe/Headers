@class NSUUID, NSString, NSArray, NSDate, NSSet, HMFMessageDispatcher, NSObject, HMDAccessory;
@protocol OS_dispatch_queue;

@interface HMDAccessoryProfile : HMFObject <HMDBulletinIdentifiers, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {
    long long _rateLimitCount;
    NSDate *_rateLimitStartTime;
}

@property (class, readonly) BOOL hasMessageReceiverChildren;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contextID;
@property (readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property (readonly) NSString *logIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, weak) HMDAccessory *accessory;
@property (readonly, nonatomic) NSArray *services;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)dumpState;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)registerForMessages;
- (void)unconfigure;
- (void)removeCloudData;
- (void)configureWithMessageDispatcher:(id)a0 configurationTracker:(id)a1;
- (id)findServiceWithType:(id)a0;
- (void)handleInitialState;
- (id)initWithAccessory:(id)a0 uniqueIdentifier:(id)a1 services:(id)a2;
- (id)initWithAccessory:(id)a0 uniqueIdentifier:(id)a1 services:(id)a2 workQueue:(id)a3;
- (BOOL)rateLimit:(double)a0 threshold:(long long)a1;
- (id)runtimeState;

@end
