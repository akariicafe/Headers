@class BCSNotificationServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface BCSNFCReaderConnection : NSObject {
    BCSNotificationServiceConnection *_notificationServiceConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)disconnect;
- (id)init;
- (void)checkHardwareSupportStateWithCompletionHandler:(id /* block */)a0;
- (long long)_hardwareSupportState;
- (BOOL)_needsRadioEnabledCheck;
- (void)stopReaderWithErrorHandler:(id /* block */)a0;
- (void)checkNFCEnabledWithCompletionHandler:(id /* block */)a0;
- (BOOL)_isNFCEnabled;
- (void)enableNFCWithCompletionHandler:(id /* block */)a0;
- (BOOL)_enableNFC;
- (void)startReaderWithDelegate:(id)a0 errorHandler:(id /* block */)a1 interruptionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
