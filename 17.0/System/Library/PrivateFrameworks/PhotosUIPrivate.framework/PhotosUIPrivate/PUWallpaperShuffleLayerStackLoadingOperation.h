@class PIParallaxCompoundLayerStackRequest, NSString, PIParallaxStyle, PFWallpaperCompoundLayerStack, NSURL, PFPosterEditConfiguration, PFPosterMedia, NSError;
@protocol PISegmentationItem;

@interface PUWallpaperShuffleLayerStackLoadingOperation : PXAsyncOperation

@property (readonly, copy, nonatomic) NSString *operationType;
@property (retain, nonatomic) PIParallaxCompoundLayerStackRequest *layerStackRequest;
@property (readonly, nonatomic) PFPosterMedia *posterMedia;
@property (readonly, nonatomic) PFPosterEditConfiguration *editConfiguration;
@property (readonly, nonatomic) PIParallaxStyle *style;
@property (readonly, nonatomic) PIParallaxStyle *persistedStyle;
@property (readonly, nonatomic) NSURL *assetDirectory;
@property (readonly, nonatomic) BOOL isPreloading;
@property (retain) id<PISegmentationItem> segmentationItem;
@property (retain) PFWallpaperCompoundLayerStack *layerStack;
@property (retain) NSError *error;

- (void).cxx_destruct;
- (void)cancel;
- (void)px_finishIfPossible;
- (BOOL)px_shouldWaitForCancel;
- (void)px_start;
- (BOOL)_canLoadLayerStackFromDirectory;
- (void)_handleLayerStackResponse:(id)a0;
- (BOOL)_loadLayerStackFromDirectory;
- (id)initWithPosterMedia:(id)a0 editConfiguration:(id)a1 assetDirectory:(id)a2 style:(id)a3 persistedStyle:(id)a4 isPreloading:(BOOL)a5;
- (BOOL)tryLoadLayerStackFromDirectory;

@end
