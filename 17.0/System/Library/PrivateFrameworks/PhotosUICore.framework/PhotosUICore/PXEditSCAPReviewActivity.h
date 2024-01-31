@class NSString, PXPhotosUIViewController;
@protocol PXMemoryAssetsActionFactory;

@interface PXEditSCAPReviewActivity : PXActivity <PXPhotosViewDelegate> {
    PXPhotosUIViewController *_presentedGridViewController;
}

@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)activityCategory;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (BOOL)photosViewController:(id)a0 didPickAssetReference:(id)a1;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)allowsContextMenuInteractionForPhotosViewController:(id)a0;
- (void)dismissGrid;

@end
