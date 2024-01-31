@class NSUUID, CLRegion, NSString;

@interface HMDLocationEvent : HMDEvent <HMDLocationDelegate, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CLRegion *region;
@property (readonly, copy, nonatomic) CLRegion *uniqueRegion;
@property (retain, nonatomic) NSUUID *userUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)dumpState;
- (void).cxx_destruct;
- (BOOL)isActive;
- (id)initWithCoder:(id)a0;
- (void)_registerForMessages;
- (id)createPayload;
- (void)checkFMFStatus:(id)a0;
- (void)didEnterRegion:(id)a0;
- (BOOL)_activate:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_handleLocationEventOccured:(id)a0;
- (void)_handleRetrieveLocationEventForEventTrigger:(id)a0;
- (void)_handleUpdateRequest:(id)a0;
- (void)_transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)_transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)analyticsTriggerEventData;
- (void)didExitRegion:(id)a0;
- (BOOL)doesThisTargetCurrentUser;
- (id)emptyModelObject;
- (void)fmfStatusUpdateNotification:(id)a0;
- (void)informLocationEventOccuranceToResident;
- (id)initWithModel:(id)a0 home:(id)a1;
- (BOOL)isCompatibleWithEvent:(id)a0;
- (void)locationEventOccured;
- (id)modelObjectWithChangeType:(unsigned long long)a0;

@end
