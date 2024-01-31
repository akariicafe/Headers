@class MPMusicPlayerControllerMutableQueue;

@interface MusicKit_SoftLinking_MPMusicPlayerControllerMutableQueue : NSObject {
    MPMusicPlayerControllerMutableQueue *_underlyingMutableQueue;
}

@property (readonly, nonatomic) MPMusicPlayerControllerMutableQueue *_underlyingMutableQueue;

- (void).cxx_destruct;
- (void)removeItemWithIdentifier:(id)a0;
- (id)_initWithUnderlyingMutableQueue:(id)a0;
- (void)insertQueueDescriptor:(id)a0 afterItemWithIdentifier:(id)a1;

@end
