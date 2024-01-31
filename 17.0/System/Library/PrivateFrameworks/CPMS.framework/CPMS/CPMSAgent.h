@class NSString, NSSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CPMSAgent : NSObject <CPMSAgentProtocol> {
    unsigned int _ppmService;
    struct IONotificationPort { } *_notificationPort;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSSet *_timeScalesSet;
}

@property (retain) NSMutableSet *clientSet;
@property unsigned int connect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (BOOL)isCPMSSupportedForClient:(long long)a0;
+ (BOOL)isCPMSSupportedForAnyClient;
+ (id)sharedCPMSAgent;
+ (BOOL)isCPMSSupported;
+ (unsigned char)CPMSClientIdToPPMClientId:(long long)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)registerForNotifications;
- (BOOL)acknowledgePowerBudget:(id)a0 forClientId:(long long)a1 error:(id *)a2;
- (id)copyPowerBudgetForRequest:(id)a0 forClient:(long long)a1 error:(id *)a2;
- (BOOL)registerClientWithDescription:(id)a0 error:(id *)a1;
- (id)PPMIndexToCPMSPowerTimeScale:(char)a0;
- (char)CPMSPowerTimeScaleToPPMIndex:(id)a0;
- (id)copyDefaultPowerProfileForClient:(long long)a0 error:(id *)a1;
- (id)copyPowerBudgetForRequest:(id)a0 forClient:(long long)a1 withPowerProfile:(id)a2 error:(id *)a3;
- (BOOL)isClientIdValid:(long long)a0;
- (id)requestPowerBudget:(id)a0 forClient:(long long)a1 error:(id *)a2;
- (BOOL)sanityCheckClientDescription:(id)a0;

@end
