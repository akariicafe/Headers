@class NSUUID, HMDHome;

@interface HMDUserMessagePolicy : HMFMessagePolicy <NSMutableCopying>

@property (readonly) NSUUID *homeUUID;
@property unsigned long long userPrivilege;
@property BOOL requiresRemoteAccess;
@property BOOL requiresCameraStreamingAccess;
@property (readonly, weak) HMDHome *home;

+ (id)userMessagePolicyWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(BOOL)a2;
+ (id)userMessagePolicyWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(BOOL)a2 requiresCameraStreamingAccess:(BOOL)a3;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__initWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(BOOL)a2 requiresCameraStreamingAccess:(BOOL)a3;

@end
