@class ATXAppOrClipLaunch;

@interface ATXHeroAndClipSessionLogSampledEvent : NSObject <ATXHeroAndClipSampledEventProtocol>

@property (retain, nonatomic) ATXAppOrClipLaunch *launch;

- (id)init;
- (id)location;
- (id)bundleId;
- (void).cxx_destruct;
- (BOOL)isClip;
- (id)initFromLaunch:(id)a0;

@end
