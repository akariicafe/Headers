@class CADisplay, CAWindowServerDisplay, CADisplayLink;

@interface CAWindowServerRamper : NSObject

@property (retain) CAWindowServerDisplay *display;
@property (retain) CADisplay *cadisplay;
@property (retain) CADisplayLink *link;
@property double duration;
@property int id;
@property double beginTime;

- (id)initWithDisplay:(id)a0;
- (void)runRamp;
- (void)rampCallback:(id)a0;

@end
