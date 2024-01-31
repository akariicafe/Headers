@class NSUUID, UIViewController;

@interface QLServiceViewController : UIViewController {
    BOOL _isAccessoryView;
}

@property (readonly) NSUUID *uuid;
@property (readonly, weak) UIViewController *mainViewController;

+ (id)_getServiceWithUUID:(id)a0;
+ (id)_serviceViewControllers;

- (id)init;
- (void).cxx_destruct;
- (void)_registerServiceViewController;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)a0;
- (void)invalidateService;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(id /* block */)a0;

@end
