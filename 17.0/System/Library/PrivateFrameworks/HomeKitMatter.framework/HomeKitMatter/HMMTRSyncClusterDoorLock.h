@class MTRBaseDevice, NSString, MTRDevice, HMFFuture, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRSyncClusterDoorLock : MTRClusterDoorLock <HMFLogging>

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) MTRDevice *device;
@property (retain) MTRBaseDevice *baseDevice;
@property unsigned short endpoint;
@property (retain) HMFFuture *apiSerializationFuture;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } unfairLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)doorLockFeatureMapSupportsPinCodes:(id)a0;
+ (id)colorFromAttributeResponse:(id)a0;
+ (id)deriveHomePinFromUUID:(id)a0 withNumberOfDigits:(long long)a1 flow:(id)a2;
+ (id)numberFromAttributeResponse:(id)a0;
+ (id)pinDataWithDigits:(id)a0;
+ (id)productFinishFromAttributeResponse:(id)a0;
+ (id)valueFromAttributeResponse:(id)a0;
+ (id)valueFromDictionaryWithData:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)serialize:(id /* block */)a0;
- (id)addDeviceCredentialKeyData:(id)a0 forUserIndex:(long long)a1 flow:(id)a2;
- (id)addIssuerKeyData:(id)a0 forUserIndex:(long long)a1 flow:(id)a2;
- (id)addOrUpdatePinCodeWithValue:(id)a0 forUserIndex:(long long)a1;
- (id)addOrUpdateReaderKeyData:(id)a0 flow:(id)a1;
- (id)clearCredentialAtIndex:(long long)a0 withCredentialType:(id)a1 flow:(id)a2;
- (id)clearUserAtIndex:(long long)a0 flow:(id)a1;
- (id)fetchAccessoryColor_flow:(id)a0;
- (id)getAllPinCodes;
- (id)getAllUsers;
- (id)getUsersWithUniqueIDs:(id)a0 flow:(id)a1;
- (id)removePinCodeForUserIndex:(long long)a0;
- (id)findOrAddUserWithUniqueID:(id)a0 flow:(id)a1;
- (id)fetchAccessorySupportsPinCodes;
- (id)fetchAccessorySupportsTapToUnlock;
- (id)fetchCurrentFabricIndex;
- (id)findUserOrAvailableSlotWithUserUniqueID:(id)a0 flow:(id)a1;
- (id)getUserAtIndex:(long long)a0 flow:(id)a1;
- (id)removeUserWithUniqueID:(id)a0;
- (id)fetchFeatureMap;
- (id)_findUserOrAvailableSlotWithUserUniqueID:(id)a0 flow:(id)a1;
- (id)_getUserAtIndex:(long long)a0 flow:(id)a1;
- (id)_removeUserWithUniqueID:(id)a0 flow:(id)a1;
- (BOOL)accessoryHasCOTAEnabled;
- (id)addCredentialData:(id)a0 forCredentialType:(id)a1 atIndex:(long long)a2 forUserAtUserIndex:(long long)a3 flow:(id)a4;
- (id)addPinCodeWithValue:(id)a0 forUserIndex:(long long)a1 flow:(id)a2;
- (id)addPinCredentialAtIndex:(long long)a0 withValue:(id)a1 forUserAtUserIndex:(long long)a2 flow:(id)a3;
- (id)addReaderKeyData:(id)a0 flow:(id)a1;
- (id)addUserAtUserIndex:(long long)a0 withUserUniqueID:(long long)a1 isRemote:(BOOL)a2 flow:(id)a3;
- (id)deriveHomePinFromUUID:(id)a0 flow:(id)a1;
- (id)fetchCurrentFabricIndex_flow:(id)a0;
- (id)findAllUsersWithCreatorFabricIndex:(id)a0 indexStartingAtSlot:(long long)a1 assumingTotalNumberOfSlots:(long long)a2 users:(id)a3 flow:(id)a4;
- (id)findAvailableCredentialIndexStartingAtSlot:(long long)a0 forCredentialType:(long long)a1 assumingTotalNumberOfSlots:(long long)a2 flow:(id)a3;
- (id)findHomeUserWithUniqueID:(id)a0 indexStartingAtSlot:(long long)a1 assumingTotalNumberOfSlots:(long long)a2 availableSlots:(id)a3 currentFabricIndex:(id)a4 flow:(id)a5;
- (id)findOrAddUserWithUniqueID:(id)a0 isRemote:(BOOL)a1 flow:(id)a2;
- (id)firstAvailableCredentialSlotForCredentialType:(long long)a0 flow:(id)a1;
- (id)getAllCredentialsIndexStartingAtSlot:(long long)a0 forCredentialType:(long long)a1 credentials:(id)a2 flow:(id)a3;
- (id)getAllUsersStartingAtSlot:(long long)a0 assumingTotalNumberOfSlots:(long long)a1 users:(id)a2 flow:(id)a3;
- (id)getCredentialAtIndex:(long long)a0 forCredentialType:(long long)a1 flow:(id)a2;
- (id)initWithDevice:(id)a0 baseDevice:(id)a1 endpoint:(unsigned short)a2 queue:(id)a3;
- (void)lockDoorWithAccessoryUUID:(id)a0 completionHandler:(id /* block */)a1;
- (id)lockWithPin:(id)a0 flow:(id)a1;
- (id)lock_flow:(id)a0;
- (id)pinCredentialForUser:(id)a0 flow:(id)a1;
- (id)provisionHomePin:(id)a0 flow:(id)a1;
- (id)readAttributeLockTargetStateWithParams:(id)a0;
- (id)removeHomeUser;
- (id)rfidCredentialForUser:(id)a0 flow:(id)a1;
- (long long)totalNumberOfPINCredentialsSupported_flow:(id)a0;
- (long long)totalNumberOfRFIDCredentialsSupported_flow:(id)a0;
- (id)totalNumberOfUsersSupported_flow:(id)a0;
- (void)unlockDoorWithAccessoryUUID:(id)a0 completionHandler:(id /* block */)a1;
- (id)unlockWithPin:(id)a0 flow:(id)a1;
- (id)unlock_flow:(id)a0;
- (id)updateCredentialData:(id)a0 forCredentialType:(id)a1 atIndex:(long long)a2 forUserAtUserIndex:(long long)a3 flow:(id)a4;
- (id)updatePinCredentialAtIndex:(long long)a0 withValue:(id)a1 forUserAtUserIndex:(long long)a2 flow:(id)a3;

@end
