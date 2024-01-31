@class NSString, NSObject;
@protocol OS_os_log;

@interface HMDDeviceSetupClientSession : HMDDeviceSetupSessionInternal <HMFLogging> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedClasses;
+ (long long)role;
+ (BOOL)isSupported;
+ (id)logCategory;

- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)processSessionData:(id)a0 fromBundle:(id)a1 outAccessoryUUID:(id *)a2 outAccessoryIDSIdentifier:(id *)a3 error:(id *)a4;

@end
