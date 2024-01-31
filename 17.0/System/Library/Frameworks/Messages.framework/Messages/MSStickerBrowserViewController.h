@class MSStickerBrowserView, NSString;

@interface MSStickerBrowserViewController : UIViewController <MSRootViewControllerProtocol, MSStickerBrowserViewDataSource>

@property (retain, nonatomic) MSStickerBrowserView *stickerBrowserView;
@property (nonatomic) BOOL viewHasAppeared;
@property (readonly, nonatomic) long long stickerSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrameBeforeAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (long long)numberOfStickersInStickerBrowserView:(id)a0;
- (id)stickerBrowserView:(id)a0 stickerAtIndex:(long long)a1;
- (void)enableUserInteraction;
- (void)didTransitionToPresentationStyle:(unsigned long long)a0;
- (void)disableUserInteraction;
- (void)generateSnapshotWithContentSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)initWithStickerSize:(long long)a0;
- (void)updateSnapshotWithCompletionBlock:(id /* block */)a0;
- (void)willTransitionToPresentationStyle:(unsigned long long)a0;

@end
