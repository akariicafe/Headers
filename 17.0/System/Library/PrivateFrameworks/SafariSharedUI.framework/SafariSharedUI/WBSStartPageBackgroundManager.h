@class NSString, NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WBSStartPageBackgroundManager : NSObject <WBTabGroupManagerObserver> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_imageSavingQueue;
    struct RetainPtr<CGImage *> { void *m_ptr; } _prefetchedImage;
    struct RetainPtr<CGImage *> { void *m_ptr; } _prefetchedImageThumbnail;
    NSURL *_prefetchedImageURL;
    NSString *_lastPrefetchedFilePath;
    _Atomic long long _prefetchingCoalescingDelay;
    double _prefetchedImageLuminance;
    NSURL *_imageURL;
    long long _appearance;
    NSMutableDictionary *_backgroundImageIdentifierToImage;
    NSMutableDictionary *_backgroundImageIdentifierToLuminance;
}

@property (class, readonly, nonatomic) WBSStartPageBackgroundManager *defaultManager;

@property (readonly, nonatomic) struct RetainPtr<CGImage *> { void *m_ptr; } image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)warmUp;
+ (id)ciColorKernel;

- (void)clearImage;
- (BOOL)_tabGroupShouldInheritProfileBackgroundImage:(id)a0 forProfileWithIdentifier:(id)a1;
- (void)loadImageFromDiskForIdentifier:(id)a0;
- (id)presetIconColorForSymbol:(id)a0;
- (void)_setHasProfileSpecificBackgroundImage:(BOOL)a0 forIdentifier:(id)a1;
- (id)initWithImageURL:(id)a0;
- (void)_loadImageFromDiskForIdentifier:(id)a0;
- (void)_clearPrefetchedImage;
- (void)clearPrefetchedImage;
- (void)_prefetchImage:(id)a0 luminance:(double)a1 completion:(id /* block */)a2 withNanoSecondDelay:(long long)a3;
- (void)reloadTabGroupSpecificBackgroundImageFromDisk:(id)a0;
- (BOOL)hasProfileSpecificBackgroundImage:(id)a0;
- (void)_updateThumbnailIfNeeded;
- (void)processImageForIdentifier:(id)a0 isGeneratedImage:(BOOL)a1 withinProfile:(BOOL)a2;
- (unsigned long long)_primaryIndexForImage:(id)a0 source:(struct RetainPtr<CGImageSource> { void *x0; })a1 adjustForDarkAppearance:(BOOL)a2;
- (struct RetainPtr<CGImage *> { void *x0; })_templateImageWithImage:(id)a0 color:(id)a1;
- (void)cacheImageFromURL:(id)a0 completion:(id /* block */)a1;
- (struct RetainPtr<CGImage *> { void *x0; })prefetchedImageThumbnailForProfile:(id)a0;
- (struct RetainPtr<CGImage *> { void *x0; })thresholdImage:(struct CGImage { } *)a0 minValue:(double)a1 maxValue:(double)a2 multiplier:(double)a3;
- (id)prefetchedImageNameForProfile:(id)a0;
- (id).cxx_construct;
- (long long)_generatedImageScaleWithSymbol:(id)a0;
- (void)_deleteImageWithIdentifier:(id)a0;
- (void)_setExtendedAttributesOnBackgroundImage;
- (void)_processImageForIdentifier:(id)a0 isGeneratedImage:(BOOL)a1 withinProfile:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)tabGroupManager:(id)a0 didRemoveProfileWithIdentifier:(id)a1;
- (struct RetainPtr<CGImage *> { void *x0; })_thumbnailForImage:(id)a0 source:(struct RetainPtr<CGImageSource> { void *x0; })a1 adjustForDarkAppearance:(BOOL)a2;
- (void)processImageForIdentifier:(id)a0 isGeneratedImage:(BOOL)a1 withinProfile:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)commitPrefetchedImageWithLuminance:(double)a0 forIdentifier:(id)a1 isGeneratedImage:(BOOL)a2 withinProfile:(BOOL)a3;
- (BOOL)_tabGroupShouldUseGlobalBackgroundImage:(id)a0 forProfileWithIdentifier:(id)a1;
- (long long)appearanceIfImageExists:(BOOL)a0;
- (long long)appearanceForLuminance:(double)a0;
- (void)_setImageOnAnyQueue:(struct RetainPtr<CGImage *> { void *x0; })a0 withAppearance:(long long)a1 forIdentifier:(id)a2;
- (long long)appearanceForImageWithIdentifier:(id)a0 forProfile:(id)a1;
- (BOOL)hasGlobalBackgroundImage;
- (struct RetainPtr<CGImage *> { void *x0; })_fetchImage:(id)a0 source:(struct RetainPtr<CGImageSource> { void *x0; })a1 adjustForDarkAppearance:(BOOL)a2;
- (struct RetainPtr<CGImage *> { void *x0; })analyzeImageAndThresholdIfNecessary:(struct CGImage { } *)a0 thumbnail:(struct CGImage { } *)a1 precomputedLuminance:(double)a2 getAppearance:(long long *)a3 luminance:(double *)a4;
- (void)_setHasTabGroupSpecificBackgroundImage:(BOOL)a0 forIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prefetchImage:(id)a0 luminance:(double)a1 completion:(id /* block */)a2;
- (BOOL)isCorrectBackgroundImageLoadedForIdentifier:(id)a0;
- (struct RetainPtr<CGImage *> { void *x0; })imageForIdentifier:(id)a0 forProfile:(id)a1;
- (id)ciContext;
- (void)_readImagePropertiesFromImageSource:(struct RetainPtr<CGImageSource> { void *x0; })a0 forImageIdentifier:(id)a1 isNonGlobalBackgroundImage:(BOOL)a2;
- (struct RetainPtr<CGImage *> { void *x0; })fetchImage:(id)a0;
- (struct RetainPtr<CGImage *> { void *x0; })normalizeImage:(struct RetainPtr<CGImage *> { void *x0; })a0 imageSource:(struct RetainPtr<CGImageSource> { void *x0; })a1 properties:(id)a2;
- (void)clearImageWithIdentifier:(id)a0 withinProfile:(BOOL)a1;
- (void)prefetchImage:(id)a0 completion:(id /* block */)a1;
- (void)reloadProfileSpecificBackgroundImageFromDisk:(id)a0;
- (void)tabGroupManager:(id)a0 didRemoveTabGroupWithUUID:(id)a1;
- (void)_setImage:(struct RetainPtr<CGImage *> { void *x0; })a0 withAppearance:(long long)a1 forIdentifier:(id)a2;
- (void)_commitImage:(struct RetainPtr<CGImage *> { void *x0; })a0 appearanceName:(long long)a1 luminance:(double)a2 forIdentifier:(id)a3 isGeneratedImage:(BOOL)a4 withinProfile:(BOOL)a5 completionHandler:(id /* block */)a6;
- (void)_saveImage:(struct RetainPtr<CGImage *> { void *x0; })a0 appearance:(long long)a1 luminance:(double)a2 forIdentifier:(id)a3 isGeneratedImage:(BOOL)a4 withinProfile:(BOOL)a5 completion:(id /* block */)a6;
- (struct RetainPtr<CGImage *> { void *x0; })assignImage:(struct RetainPtr<CGImage *> { void *x0; })a0 oldImage:(struct RetainPtr<CGImage *> { void *x0; })a1;
- (double)_iconOpacityForBackgroundColor:(id)a0 forDarkIcon:(BOOL)a1;
- (void)generateProfileSpecificBackgroundImageWithSymbol:(id)a0 forProfile:(id)a1 withColor:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)hasTabGroupSpecificBackgroundImage:(id)a0;
- (BOOL)hasGeneratedBackgroundImage:(id)a0 forProfileWithIdentifier:(id)a1;
- (long long)appearanceForImage:(struct RetainPtr<CGImage *> { void *x0; })a0;

@end
