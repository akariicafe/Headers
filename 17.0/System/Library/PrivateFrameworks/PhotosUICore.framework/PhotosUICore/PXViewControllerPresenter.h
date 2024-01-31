@class UINavigationController, NSString, UIView, NSObject, UIViewController;
@protocol PXAnonymousViewController, UIPopoverPresentationControllerSourceItem;

@interface PXViewControllerPresenter : NSObject <PXPresentationEnvironment>

@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) UIViewController *baseViewController;
@property (readonly, nonatomic) id<UIPopoverPresentationControllerSourceItem> sourceItem;
@property (readonly, nonatomic) UIView *sourceView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (readonly, nonatomic) NSObject<PXAnonymousViewController> *presentingViewController;
@property (readonly, nonatomic) BOOL canPushViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultPresenterWithViewController:(id)a0;
+ (id)popoverPresenterWithViewController:(id)a0 sourceItem:(id)a1;
+ (id)popoverPresenterWithViewController:(id)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

- (BOOL)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)dismissAlertWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissViewController:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithBaseViewController:(id)a0 sourceItem:(id)a1;
- (id)initWithBaseViewController:(id)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)presentAlertWithConfigurationHandler:(id /* block */)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)willPushViewController:(id)a0 inNavigationController:(id)a1 animated:(BOOL)a2;

@end
