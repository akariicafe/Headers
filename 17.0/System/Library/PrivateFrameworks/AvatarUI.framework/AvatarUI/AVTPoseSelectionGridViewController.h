@class UIView, UIColor, NSArray, UICollectionViewFlowLayout, UIImage, NSString, NSObject, UICollectionView, AVTUIStickerRenderer, AVTUIStickerGeneratorPool, AVTStickerConfiguration;
@protocol AVTPoseSelectionGridViewControllerDelegate, AVTTaskScheduler, OS_dispatch_queue, AVTAvatarRecord;

@interface AVTPoseSelectionGridViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) NSArray *stickerConfigurations;
@property (retain, nonatomic) UIView *cameraCellView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) UICollectionView *poseCollectionView;
@property (retain, nonatomic) AVTUIStickerRenderer *stickerRenderer;
@property (retain, nonatomic) AVTUIStickerGeneratorPool *generatorPool;
@property (retain, nonatomic) id<AVTTaskScheduler> scheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stickerGenerationQueue;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (weak, nonatomic) id<AVTPoseSelectionGridViewControllerDelegate> delegate;
@property (nonatomic) BOOL willDisplayCameraItem;
@property (retain, nonatomic) AVTStickerConfiguration *selectedStickerConfiguration;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)updateFlowLayoutItemSize;
- (id)configurationForIndex:(long long)a0;
- (id)initWithAvatarRecord:(id)a0 poseConfigurations:(id)a1 allowsCameraCapture:(BOOL)a2;
- (void)updateWithAvatarRecord:(id)a0 stickerConfigurations:(id)a1;

@end
