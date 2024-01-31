@class NSString, _LAAuthenticationBiometricMethodShim, BKDeviceDescriptor, BKDevice;

@interface _LABKDevice : NSObject <BKDeviceDelegate>

@property (readonly, nonatomic) BKDevice *_BKDevice;
@property (readonly, nonatomic) BKDeviceDescriptor *descriptor;
@property (readonly, nonatomic) _LAAuthenticationBiometricMethodShim *shim;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceWithDescriptor:(id)a0 error:(id *)a1;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)createMatchOperationWithError:(id *)a0;
- (void).cxx_destruct;
- (id)createPresenceDetectOperationWithError:(id *)a0;
- (id)identitiesWithError:(id *)a0;
- (BOOL)bioLockoutState:(long long *)a0 forUser:(unsigned int)a1 error:(id *)a2;
- (BOOL)extendedBioLockoutState:(long long *)a0 forUser:(unsigned int)a1 error:(id *)a2;
- (id)initWithDescriptor:(id)a0 error:(id *)a1;

@end
