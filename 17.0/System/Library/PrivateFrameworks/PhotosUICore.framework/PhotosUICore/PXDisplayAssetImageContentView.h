@class UIImageView;

@interface PXDisplayAssetImageContentView : PXDisplayAssetContentView {
    UIImageView *_imageView;
}

- (id)contentView;
- (double)loadingProgress;
- (void).cxx_destruct;
- (long long)playbackStyle;
- (void)_updateImageViewContentMode;
- (void)_updateImageViewFilters;
- (void)contentModeDidChange;
- (void)contentsRectDidChange;
- (void)imageDidChange;
- (void)imageProgressDidChange;
- (void)imageRequesterDidChange:(unsigned long long)a0;
- (BOOL)isDisplayingFullQualityContent;
- (void)isDisplayingFullQualityContentDidChange;
- (void)placeholderImageFiltersDidChange;

@end
