@class NSString, NCNotificationDispatcher;

@interface SBUserAlertNotificationSource : NSObject <SBAlertItemsControllerObserver, NCNotificationSource, SBAlertItemPresenter>

@property (retain, nonatomic) NCNotificationDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)dismissAlertItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)presentAlertItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithDispatcher:(id)a0;
- (BOOL)canPresentMultipleAlertItemsSimultaneously;
- (void)alertItemsController:(id)a0 willActivateAlertItem:(id)a1;
- (void).cxx_destruct;
- (BOOL)presentsAlertItemsModally;
- (void)alertItemsController:(id)a0 didDeactivateAlertItem:(id)a1 forReason:(int)a2;
- (void)alertItemsController:(id)a0 didActivateAlertItem:(id)a1;

@end
