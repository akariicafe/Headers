@interface RCPPlayerPlaybackOptions : NSObject

@property (nonatomic) double playbackSpeedFactor;
@property (nonatomic) double minDelayBetweenSends;
@property (nonatomic) double firstEventFrameDelay;
@property (nonatomic) BOOL useVirtualHIDServices;
@property (nonatomic) BOOL useHIDEventTimestampsForDelivery;
@property (nonatomic) BOOL ignoreSenderProperties;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (copy, nonatomic) id /* block */ customizeHIDEvent;
@property (nonatomic) BOOL linkEventDeliveryToDisplayRefreshRate;

- (id)init;
- (unsigned long long)timestampForEventReplay:(id)a0;
- (void).cxx_destruct;

@end
