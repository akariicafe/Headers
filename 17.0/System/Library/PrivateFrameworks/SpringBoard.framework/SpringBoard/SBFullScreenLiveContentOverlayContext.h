@protocol SBFullScreenSwitcherSceneLiveContentOverlay;

@interface SBFullScreenLiveContentOverlayContext : NSObject

@property (readonly, nonatomic) long long overlayType;
@property (readonly, nonatomic) id<SBFullScreenSwitcherSceneLiveContentOverlay> overlay;

- (void).cxx_destruct;
- (id)initWithOverlay:(id)a0;

@end
