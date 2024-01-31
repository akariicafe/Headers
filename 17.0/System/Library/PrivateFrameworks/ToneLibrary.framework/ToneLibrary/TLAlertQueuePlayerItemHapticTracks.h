@class AVPlayerItemTrack;

@interface TLAlertQueuePlayerItemHapticTracks : NSObject

@property (readonly, nonatomic) AVPlayerItemTrack *hapticPlayerItemTrack;
@property (readonly, nonatomic) AVPlayerItemTrack *attenuatedHapticPlayerItemTrack;

- (void).cxx_destruct;
- (id)initWithHapticPlayerItemTrack:(id)a0 attenuatedHapticPlayerItemTrack:(id)a1;

@end
