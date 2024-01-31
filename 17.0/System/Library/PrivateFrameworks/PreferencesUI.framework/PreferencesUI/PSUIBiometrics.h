@class BKDevicePearl, BKDeviceTouchID;

@interface PSUIBiometrics : NSObject

@property (retain, nonatomic) BKDevicePearl *pearlDevice;
@property (retain, nonatomic) BKDeviceTouchID *touchIDDevice;

+ (id)sharedInstance;
+ (id)identities;

- (id)init;
- (void).cxx_destruct;
- (BOOL)removeIdentity:(id)a0;
- (BOOL)isPeriocularEnrollmentSupported;
- (id)deviceForType:(long long)a0;
- (long long)deviceTypeForIdentityType:(long long)a0;
- (id)identitiesForIdentityType:(long long)a0;
- (long long)maximumIdentityCountForIdentityType:(long long)a0;
- (id)nameForIdentity:(id)a0;
- (id)nextIdentityNameForIdentityType:(long long)a0;
- (BOOL)setName:(id)a0 forIdentity:(id)a1;
- (void)setName:(id)a0 forIdentity:(id)a1 completion:(id /* block */)a2;
- (void)removeIdentity:(id)a0 completion:(id /* block */)a1;

@end
