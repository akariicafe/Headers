@class NSArray;

@interface TSKAVQueuePlayerController : TSKAVPlayerController {
    NSArray *mAssets;
}

- (void)dealloc;
- (id)initWithQueuePlayer:(id)a0 delegate:(id)a1 assets:(id)a2;
- (id)initWithQueuePlayer:(id)a0 delegate:(id)a1 assets:(id)a2 initialAssetIndex:(unsigned long long)a3;
- (void)p_enqueueAssetsFromIndex:(unsigned long long)a0;
- (void)playerItemDidPlayToEndTimeAtRate:(float)a0;
- (void)skipToAssetAtIndex:(unsigned long long)a0;

@end
