@class PTEffectReaction;

@interface PTPersonReactionSlot : NSObject

@property (retain) PTEffectReaction *reaction;
@property unsigned int activeGestureType;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } activeGestureLastSeenTime;
@property unsigned int latestGestureType;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } latestGestureFirstSeenTime;
@property float milliSecondsToStart;
@property float milliSecondsToStop;

- (void).cxx_destruct;
- (id)initWithStartTime:(float)a0 stopTime:(float)a1;

@end
