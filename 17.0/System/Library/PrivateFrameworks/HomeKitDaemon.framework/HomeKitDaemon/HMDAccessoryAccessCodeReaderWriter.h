@class NSString, HMDAccessCodeManagerContext;

@interface HMDAccessoryAccessCodeReaderWriter : HMFObject <HMFLogging>

@property (readonly) HMDAccessCodeManagerContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_accessCodeControlFromWriteResponses:(id)a0 forWriteRequest:(id)a1;
+ (id)_createListWriteRequestsForCharacteristics:(id)a0;
+ (id)_createReadWriteRequestsForAccessCodeIdentifiersByCharacteristic:(id)a0;
+ (id)accessCodeFetchResponsesForReadWriteResponses:(id)a0 ofWriteRequests:(id)a1;
+ (id)createConstraintsFromReadResponses:(id)a0 readRequests:(id)a1;
+ (id)createModificationResponsesForWriteResponses:(id)a0 ofRequestPairs:(id)a1;
+ (id)createWriteRequestForAddRequests:(id)a0 characteristic:(id)a1;
+ (id)createWriteRequestForRemoveRequests:(id)a0 characteristic:(id)a1;
+ (id)createWriteRequestForUpdateRequests:(id)a0 characteristic:(id)a1;
+ (id)createWriteRequestsForModificationRequests:(id)a0 hapAccessories:(id)a1;
+ (id)genericModificationResponseForFailedRequest:(id)a0;
+ (long long)hmPrivateErrorCodeForHAPAccessCodeError:(long long)a0;
+ (id)identifiersFromListWriteResponses:(id)a0 ofWriteRequests:(id)a1;
+ (id)modificationResponseForControlResponse:(id)a0 operationType:(long long)a1 accessoryUUID:(id)a2;
+ (id)modificationResponseForFailedMatterRequest:(id)a0 error:(id)a1;

- (id)initWithContext:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)_characteristicsOfType:(id)a0 fromAccessoriesWithUUIDs:(id)a1;
- (id)_createConstraintsReadRequestsForAccessoriesWithUUIDs:(id)a0;
- (id)_createListWriteRequestsForAccessoriesWithUUIDS:(id)a0;
- (id)_createModificationResponsesForWriteResponses:(id)a0 ofRequestPairs:(id)a1;
- (id)_createReadWriteRequestsForAccessCodeIdentifiers:(id)a0;
- (id)_createWriteRequestsForModificationRequests:(id)a0;
- (id)_fetchResponseFromCredentialUserTuples:(id)a0 accessory:(id)a1 doorLock:(id)a2;
- (id)_performReadRequests:(id)a0 withRetries:(BOOL)a1;
- (id)_performWriteRequests:(id)a0 withRetries:(BOOL)a1;
- (id)_readAccessCodeWithIdentifier:(id)a0 accessoryUUID:(id)a1;
- (id)_readAccessCodesFromAccessoriesWithUUIDs:(id)a0 withRetries:(BOOL)a1;
- (id)_readAccessCodesFromAccessoriesWithUUIDs_HAP:(id)a0 withRetries:(BOOL)a1;
- (id)_readAccessCodesFromAccessoriesWithUUIDs_Matter:(id)a0 withRetries:(BOOL)a1;
- (id)_readAccessCodesFromAccessory_Matter:(id)a0 withRetries:(BOOL)a1;
- (void)_readConstraintsAndAccessCodesFromAccessoriesWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (id)_readConstraintsFromAccessoriesWithUUIDs:(id)a0 withRetries:(BOOL)a1;
- (id)_readConstraintsFromAccessoriesWithUUIDs_HAP:(id)a0 withRetries:(BOOL)a1;
- (id)_readConstraintsFromAccessoriesWithUUIDs_Matter:(id)a0 withRetries:(BOOL)a1;
- (id)_readConstraintsFromAccessory_Matter:(id)a0 withRetries:(BOOL)a1;
- (id)performAccessCodeModificationRequests:(id)a0 withRetries:(BOOL)a1;
- (id)performAccessCodeModificationRequests_HAP:(id)a0 withRetries:(BOOL)a1;
- (id)performAccessCodeModificationRequests_Matter:(id)a0 withRetries:(BOOL)a1;
- (id)performModificationRequest_Matter:(id)a0;
- (id)readAccessCodeWithIdentifier:(id)a0 accessoryUUID:(id)a1;
- (id)readAccessCodesFromAccessoriesWithUUIDs:(id)a0;
- (void)readConstraintsAndAccessCodesFromAccessoriesWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (id)readConstraintsFromAccessoriesWithUUIDs:(id)a0;
- (id)removeAccessCodeWithValue_Matter:(id)a0 fromAccessory:(id)a1 withUserUUID:(id)a2 guestName:(id)a3;
- (id)removeAllAccessCodesWithValue:(id)a0 withUserUUID:(id)a1 guestName:(id)a2;
- (id)removeAllAccessCodesWithValue_HAP:(id)a0 withUserUUID:(id)a1 guestName:(id)a2;
- (id)removeAllAccessCodesWithValue_Matter:(id)a0 withUserUUID:(id)a1 guestName:(id)a2;

@end
