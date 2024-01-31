@class NSSet, HMFMessageDispatcher, NSUUID, HMDHome, HMDEventTrigger, NSObject, NSString;
@protocol OS_dispatch_queue, HMDEventDelegate;

@interface HMDEvent : HMFObject <NSSecureCoding, HMFDumpState, HMDHomeMessageReceiver, HMFLogging, HMDBackingStoreObjectProtocol>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (weak, nonatomic) id<HMDEventDelegate> delegate;
@property (weak, nonatomic) HMDHome *home;
@property (weak, nonatomic) HMDEventTrigger *eventTrigger;
@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *triggerType;
@property (retain, nonatomic) NSString *logString;
@property (readonly, nonatomic, getter=isEndEvent) BOOL endEvent;
@property (nonatomic) unsigned long long activationType;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isConfigured) BOOL configured;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)_setup;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (id)dumpState;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_registerForMessages;
- (void)_updateTriggerType;
- (id)createPayload;
- (BOOL)_activate:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_handleUpdateRequest:(id)a0;
- (void)_transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)_transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)analyticsTriggerEventData;
- (void)configure:(id)a0 messageDispatcher:(id)a1 queue:(id)a2 delegate:(id)a3;
- (id)emptyModelObject;
- (id)initWithModel:(id)a0 home:(id)a1;
- (BOOL)isCompatibleWithEvent:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;

@end
