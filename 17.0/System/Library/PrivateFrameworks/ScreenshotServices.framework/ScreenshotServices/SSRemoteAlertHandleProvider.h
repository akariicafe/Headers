@class NSString, SBSRemoteAlertHandle;
@protocol SSRemoteAlertHandleProviderDelegate;

@interface SSRemoteAlertHandleProvider : NSObject <SBSRemoteAlertHandleObserver> {
    SBSRemoteAlertHandle *_handle;
}

@property (readonly, nonatomic) BOOL isActive;
@property (weak, nonatomic) id<SSRemoteAlertHandleProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (id)init;
- (void)preheat;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)prepare;
- (void)_callDelegate:(id /* block */)a0;
- (id)_screenshotServicesServiceAlertDefinition;
- (id)screenshotServicesAlertHandle;

@end
