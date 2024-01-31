@class NSString, UIViewController, _UIRemoteViewController;
@protocol FARemoteViewControllerDelegate;

@interface FARemoteViewController : _UIRemoteViewController <_UIRemoteViewControllerContaining, FARemoteViewControllerProtocol> {
    id /* block */ _completion;
    id /* block */ _presentationCompletion;
    UIViewController *_hostViewController;
    unsigned long long _ruiPresentationStyle;
}

@property (weak, nonatomic) id<FARemoteViewControllerDelegate> delegate;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithCompletion:(id /* block */)a0;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (id)_presentationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)operationFinishedWithResponse:(id)a0;
- (void)_notifyPresentationCompletion;
- (void)dismissAlertProxyWithCompletion:(id /* block */)a0;
- (void)presentAlertProxyWithCompletion:(id /* block */)a0;
- (void)presentWithRUIModalPresentationStyle:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)replaceModalRUIControllerWithStyle:(unsigned long long)a0 byController:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)startFlowWithContext:(id)a0 viewController:(id)a1 completion:(id /* block */)a2;

@end
