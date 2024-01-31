@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface SafetyAlerts : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInterface;

- (id)init;
- (void)onSignificantEventDetected:(id)a0;
- (void)fetchIsSafetyAlertsEnabledOnQueue:(id)a0 withReply:(id /* block */)a1;
- (BOOL)isSafetyAlertsEnabledSync;
- (void)onUserTappedOnWeaWithInfo:(id)a0;
- (void)onNetworkConnectivityChanged:(id)a0;
- (BOOL)getIsSafetyAlertsEnabledFromReply:(id)a0;
- (void)onTestMessage:(id)a0;
- (void)onWeaReceived:(id)a0;

@end
