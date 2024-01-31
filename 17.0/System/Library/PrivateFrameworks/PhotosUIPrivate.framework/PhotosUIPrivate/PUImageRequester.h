@class NSHashTable, NSDate, UIImage, NSError, NSData, NSURL, NSArray, NSString, PXEventCoalescer, PUMediaProvider;
@protocol PUDisplayAsset, PUImageRequesterResult;

@interface PUImageRequester : NSObject <PXEventCoalescerObserver>

@property (retain, nonatomic) id<PUImageRequesterResult> result;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) id<PUDisplayAsset> imageAsset;
@property (nonatomic) struct CGSize { double width; double height; } imageTargetSize;
@property (nonatomic) struct CGImage { } *gainMapImage;
@property (nonatomic) float gainMapValue;
@property (retain, nonatomic) NSData *fullSizeImageData;
@property (retain, nonatomic) NSURL *fullSizeImageURL;
@property (nonatomic) BOOL imageIsPlaceholder;
@property (nonatomic) BOOL imageIsFullQuality;
@property (retain, nonatomic, setter=_setObserver:) NSHashTable *observers;
@property (nonatomic, setter=_setChangeCount:) long long _changeCount;
@property (nonatomic, setter=_setNeedsUpdate:) BOOL _needsUpdate;
@property (nonatomic) int currentFullSizeImageDataRequestID;
@property (nonatomic, setter=_setLastRequestedImageSize:) struct CGSize { double width; double height; } _lastRequestedImageSize;
@property (nonatomic, setter=_setCurrentImageRequestID:) int _currentImageRequestID;
@property (retain, nonatomic) NSDate *currentRequestStartDate;
@property (retain, nonatomic) PXEventCoalescer *fullSizeDataRepeatRequestCoalescer;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider;
@property (readonly, nonatomic) id<PUDisplayAsset> asset;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) BOOL shouldRequestPenultimateVersion;
@property (nonatomic) BOOL useLowMemoryMode;
@property (retain, nonatomic) NSArray *requestFullSizeImageDataUTTypes;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (readonly, nonatomic) BOOL requiresFullQualityImage;
@property (nonatomic) BOOL highPriorityRequest;
@property (nonatomic) BOOL includeGainMap;
@property (nonatomic) BOOL requestHDR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_update;
- (void)performChanges:(id /* block */)a0;
- (void)_handleResultOfFullSizeImageDataRequestWithID:(int)a0 imageData:(id)a1 imageURL:(id)a2 dataUTI:(id)a3 orientation:(long long)a4 info:(id)a5;
- (id)init;
- (void)_produceDebugImage;
- (void)updateIfNeeded;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void)_invalidateImageRequest;
- (void)_willChange;
- (void)unregisterObserver:(id)a0;
- (id)initWithMediaProvider:(id)a0 asset:(id)a1 requiresFullQualityImage:(BOOL)a2;
- (void)_handleResultOfImageRequestWithID:(int)a0 asset:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 image:(id)a3 info:(id)a4;
- (void).cxx_destruct;
- (void)cancelAllImageRequests;
- (void)_invalidateResult;
- (id)imageByAddingWallpaperCropRectDiagnosticsForAsset:(id)a0 sourceImage:(id)a1;
- (void)_didChange;
- (void)outputEventSignaledForCoalescer:(id)a0;
- (void)setAsset:(id)a0;
- (void)_updateResult;
- (void)handlePreloadedImage:(id)a0;
- (void)_assertInsideChangesBlock;

@end
