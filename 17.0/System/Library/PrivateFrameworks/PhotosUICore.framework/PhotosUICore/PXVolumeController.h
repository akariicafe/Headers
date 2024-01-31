@interface PXVolumeController : PXObservable <PXMutableVolumeController>

@property (readonly, nonatomic) BOOL isInSilentMode;

- (void)decreaseVolume;
- (void)performChanges:(id /* block */)a0;
- (void)increaseVolume;
- (id)init;
- (id)initWithIsInSilentMode:(BOOL)a0;
- (void)setIsInSilentMode:(BOOL)a0;

@end
