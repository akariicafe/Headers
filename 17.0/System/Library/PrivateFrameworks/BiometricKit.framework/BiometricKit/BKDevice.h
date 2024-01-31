@class NSString, BiometricKitXPCClient, BKDeviceDescriptor, NSObject;
@protocol BKDeviceDelegate, OS_dispatch_queue;

@interface BKDevice : NSObject <BiometricKitXPCClientDelegate, BiometricKitDelegateXpcProtocol> {
    BiometricKitXPCClient *_xpcClient;
}

@property (retain, nonatomic) BKDeviceDescriptor *descriptor;
@property (weak, nonatomic) id<BKDeviceDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)biometryAvailabilityInfo:(long long *)a0 fromDeviceInfo:(long long)a1 error:(id *)a2;
+ (BOOL)extendedLockoutState:(long long *)a0 fromDeviceLockoutState:(long long)a1 error:(id *)a2;
+ (BOOL)lockoutState:(long long *)a0 fromDeviceLockoutState:(long long)a1 error:(id *)a2;
+ (BOOL)deviceAvailableWithFailure:(BOOL *)a0;
+ (id)deviceWithDescriptor:(id)a0 error:(id *)a1;

- (void)statusMessage:(unsigned int)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)homeButtonPressed:(unsigned long long)a0;
- (void)connectionInterrupted;
- (id)dispatchQueue;
- (void)dealloc;
- (void)enrollUpdate:(id)a0 client:(unsigned long long)a1;
- (BOOL)isDelegate;
- (void)templateUpdate:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (id)createEnrollOperationWithError:(id *)a0;
- (void)taskResumeStatus:(int)a0 client:(unsigned long long)a1;
- (void)enrollFeedback:(id)a0 client:(unsigned long long)a1;
- (id)createMatchOperationWithError:(id *)a0;
- (void)matchResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)createPresenceDetectOperationWithError:(id *)a0;
- (void)enrollResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)touchIDButtonPressed:(BOOL)a0 client:(unsigned long long)a1;
- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (id)identitiesWithError:(id *)a0;
- (BOOL)bioLockoutState:(long long *)a0 forUser:(unsigned int)a1 error:(id *)a2;
- (id)maxIdentityCountWithError:(id *)a0;
- (BOOL)removeIdentity:(id)a0 error:(id *)a1;
- (BOOL)updateIdentity:(id)a0 error:(id *)a1;
- (BOOL)forceBioLockoutForUser:(unsigned int)a0 error:(id *)a1;
- (id)protectedConfigurationForUser:(unsigned int)a0 error:(id *)a1;
- (id)identitiesForUser:(unsigned int)a0 error:(id *)a1;
- (id)freeIdentityCountForUser:(unsigned int)a0 error:(id *)a1;
- (BOOL)expressModeState:(long long *)a0 forUser:(unsigned int)a1 error:(id *)a2;
- (id)accessoriesWithError:(id *)a0;
- (id)accessoryGroupsWithError:(id *)a0;
- (BOOL)biometryAvailability:(long long *)a0 forUser:(unsigned int)a1 error:(id *)a2;
- (id)connectedAccessoriesWithError:(id *)a0;
- (BOOL)deviceHardwareState:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)dropAllUnlockTokensWithError:(id *)a0;
- (id)effectiveProtectedConfigurationForUser:(unsigned int)a0 error:(id *)a1;
- (BOOL)extendedBioLockoutState:(long long *)a0 forUser:(unsigned int)a1 error:(id *)a2;
- (BOOL)forceBioLockoutForAllUsersWithError:(id *)a0;
- (BOOL)forceBioLockoutIfLockedForUser:(unsigned int)a0 error:(id *)a1;
- (id)freeIdentityCountForUser:(unsigned int)a0 accessoryGroup:(id)a1 error:(id *)a2;
- (id)identitiesDatabaseHashForUser:(unsigned int)a0 error:(id *)a1;
- (id)identitiesDatabaseUUIDForUser:(unsigned int)a0 error:(id *)a1;
- (id)identitiesForUser:(unsigned int)a0 accessoryGroup:(id)a1 error:(id *)a2;
- (id)identityForUUID:(id)a0 error:(id *)a1;
- (id)lastMatchEventWithError:(id *)a0;
- (void)removeAllIdentitiesForUser:(unsigned int)a0 async:(BOOL)a1 reply:(id /* block */)a2;
- (BOOL)removeAllIdentitiesForUser:(unsigned int)a0 error:(id *)a1;
- (void)removeAllIdentitiesForUser:(unsigned int)a0 reply:(id /* block */)a1;
- (void)removeIdentity:(id)a0 async:(BOOL)a1 reply:(id /* block */)a2;
- (void)removeIdentity:(id)a0 reply:(id /* block */)a1;
- (void)setProtectedConfiguration:(id)a0 forUser:(unsigned int)a1 credentialSet:(id)a2 async:(BOOL)a3 reply:(id /* block */)a4;
- (BOOL)setProtectedConfiguration:(id)a0 forUser:(unsigned int)a1 credentialSet:(id)a2 error:(id *)a3;
- (void)setProtectedConfiguration:(id)a0 forUser:(unsigned int)a1 credentialSet:(id)a2 reply:(id /* block */)a3;
- (void)setSystemProtectedConfiguration:(id)a0 credentialSet:(id)a1 async:(BOOL)a2 reply:(id /* block */)a3;
- (BOOL)setSystemProtectedConfiguration:(id)a0 credentialSet:(id)a1 error:(id *)a2;
- (void)setSystemProtectedConfiguration:(id)a0 credentialSet:(id)a1 reply:(id /* block */)a2;
- (id)systemProtectedConfigurationWithError:(id *)a0;
- (void)updateIdentity:(id)a0 async:(BOOL)a1 reply:(id /* block */)a2;
- (void)updateIdentity:(id)a0 reply:(id /* block */)a1;

@end
