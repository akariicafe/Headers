@class NSString, TRTransferBrowser, TRDeviceSetupPeripheral;
@protocol TRDeviceSetupBrowserDelegate;

@interface TRDeviceSetupBrowser : NSObject <TRTransferBrowserDelegate>

@property (retain, nonatomic) TRTransferBrowser *transferBrowser;
@property (retain, nonatomic) TRDeviceSetupPeripheral *peripheral;
@property (weak, nonatomic) id<TRDeviceSetupBrowserDelegate> delegate;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)defer;
- (void)start;
- (void)browser:(id)a0 didReceiveData:(id)a1 replyHandler:(id /* block */)a2;
- (void)stop;
- (void)browserDidChangeState:(id)a0;
- (void)browserDidDisconnect:(id)a0;
- (void).cxx_destruct;
- (void)browser:(id)a0 didStartTransferWithSendDataHandler:(id /* block */)a1;

@end
