@class _UIImageViewImageLoadingProperties, _UIImageViewImageProperties, _UIImageViewAnimationProperties, UILayoutGuide, UIImageSymbolConfiguration, _UIImageViewUncommonProperties;

@interface _UIImageViewExtendedStorage : _UIImageViewSimpleStorage {
    _UIImageViewImageProperties *_highlightedImageProperties;
    _UIImageViewAnimationProperties *_animationProperties;
    _UIImageViewImageLoadingProperties *_imageLoadingProperties;
    _UIImageViewUncommonProperties *_uncommonProperties;
    BOOL highlighted;
    BOOL masksTemplateImages;
    BOOL adjustsImageSizeForAccessibilityContentSizeCategory;
    UIImageSymbolConfiguration *preferredSymbolConfiguration;
    UILayoutGuide *imageContentGuide;
}

+ (id)storageFromSimpleStorage:(id)a0;

- (void)setPlaceholderView:(id)a0;
- (BOOL)isEnqueueingLoad;
- (id)imageLoader;
- (void)setPreferredSymbolConfiguration:(id)a0;
- (BOOL)isStoppingLoad;
- (id)preferredSymbolConfiguration;
- (id)placeholderView;
- (id)animationProperties;
- (void)setOverridingSymbolConfiguration:(id)a0;
- (void)setStoppingLoad:(BOOL)a0;
- (void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (double)animationDuration;
- (void)setHighlightedAnimationImages:(id)a0;
- (id)highlightedImage;
- (id)resolvedHighlightedImage;
- (id)imageBeingSetByLoader;
- (void)setLoadingDelegate:(id)a0;
- (id)highlightedAnimationImages;
- (void)setMasksTemplateImages:(BOOL)a0;
- (unsigned int)drawMode;
- (void)setImageLoader:(id)a0;
- (void)setHighlightedImage:(id)a0;
- (id)animationImages;
- (void)setAnimationImages:(id)a0;
- (unsigned long long)templateImageRenderingEffects;
- (id)overridingSymbolConfiguration;
- (void)setAnimationDuration:(double)a0;
- (void)setAnimationRepeatCount:(long long)a0;
- (void)setImageBeingSetByLoader:(id)a0;
- (void).cxx_destruct;
- (id)CIRenderer;
- (BOOL)isHighlighted;
- (void)setDefaultRenderingMode:(long long)a0;
- (id)imageContentGuide;
- (long long)animationRepeatCount;
- (void)setResolvedHighlightedImage:(id)a0;
- (BOOL)isStartingLoad;
- (BOOL)adjustsImageSizeForAccessibilityContentSizeCategory;
- (id)imageLoadingProperties;
- (void)setDrawMode:(unsigned int)a0;
- (id)uncommonProperties;
- (long long)defaultRenderingMode;
- (id)loadingDelegate;
- (BOOL)masksTemplateImages;
- (void)setEnqueueingLoad:(BOOL)a0;
- (void)setTemplateImageRenderingEffects:(unsigned long long)a0;
- (void)setCIRenderer:(id)a0;
- (void)setStartingLoad:(BOOL)a0;
- (id)highlightedImageProperties;
- (void)setImageContentGuide:(id)a0;

@end
