@class NSString, NSTimer, CoreTelephonyClient, UIViewController;
@protocol PRXCardContentProviding;

@interface TSIDSTransferFlow : TSSIMSetupFlow <CoreTelephonyClientCellularPlanManagementDelegate, TSSIMSetupFlowDelegate> {
    NSTimer *_transferringWatchDogTimer;
}

@property (retain) UIViewController<PRXCardContentProviding> *secureIntentProxCard;
@property (retain, nonatomic) CoreTelephonyClient *client;
@property BOOL isWebsheetFlow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)launchSecureIntentUI:(id)a0 isLocalConvertFlow:(BOOL)a1 completion:(id /* block */)a2;
- (void)transferEventUpdate:(id)a0;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)a0;
- (void)handleTransferringWatchdogExpiry;
- (id)nextViewControllerFrom:(id)a0;

@end
