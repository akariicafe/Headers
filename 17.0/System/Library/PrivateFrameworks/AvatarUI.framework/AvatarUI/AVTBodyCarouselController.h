@class AVTUIStickerGeneratorPool, UICollectionView, AVTZIndexEngagementListCollectionViewLayout, AVTRenderingScope, AVTCenteringCollectionViewDelegate, AVTStickerConfiguration, AVTAvatarListCell, UIView, NSString, AVTUIEnvironment, AVTTransitionCoordinator, AVTViewSession, AVTSerialTaskScheduler, NSArray, AVTUIStickerRenderer;
@protocol AVTUILogger, AVTPresenterDelegate, AVTViewCarouselLayout, AVTAvatarRecord;

@interface AVTBodyCarouselController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, AVTNotifyingContainerViewDelegate, AVTAvatarBodyPoseDisplayingController>

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AVTZIndexEngagementListCollectionViewLayout *collectionViewLayout;
@property (retain, nonatomic) AVTCenteringCollectionViewDelegate *centeringDelegate;
@property (retain, nonatomic) AVTViewSession *avtViewSession;
@property (retain, nonatomic) NSArray *configurations;
@property (retain, nonatomic) AVTUIStickerRenderer *renderer;
@property (retain, nonatomic) AVTSerialTaskScheduler *scheduler;
@property (retain, nonatomic) AVTUIStickerGeneratorPool *generatorPool;
@property (retain, nonatomic) id<AVTAvatarRecord> displayedRecord;
@property (retain, nonatomic) AVTAvatarListCell *liveCell;
@property (nonatomic) struct CGSize { double width; double height; } centerCellSize;
@property (readonly, nonatomic) AVTTransitionCoordinator *transitionCoordinator;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (retain, nonatomic) id<AVTViewCarouselLayout> avtViewLayout;
@property (nonatomic) double decelerationRate;
@property (readonly, nonatomic) AVTRenderingScope *renderingScope;
@property (retain, nonatomic) AVTStickerConfiguration *displayedConfiguration;
@property (nonatomic) BOOL isAnimatingExpansion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTPresenterDelegate> presenterDelegate;

+ (id)newCollectionViewLayoutForEngagedCellSize:(struct CGSize { double x0; double x1; })a0 boundsSize:(struct CGSize { double x0; double x1; })a1 environment:(id)a2;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)loadView;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)isViewLoaded;
- (id)indexPathForItemClosestToCenter;
- (void)buildCollectionViewAndConfigureLayoutIfNeeded;
- (id)cellForConfiguration:(id)a0;
- (id)configurationsForEditorPresentationContext:(unsigned long long)a0;
- (id)configureLayoutIfNeededWithHeight:(double)a0;
- (id)initWithEnvironment:(id)a0 avatarRecord:(id)a1;
- (id)initWithEnvironment:(id)a0 avatarRecord:(id)a1 editorPresentationContext:(unsigned long long)a2;
- (id)initWithEnvironment:(id)a0 initialAVTViewLayout:(id)a1 avatarRecord:(id)a2 editorPresentationContext:(unsigned long long)a3;
- (void)layoutDidChangeWhileMoving:(BOOL)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (void)notifyingContainerViewDidChangeSize:(struct CGSize { double x0; double x1; })a0;
- (void)notifyingContainerViewWillChangeSize:(struct CGSize { double x0; double x1; })a0;
- (void)prepareViewWithLayout:(id)a0;
- (void)reloadDisplayedSticker;
- (void)scrollToDisplayedConfiguration;
- (void)scrollToViewAtIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)scrollToViewForConfiguration:(id)a0 animated:(BOOL)a1;
- (void)setDisplayedConfigurationFromIndex:(unsigned long long)a0;
- (void)setStaticImageOnCell:(id)a0 forIndexPath:(id)a1;
- (BOOL)shouldCurrentlyDisplayedConfigurationTransitionToLive;
- (void)stopUsingAVTViewSessionSynchronously:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)transitionCell:(id)a0 indexPath:(id)a1 toStartFocusingAnimated:(BOOL)a2 session:(id)a3 completionHandler:(id /* block */)a4;
- (void)transitionCell:(id)a0 toStopFocusingAnimated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)transitionCenterCellIfPresentToStartFocusing;
- (void)transitionCenterCellIfPresentToStopFocusingAnimated:(BOOL)a0;
- (void)transitionCenterCellToStartFocusing:(id)a0 indexPath:(id)a1;
- (void)transitionCurrentDisplayedConfigurationAnimated:(BOOL)a0;
- (void)updateDisplayedConfigurationIfNeeded;
- (void)updateImageForStaticCellForIndexPath:(id)a0;
- (void)updateStickersforVisibleCells;
- (void)useAVTViewFromSession:(id)a0;

@end
