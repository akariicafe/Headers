@class NSString;

@interface HMDXPCiCloudSwitchMessageFilter : HMFMessageFilter <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (long long)filterMessage:(id)a0 withPolicies:(id)a1 error:(id *)a2;
+ (BOOL)isThisClientAllowed:(id)a0;
+ (BOOL)isThisMessageAllowed:(id)a0;


@end
