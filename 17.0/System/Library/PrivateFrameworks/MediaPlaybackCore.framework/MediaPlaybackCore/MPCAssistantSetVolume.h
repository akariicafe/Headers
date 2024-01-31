@interface MPCAssistantSetVolume : NSObject

- (void)decreaseVolumeBy:(float)a0 withUIDs:(id)a1 completion:(id /* block */)a2;
- (void)executeWithUIDs:(id)a0 action:(unsigned long long)a1 volumeValue:(float)a2 completion:(id /* block */)a3;
- (void)increaseVolumeBy:(float)a0 withUIDs:(id)a1 completion:(id /* block */)a2;
- (void)setVolume:(float)a0 withUIDs:(id)a1 completion:(id /* block */)a2;

@end
