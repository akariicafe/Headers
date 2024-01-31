@class UIImage;

@interface NCNotificationRequestFullScreenContentProvider : NCNotificationRequestCoalescingContentProvider

@property (retain, nonatomic, getter=_fullScreenThumbnail, setter=_setFullScreenThumbnail:) UIImage *fullScreenThumbnail;
@property (readonly, getter=isImageAssetLoadingComplete) BOOL imageAssetLoadingComplete;

- (id)importantAttributedTextWithImageConfiguration:(id)a0;
- (id)_newAvatarView;
- (id)importantText;
- (id)icons;
- (id)thumbnail;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)loadImageAssetsWithCompletion:(id /* block */)a0;

@end
