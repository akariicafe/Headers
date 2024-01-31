@class RemoteUIController, NSSet, NSString, RUIServerHookHandler, ACAccount, UIViewController;
@protocol ICQUIRemoteUIPresenterDelegate;

@interface ICQUIRemoteUIPresenter : NSObject <RemoteUIControllerDelegate, ICQServerHookDelegate> {
    ACAccount *_account;
    UIViewController *_presenter;
    RemoteUIController *_ruiController;
    RUIServerHookHandler *_serverHookHandler;
    NSString *_closeURL;
}

@property (retain, nonatomic) NSSet *dataclasses;
@property (weak, nonatomic) id<ICQUIRemoteUIPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)remoteUIController:(id)a0 shouldLoadRequest:(id)a1 redirectResponse:(id)a2;
- (void)remoteUIController:(id)a0 didDismissModalNavigationWithObjectModels:(id)a1;
- (void)remoteUIController:(id)a0 didFinishLoadWithError:(id)a1 forRequest:(id)a2;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (void)objectModel:(id)a0 configureTableRow:(id)a1 page:(id)a2;
- (void)objectModelDidChange:(id)a0;
- (void)_attachServerHooks;
- (void)_configureTableRow:(id)a0 withDataclass:(id)a1;
- (void)_processObjectModel:(id)a0;
- (void)_processTableRow:(id)a0;
- (void)beginRUIFlowWithRequest:(id)a0;
- (void)beginRUIFlowWithURL:(id)a0;
- (void)dismissUpgradeFlowWithSuccess:(BOOL)a0;
- (id)initWithAccount:(id)a0 presenter:(id)a1;
- (BOOL)isLiftUIFlow;

@end
