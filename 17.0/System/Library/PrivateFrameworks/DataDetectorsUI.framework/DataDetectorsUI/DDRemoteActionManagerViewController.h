@class DDRemoteActionHostViewController, NSString, UIView, UINavigationController, NSExtension, NSDate, DDRemoteAction, NSLayoutConstraint;
@protocol DDRemoteActionViewServiceProtocol, NSCopying;

@interface DDRemoteActionManagerViewController : UIViewController <DDRemoteActionHostViewControllerDelegate> {
    DDRemoteActionHostViewController *_remoteViewController;
    id<DDRemoteActionViewServiceProtocol> _serviceContext;
    UIView *_loadingView;
    UIView *_errorView;
    UIView *_titleBar;
    NSLayoutConstraint *_titleBarBottomConstraint;
    NSLayoutConstraint *_navControllerTopConstraint;
    UIView *_hitView;
    UINavigationController *_navigationController;
    NSDate *_loadingDate;
    BOOL _loaded;
    BOOL _displayed;
    BOOL _shouldDeferPresenting;
    NSString *_platterTitle;
    struct CGSize { double width; double height; } _preferredContentSize;
    DDRemoteActionManagerViewController *_strongSelf;
}

@property (weak) DDRemoteAction *action;
@property (retain) NSExtension *extension;
@property (retain) id<NSCopying> request;
@property (nonatomic) BOOL previewMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAction:(id)a0;
- (id)doneButton;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dismissViewController;
- (void)showLoadingView;
- (void)DDRemoteActionDidTerminateWithError:(id)a0;
- (void)addHitOverlay;
- (id)controllerVerticalMargin;
- (id)emptyViewcontroller;
- (void)loadNavigationControllerIfNeeded;
- (void)loadRemoteAction;
- (void)loadTitleBarIfNeeded;
- (void)presentRemoteViewController;
- (void)removeLoadingViewToShowView:(id)a0;
- (void)showErrorView;
- (void)showRemoteController;
- (void)unloadRemoteAction;
- (void)updatePreviewMode;

@end
