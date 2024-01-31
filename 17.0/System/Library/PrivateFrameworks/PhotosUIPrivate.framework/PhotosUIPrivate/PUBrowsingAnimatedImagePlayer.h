@class PHAnimatedImage, NSMutableSet, PUMediaProvider;
@protocol PUDisplayAsset;

@interface PUBrowsingAnimatedImagePlayer : PUViewModel {
    struct { BOOL animatedImage; } _isValid;
}

@property (retain, nonatomic, setter=_setAnimatedImage:) PHAnimatedImage *animatedImage;
@property (nonatomic, setter=_setAnimatedImageLoadingAllowed:) BOOL isAnimatedImageLoadingAllowed;
@property (retain, nonatomic) NSMutableSet *_animatedImageLoadingDisablingReasons;
@property (nonatomic, setter=_setAnimatedImageRequestID:) int _animatedImageRequestID;
@property (retain, nonatomic) id<PUDisplayAsset> asset;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider;

- (id)init;
- (void)dealloc;
- (void)didPerformChanges;
- (BOOL)_needsUpdate;
- (void)_invalidateAnimatedImage;
- (void)_updateIfNeeded;
- (void).cxx_destruct;
- (id)newViewModelChange;
- (id)debugDetailedDescription;
- (void)_cancelLoading;
- (void)_handleAnimatedImageRequestComplete:(id)a0;
- (void)_updateAnimatedImage;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1;
- (void)setAnimatedImageLoadingDisabled:(BOOL)a0 forReason:(id)a1;
- (void)unloadAnimatedImage;

@end
