@class UIView, PHAsset, UIGraphicsImageRenderer, PHPerson, PXPhotoKitAssetCollectionActionManager, UIImageView, UIButton, NSString, NSObject;
@protocol OS_dispatch_queue, PXMemoryAssetsActionFactory, PUPeopleTileDelegate;

@interface PUPeopleTileCollectionViewCell : UICollectionViewCell <PXAssetCollectionActionPerformerDelegate>

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedContactFetchQueue;

@property (retain, nonatomic) UIView *questionView;
@property (readonly, nonatomic) UIButton *menuButton;
@property (readonly, nonatomic) UIImageView *avatarImageView;
@property (readonly, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIGraphicsImageRenderer *renderer;
@property struct CGSize { double width; double height; } previousContentViewSize;
@property (retain, nonatomic) PHPerson *person;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) PXPhotoKitAssetCollectionActionManager *personActionManager;
@property (weak, nonatomic) id<PUPeopleTileDelegate> peopleDelegate;
@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_fetchContactInfoForPerson:(id)a0 completion:(id /* block */)a1;
+ (struct CGSize { double x0; double x1; })itemSizeForTraitCollection:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)undoManagerForActionPerformer:(id)a0;
- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)accessibilityInvertColorsStatusDidChange:(id)a0;
- (void)layoutSubviews;
- (BOOL)actionPerformer:(id)a0 transitionToViewController:(id)a1 transitionType:(long long)a2;
- (void)_displayAvatarImageRequestResult:(id)a0 faceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 person:(id)a2 error:(id)a3;
- (void)_fetchAvatarImageForPerson:(id)a0;
- (void)_fetchContactImageForPerson:(id)a0 contact:(id)a1;
- (void)_makeKeyPhotoActionTapped:(id)a0 asset:(id)a1;
- (void)_nameActionTapped:(id)a0;
- (void)_reloadAvatarImageViewForPerson:(id)a0;
- (void)_reviewPhotosActionTapped:(id)a0;
- (void)_setPerson:(id)a0 asset:(id)a1 reloadAvatar:(BOOL)a2;
- (void)_setupActionsForPerson:(id)a0 asset:(id)a1;
- (void)_showAlbumActionTapped:(id)a0;
- (void)_unnameActionTapped:(id)a0 asset:(id)a1;
- (void)refreshPerson;
- (void)setPerson:(id)a0 asset:(id)a1;

@end
