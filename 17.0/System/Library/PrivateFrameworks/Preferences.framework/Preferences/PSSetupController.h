@class NSDictionary, UIViewController, PSRootController;
@protocol PSController;

@interface PSSetupController : PSRootController {
    NSDictionary *_rootInfo;
    UIViewController<PSController> *_parentController;
    PSRootController *_parentRootController;
}

- (id)controller;
- (void)dismiss;
- (id)init;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dismissAnimated:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)handleURL:(id)a0;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)setParentController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)parentController;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)setupController;
- (void)popControllerOnParent;
- (BOOL)popupStyleIsModal;
- (void)pushControllerOnParentWithSpecifier:(id)a0;
- (void)statusBarWillChangeHeight:(id)a0;
- (BOOL)usePopupStyle;

@end
