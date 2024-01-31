@class NSString, SMSafetyMonitorManager;

@interface SMSafetyMonitorManagerExportedObject : NSObject <SMFrameworkProtocol>

@property (weak, nonatomic) SMSafetyMonitorManager *safetyMonitorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)onInitiatorSafetyCacheChangeForSessionID:(id)a0 phoneCache:(id)a1 watchCache:(id)a2 cacheExpiryDate:(id)a3 cacheReleaseDate:(id)a4;
- (void)onReceiverSafetyCacheChangeForSessionID:(id)a0 phoneCache:(id)a1 watchCache:(id)a2;
- (void)onReceiverSessionStatusChangeForSessionID:(id)a0 sessionStatus:(id)a1;
- (void)onSessionStateChanged:(id)a0 forActiveDevice:(BOOL)a1 withError:(id)a2;
- (id)initWithSafetyMonitorManager:(id)a0;

@end
