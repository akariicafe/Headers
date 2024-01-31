@class AVPlayerItemMediaDataCollectorInternal;

@interface AVPlayerItemMediaDataCollector : NSObject {
    AVPlayerItemMediaDataCollectorInternal *_collectorInternal;
}

- (id)init;
- (void)dealloc;
- (id)_weakReference;
- (BOOL)_attachToPlayerItem:(id)a0;
- (void)_detatchFromPlayerItem;

@end
