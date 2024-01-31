@class NSString, ISAnimatedImageView;

@interface PUAnimatedImageTileViewController : PUImageTileViewController <PUAssetViewModelChangeObserver> {
    ISAnimatedImageView *_animatedImageView;
    long long _interactionState;
    struct { BOOL playbackState; BOOL animatedImage; } _isValid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assetViewModelDidChange;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_invalidateAnimatedImage;
- (void)_updateAnimatedImageIfNeeded;
- (void)_updatePlaybackStateIfNeeded;
- (void)_invalidatePlaybackState;
- (id)loadView;
- (void).cxx_destruct;

@end
