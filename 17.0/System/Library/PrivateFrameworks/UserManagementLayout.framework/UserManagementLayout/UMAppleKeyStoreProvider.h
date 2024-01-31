@interface UMAppleKeyStoreProvider : NSObject <UMAppleKeyStoreProviding>

@property (nonatomic) BOOL ignoreIdentityMethods;

- (BOOL)loadIdentity:(id)a0 intoSession:(unsigned int)a1 error:(id *)a2;
- (BOOL)addPersonaWithUUID:(id)a0 toSession:(unsigned int)a1 passcode:(id)a2 error:(id *)a3;
- (BOOL)bootstrapVolumeWithMountPoint:(id)a0 user:(unsigned int)a1 error:(id *)a2;
- (BOOL)createIdentityWithUUID:(id)a0 passcode:(id)a1 existingSession:(unsigned int)a2 existingSessionPasscode:(id)a3 error:(id *)a4;
- (id)dataUnwrappingDataWithDeviceClassF:(id)a0 error:(id *)a1;
- (id)dataWrappingDataWithDeviceClassF:(id)a0 error:(id *)a1;
- (BOOL)deleteIdentity:(id)a0 error:(id *)a1;
- (BOOL)deletePersonaWithUUID:(id)a0 fromSession:(unsigned int)a1 error:(id *)a2;
- (BOOL)isIdentityLoadedIntoSession:(unsigned int)a0;
- (BOOL)loginIdentity:(id)a0 intoSession:(unsigned int)a1 passcode:(id)a2 error:(id *)a3;
- (BOOL)mapVolume:(id)a0 toSession:(unsigned int)a1 withPersona:(id)a2 error:(id *)a3;
- (BOOL)unloadIdentityFromSession:(unsigned int)a0 error:(id *)a1;
- (BOOL)unlockIdentityInSession:(unsigned int)a0 passcode:(id)a1 error:(id *)a2;
- (BOOL)unmapVolume:(id)a0 error:(id *)a1;

@end
