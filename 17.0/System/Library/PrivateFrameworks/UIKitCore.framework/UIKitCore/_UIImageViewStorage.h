@class UIView, NSString, NSArray, UIImage, _UIImageCIImageRenderer, _UIImageLoader, UIImageView, UILayoutGuide, UIImageSymbolConfiguration, NSMapTable;
@protocol _UIImageViewLoadingDelegate, _UIImageViewStorage;

@interface _UIImageViewStorage : NSObject <CAAnimationDelegate, _UIImageViewStorage> {
    UIImageView *_imageView;
    id<_UIImageViewStorage> _storage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *highlightedImage;
@property (retain, nonatomic) UIImage *resolvedImage;
@property (retain, nonatomic) UIImage *resolvedHighlightedImage;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (retain, nonatomic) UIImageSymbolConfiguration *overridingSymbolConfiguration;
@property (retain, nonatomic) NSArray *animationImages;
@property (retain, nonatomic) NSArray *highlightedAnimationImages;
@property (nonatomic) double animationDuration;
@property (nonatomic) long long animationRepeatCount;
@property (nonatomic) long long defaultRenderingMode;
@property (nonatomic) unsigned long long templateImageRenderingEffects;
@property (retain, nonatomic) _UIImageCIImageRenderer *CIRenderer;
@property (retain, nonatomic) UILayoutGuide *imageContentGuide;
@property (retain, nonatomic) NSMapTable *layouts;
@property (nonatomic) unsigned int drawMode;
@property (retain, nonatomic) _UIImageLoader *imageLoader;
@property (retain, nonatomic) id<_UIImageViewLoadingDelegate> loadingDelegate;
@property (retain, nonatomic) UIImage *imageBeingSetByLoader;
@property (retain, nonatomic) UIView *placeholderView;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL masksTemplateImages;
@property (nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory;
@property (nonatomic, getter=isStartingLoad) BOOL startingLoad;
@property (nonatomic, getter=isEnqueueingLoad) BOOL enqueueingLoad;
@property (nonatomic, getter=isStoppingLoad) BOOL stoppingLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storageForImageView:(id)a0;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (id)extendedStorage;
- (id)simpleStorage;

@end
