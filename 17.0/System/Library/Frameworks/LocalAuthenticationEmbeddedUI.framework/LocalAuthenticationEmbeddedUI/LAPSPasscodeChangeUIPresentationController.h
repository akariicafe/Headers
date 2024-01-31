@class LAContainerViewController, UIViewController;

@interface LAPSPasscodeChangeUIPresentationController : NSObject {
    UIViewController *_parentVC;
    BOOL _parentModalInPresentationOriginalFlag;
    UIViewController *_rootVC;
    LAContainerViewController *_containerVC;
}

- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)presentAlertVC:(id)a0;
- (void)_restoreParentModalInPresentationFlag;
- (void)_storeParentModalInPresentationFlag;
- (id)initWithParentVC:(id)a0;
- (void)presentVC:(id)a0 animated:(BOOL)a1;

@end
