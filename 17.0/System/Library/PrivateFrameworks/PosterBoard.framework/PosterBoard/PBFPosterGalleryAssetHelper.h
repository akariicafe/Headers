@class NSSet, NSString, NSMutableSet, NSMapTable, PBFPosterGalleryViewSpec;
@protocol PBFPosterPreviewGenerator, PBFDisplayContext, PBFExtensionInstanceProviding, PBFPosterGalleryAssetHelperDelegate;

@interface PBFPosterGalleryAssetHelper : NSObject <PBFGalleryPosterViewControllerDelegate, BSInvalidatable, BSCancellable> {
    NSMutableSet *_knownDisplayContexts;
    NSMapTable *_previewToState;
    PBFPosterGalleryViewSpec *_activeDisplayContextSpec;
    BOOL _isInvalidated;
    long long _assetHydrationState;
}

@property (readonly, weak, nonatomic) id<PBFPosterPreviewGenerator> previewGenerator;
@property (readonly, weak, nonatomic) id<PBFExtensionInstanceProviding> extensionInstanceProvider;
@property (weak, nonatomic) id<PBFPosterGalleryAssetHelperDelegate> delegate;
@property (nonatomic, setter=setSuspended:) BOOL isSuspended;
@property (retain, nonatomic) id<PBFDisplayContext> activeDisplayContext;
@property (readonly, nonatomic) NSSet *knownDisplayContexts;
@property (copy, nonatomic) NSSet *posterPreviews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)cancel;
- (void)_teardownState:(id)a0;
- (BOOL)_updateHydrationStateTo:(long long)a0 reason:(id)a1;
- (struct CGSize { double x0; double x1; })_contentSizeForPreview:(id)a0;
- (BOOL)_kickoffPreviewGeneratorForPosterPreview:(id)a0 context:(id)a1;
- (id)_newImageViewWithImage:(id)a0 posterPreview:(id)a1;
- (void)_receiveUpdatedAssetForPosterPreview:(id)a0 definition:(id)a1 displayContext:(id)a2 image:(id)a3 fetchError:(id)a4;
- (void)_resetHydrationState;
- (void)_setupLiveDisplayStyleForPreview:(id)a0;
- (void)_setupLiveViewControllerForInstance:(id)a0 preview:(id)a1;
- (void)_sizeAssetsForActiveDisplayContext;
- (BOOL)_sizeContainerView:(id)a0 forPreview:(id)a1 displayContext:(id)a2;
- (void)_stateWasUpdated:(BOOL)a0;
- (void)_stateWasUpdatedForPosterPreviews:(id)a0;
- (void)_teardownLiveViewController:(id)a0 invalidate:(BOOL)a1;
- (void)_teardownStateForPosterPreviews:(id)a0;
- (BOOL)_updateHydrationStateIfNeeded;
- (void)appendDisplayContext:(id)a0;
- (id)assetsForPosterPreview:(id)a0;
- (void)cancelPrefetchForPosterPreviews:(id)a0;
- (void)galleryPosterViewController:(id)a0 stateChangedTo:(long long)a1;
- (id)initWithPreviewGenerator:(id)a0 extensionInstanceProvider:(id)a1;
- (id)knownDisplayContextWithoutActiveDisplayContext;
- (void)prefetchPosterPreviews:(id)a0;
- (void)resetKnownDisplayContexts;
- (void)updatePosterPreview:(id)a0 isVisible:(BOOL)a1;

@end
