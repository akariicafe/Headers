@class NSString, NSSet, NSUUID, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCharacteristicThresholdRangeEvent : HMDCharacteristicEventBase <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (retain, nonatomic) NSNumber *min;
@property (retain, nonatomic) NSNumber *max;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createPayload;
- (BOOL)_evaluateNewValue:(id)a0;
- (void)_handleUpdateRequest:(id)a0;
- (BOOL)_isValueInRange:(id)a0;
- (void)_transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)_transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)analyticsTriggerEventData;
- (id)emptyModelObject;
- (id)initWithModel:(id)a0 home:(id)a1;
- (BOOL)isCompatibleWithEvent:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0;

@end
