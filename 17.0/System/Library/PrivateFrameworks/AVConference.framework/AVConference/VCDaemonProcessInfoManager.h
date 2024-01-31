@class NSObject;
@protocol OS_dispatch_queue;

@interface VCDaemonProcessInfoManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

+ (id)sharedManager;
+ (id)copyProcessInfo;

- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)init;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)copyUniquePidInfo;
- (id)copyAuditTokenInfo;
- (void)deregisterBlocksForService;
- (void)registerBlocksForService;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
