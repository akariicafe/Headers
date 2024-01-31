@class UIViewController, NSString, NSArray, WFActionUserInterfaceListener, UIView, WFAlert;

@interface WFConcreteUIKitUserInterface : NSObject <WFActionUserInterfaceDelegate, WFUIKitUserInterface>

@property (weak, nonatomic) WFAlert *presentedAlert;
@property (retain, nonatomic) WFActionUserInterfaceListener *actionUserInterfaceListener;
@property (retain, nonatomic) UIViewController *presentedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIViewController *viewController;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly, copy, nonatomic) NSArray *airPlayRouteIDs;
@property (readonly, nonatomic) long long executionContext;

- (void)dismissPresentedContentWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isRunningInSiri;
- (void)presentAlert:(id)a0;
- (void)requestActionInterfacePresentationForActionClassName:(id)a0 classNamesByType:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestAuthorizationWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)actionUserInterface:(id)a0 setSupportedInterfaceOrientations:(unsigned long long)a1;
- (void)actionUserInterface:(id)a0 showViewControllerInPlatter:(id)a1;
- (void)dismissPlatterForActionUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)presentationAnchorForActionUserInterface:(id)a0;
- (id)viewControllerForPresentingActionUserInterface:(id)a0;
- (id)initWithView:(id)a0 viewController:(id)a1;

@end
