@class HMFActivity, HMDUser, HMDHome, NSNumber, HMFMessage;

@interface HMDHAPAccessoryTaskContext : NSObject

@property (readonly) NSNumber *identifier;
@property (readonly) long long operationType;
@property (readonly, weak) HMDHome *home;
@property (readonly) HMFMessage *requestMessage;
@property (readonly) unsigned long long sourceType;
@property (retain, nonatomic) HMFActivity *activity;
@property (readonly) HMDUser *user;
@property (readonly) BOOL supportsMultiPartResponse;

- (BOOL)isComplete;
- (long long)qualityOfService;
- (id)clientBundleIdentifier;
- (id)workQueue;
- (id)operationName;
- (void).cxx_destruct;
- (id)homeUniqueIdentifier;
- (void)dispatchMessage:(id)a0 delegateDevice:(id)a1;
- (id)homeMessageDestination;
- (id)initWithIdentifier:(id)a0 operationType:(long long)a1 home:(id)a2 sourceType:(unsigned long long)a3 requestMessage:(id)a4 name:(id)a5;
- (BOOL)isRemoteAccessDeviceReachable;
- (BOOL)isShortActionOperation;
- (id)requestMessageIdentifier;
- (id)requestMessageName;
- (id)residentMapForAccessories:(id)a0;

@end
