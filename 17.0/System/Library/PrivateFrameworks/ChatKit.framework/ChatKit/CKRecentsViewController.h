@class MSStickerBrowserView, NSMutableDictionary, NSString, UILabel, NSMutableArray;

@interface CKRecentsViewController : CKBrowserViewController <MSStickerBrowserViewDataSource, CKBrowserDragControllerDelegate>

@property (nonatomic) BOOL hasHandwritingRecents;
@property (nonatomic) BOOL hasStickerRecents;
@property (retain, nonatomic) NSMutableArray *recentItems;
@property (retain, nonatomic) MSStickerBrowserView *browserView;
@property (retain, nonatomic) UILabel *noRecentsLabel;
@property (retain, nonatomic) NSMutableDictionary *stickerCache;
@property (nonatomic) BOOL isLoadingRecents;
@property (nonatomic, getter=isPreparingForDisplay) BOOL preparingForDisplay;
@property (copy, nonatomic) id /* block */ draggingCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)isLoaded;
- (void)loadView;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)_userInterfaceStyle;
- (void)_loadRecentHandwritingsAndStickersWithCompletion:(id /* block */)a0;
- (void)_postBrowserDidPrepareForDisplayNotificationIfNecessary;
- (id)_stickerForMSSticker:(id)a0;
- (void)didTransitionFromOrientation:(long long)a0 toOrientation:(long long)a1;
- (BOOL)dragManager:(id)a0 canPeelItem:(id)a1;
- (BOOL)dragManager:(id)a0 canRotateItem:(id)a1;
- (BOOL)dragManager:(id)a0 canScaleItem:(id)a1;
- (void)dragManager:(id)a0 didDragItem:(id)a1 toDragTarget:(id)a2;
- (void)dragManager:(id)a0 didEndDraggingItem:(id)a1 toDragTarget:(id)a2 dropArea:(int)a3;
- (BOOL)dragManager:(id)a0 shouldCancelDraggingForItem:(id)a1 toDragTarget:(id)a2 dropArea:(int)a3;
- (void)forceTearDownRemoteView;
- (id)initWithBalloonPlugin:(id)a0;
- (id)initWithBalloonPlugin:(id)a0 dataSource:(id)a1;
- (void)insertSticker:(id)a0 completionHandler:(id /* block */)a1;
- (void)insertSticker:(id)a0 forceStage:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)insertSticker:(id)a0 forceStage:(BOOL)a1 frameInScreenCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 completionHandler:(id /* block */)a3;
- (void)insertSticker:(id)a0 representations:(id)a1 completionHandler:(id /* block */)a2;
- (void)insertSticker:(id)a0 representations:(id)a1 forceStage:(BOOL)a2 frameInScreenCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 completionHandler:(id /* block */)a4;
- (void)loadRecents;
- (BOOL)mayBeKeptInViewHierarchy;
- (long long)numberOfStickersInStickerBrowserView:(id)a0;
- (void)recentsUpdated;
- (id)requestSnapshotDataForPersistance;
- (void)resortAndReloadRecents;
- (void)saveSnapshotForBrowserViewController;
- (void)setupNoRecentsLabel;
- (BOOL)shouldShowChatChrome;
- (void)startDragSticker:(id)a0 frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fence:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)stickerBrowserView:(id)a0 shouldDrawBorderAroundSticker:(id)a1;
- (id)stickerBrowserView:(id)a0 stickerAtIndex:(long long)a1;
- (void)stickerDragCanceled;
- (void)stickerDragMoved:(id)a0 frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotation:(double)a2 scale:(double)a3 fence:(id)a4 completionHandler:(id /* block */)a5;
- (void)stickerDruidDragEnded;
- (void)stickerDruidDragStarted;

@end
