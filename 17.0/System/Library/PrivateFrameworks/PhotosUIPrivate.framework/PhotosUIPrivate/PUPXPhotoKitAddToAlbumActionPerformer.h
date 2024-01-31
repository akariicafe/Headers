@class PUAlbumPickerViewController;

@interface PUPXPhotoKitAddToAlbumActionPerformer : PXPhotoKitAssetActionPerformer

@property (retain, nonatomic) PUAlbumPickerViewController *albumPickerViewController;

+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (id)createPreviewActionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;
+ (void)_configureAction:(id)a0;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)_handlePickedAlbum:(id)a0 assets:(id)a1;
- (void)_handleUserInteractionTaskResult:(BOOL)a0 error:(id)a1;

@end
