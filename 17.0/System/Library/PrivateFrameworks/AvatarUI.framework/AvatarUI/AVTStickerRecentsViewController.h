@class AVTUIStickerGeneratorPool, UICollectionView, NSObject, AVTStickerRecentsLayout, AVTStickerConfigurationProvider, AVTStickerRecentsOverlayView, AVTClippableImageStore, CALayer, AVTUIEnvironment, AVTStickerGenerator, UICollectionViewFlowLayout, NSString, AVTSerialTaskScheduler, NSArray, AVTStickerRecentsMigrator;
@protocol NSObject, OS_dispatch_queue, AVTResourceCache, AVTStickerRecentsItem, AVTStickerRecentsViewControllerDelegate, AVTAvatarStoreInternal, AVTAvatarRecord;

@interface AVTStickerRecentsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AVTStickerBackendDelegate, AVTStickerRecentsOverlayDelegate>

@property (retain, nonatomic) AVTStickerRecentsMigrator *stickerRecentsMigrator;
@property (retain, nonatomic) AVTStickerRecentsOverlayView *overlayView;
@property (retain, nonatomic) id<NSObject> avatarStoreChangeObserver;
@property (nonatomic) BOOL hasFetchedDefaultMemoji;
@property (retain, nonatomic) id<AVTAvatarRecord> defaultMemoji;
@property (retain, nonatomic) AVTClippableImageStore *imageStore;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) id<AVTAvatarStoreInternal> avatarStore;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) id<AVTResourceCache> cache;
@property (readonly, nonatomic) AVTStickerGenerator *stickerGenerator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recentsWorkQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *encodingQueue;
@property (retain, nonatomic) AVTStickerConfigurationProvider *configurationProvider;
@property (retain, nonatomic) AVTSerialTaskScheduler *taskScheduler;
@property (retain, nonatomic) AVTUIStickerGeneratorPool *generatorPool;
@property (readonly, nonatomic) AVTStickerRecentsLayout *stickerRecentsLayout;
@property (retain, nonatomic) id<AVTStickerRecentsItem> buttonItem;
@property (retain, nonatomic) NSArray *stickerItems;
@property (retain, nonatomic) NSArray *displayItems;
@property (nonatomic) BOOL showPrereleaseSticker;
@property (retain, nonatomic) CALayer *edgeMaskLayer;
@property (weak, nonatomic) id<AVTStickerRecentsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageStoreWithEnvironment:(id)a0;
+ (id)layoutForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)stickerCacheWithEnvironment:(id)a0;
+ (id)stickerForRecentItem:(id)a0;
+ (id)stickerRecentsController;
+ (id)stickerRecentsControllerForStore:(id)a0;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)placeholderItems;
- (void)updateItemSizeForContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)beginObservingAvatarStoreChanges;
- (void)buildRecentsItemsWithCompletionBlock:(id /* block */)a0;
- (void)determineOverlayTypeWithCompletionBlock:(id /* block */)a0;
- (void)dismissOverlayViewAnimated:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)endObservingAvatarStoreChanges;
- (void)fetchDefaultMemojiIfNeeded;
- (id)initWithAvatarStore:(id)a0 environment:(id)a1;
- (void)overlayDidTapCloseButton:(id)a0;
- (void)overlayDidTapContentView:(id)a0;
- (void)overlayDidTapContinueButton:(id)a0;
- (void)recentStickersDidChange:(id)a0;
- (id)recentStickersWithCount:(long long)a0;
- (void)setupRenderingDependentPieces;
- (void)updateDisplayItems;

@end
