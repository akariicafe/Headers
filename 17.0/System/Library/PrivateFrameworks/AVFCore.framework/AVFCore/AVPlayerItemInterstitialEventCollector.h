@class AVPlayerItem, NSObject;
@protocol OS_dispatch_queue;

@interface AVPlayerItemInterstitialEventCollector : AVPlayerItemMediaDataCollector {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    id /* block */ _obtainCoordinator;
    AVPlayerItem *_weakReferenceToPlayerItem;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoordinatorGenerator:(id /* block */)a0;
- (void)_updateTaggedRangeMetadataArray:(id)a0;
- (BOOL)_attachToPlayerItem:(id)a0;
- (void)_detatchFromPlayerItem;

@end
