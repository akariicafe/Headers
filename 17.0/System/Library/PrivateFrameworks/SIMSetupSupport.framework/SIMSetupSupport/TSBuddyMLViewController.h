@class RemoteUIController, NSString, NSDictionary, CTPlan, NSMutableArray, CoreTelephonyClient;
@protocol TSSIMSetupFlowDelegate;

@interface TSBuddyMLViewController : SSUIViewController <RemoteUIControllerDelegate, TSSetupFlowItem> {
    NSMutableArray *_objectModels;
    NSString *_idNeedsEncryption;
    CoreTelephonyClient *_coreTelephonyClient;
    NSString *_mcc;
    NSString *_mnc;
    NSString *_gid1;
    NSString *_gid2;
    BOOL _inBuddy;
    BOOL _initialRequest;
}

@property (retain) CTPlan *plan;
@property (retain) NSString *buddyMLURL;
@property (retain) NSDictionary *postdata;
@property (retain) RemoteUIController *remoteUIController;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)remoteUIController:(id)a0 willPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (void).cxx_destruct;
- (void)remoteUIController:(id)a0 didFinishLoadWithError:(id)a1 forRequest:(id)a2;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (void)remoteUIController:(id)a0 didRemoveObjectModel:(id)a1;
- (void)remoteUIController:(id)a0 shouldLoadRequest:(id)a1 redirectResponse:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)prepare:(id /* block */)a0;
- (void)_configureRUIController;
- (void)_handlePlanAddition:(id)a0;
- (BOOL)_isActionDismissToCancelFlow:(id)a0;
- (void)_requestCipherText:(id)a0 completion:(id /* block */)a1;
- (void)_setUserInPurchaseFlow;
- (id)initWithCTPlan:(id)a0 inBuddy:(BOOL)a1;
- (id)initWithCTPlan:(id)a0 websheetURL:(id)a1 postdata:(id)a2;

@end
