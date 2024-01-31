@class CSDeviceUnblockPolicyEnvironment;

@interface CSDeviceUnblockPolicy : NSObject {
    CSDeviceUnblockPolicyEnvironment *_env;
}

- (id)initWithEnvironment:(id)a0;
- (void).cxx_destruct;
- (BOOL)canUnblockDevice;
- (BOOL)canUnblockDeviceUsingErase;
- (BOOL)canUnblockDeviceUsingRecovery;

@end
