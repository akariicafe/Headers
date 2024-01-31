@class AFInstanceInfo;

@interface AFInstanceContextHost : AFInstanceContext {
    AFInstanceInfo *_info;
}

+ (id)effectiveMachServiceName:(id)a0;

- (BOOL)isCurrent;
- (BOOL)isDefault;
- (id)init;
- (BOOL)supportsTelephony;
- (id)mediaRouteIdentifier;
- (BOOL)supportsAudioPowerUpdate;
- (id)description;
- (id)createXPCListenerWithMachServiceName:(id)a0;
- (id)createXPCListenerForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)createXPCConnectionWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (id)info;
- (id)preferencesSubdomain;
- (id)createXPCConnectionForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (id)audioDeviceIdentifier;
- (BOOL)supportsProxyGroupPlayer;

@end
