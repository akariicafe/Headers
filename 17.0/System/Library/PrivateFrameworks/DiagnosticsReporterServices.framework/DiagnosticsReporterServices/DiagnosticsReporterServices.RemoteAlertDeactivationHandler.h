@interface DiagnosticsReporterServices.RemoteAlertDeactivationHandler : NSObject <SBSRemoteAlertHandleObserver> {
    void /* unknown type, empty encoding */ completion;
}

- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;

@end
