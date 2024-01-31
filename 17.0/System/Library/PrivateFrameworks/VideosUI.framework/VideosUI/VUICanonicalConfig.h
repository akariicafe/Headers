@class NSString;

@interface VUICanonicalConfig : NSObject

@property (nonatomic) float videoViewOffscreenThresholdToStopPlayback;
@property (nonatomic) double playbackDelayInterval;
@property (retain, nonatomic) NSString *storeTabIdentifier;
@property (retain, nonatomic) NSString *tvShowsTabIdentifier;

- (id)init;
- (void).cxx_destruct;

@end
