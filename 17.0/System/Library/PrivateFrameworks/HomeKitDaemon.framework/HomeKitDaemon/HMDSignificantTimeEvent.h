@class NSString, NSSet, NSUUID, NSDateComponents, NSObject;
@protocol OS_dispatch_queue;

@interface HMDSignificantTimeEvent : HMDTimeEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (retain) NSString *significantEvent;
@property (retain) NSDateComponents *offset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)nextTimerDateFromHomeLocation:(id)a0 signifiantEvent:(id)a1 offset:(id)a2 loggingObject:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createPayload;
- (void)_handleUpdateRequest:(id)a0;
- (id)_nextTimerDate;
- (void)_transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)_transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)analyticsTriggerEventData;
- (id)emptyModelObject;
- (id)initWithModel:(id)a0 home:(id)a1;
- (BOOL)isCompatibleWithEvent:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0;

@end
