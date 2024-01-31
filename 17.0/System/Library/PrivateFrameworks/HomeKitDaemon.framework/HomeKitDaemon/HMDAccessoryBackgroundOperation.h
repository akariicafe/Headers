@class NSUUID, NSString;

@interface HMDAccessoryBackgroundOperation : HMDBackgroundOperation <HMFLogging>

@property (readonly, copy, nonatomic) NSUUID *accessoryUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy, nonatomic) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)persistent;
+ (id)logCategory;

- (id)logIdentifier;
- (id)attributeDescriptions;
- (unsigned long long)accessoryOperationStatus;
- (id)initWithAccessory:(id)a0 userData:(id)a1;
- (id)initWithAccessoryUUID:(id)a0 accessoryIdentifier:(id)a1 homeUUIDWhereAccessoryWasPaired:(id)a2 userData:(id)a3;
- (BOOL)isAccessoryOperation;

@end
