@class CADisplayLink;

@interface HUElasticApplier : HUApplier

@property (copy, nonatomic) id /* block */ progressInputBlock;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) unsigned long long frameCount;
@property (nonatomic) unsigned long long restingFrameCount;
@property (nonatomic) double previousForce;
@property (nonatomic) double currentVelocity;
@property (nonatomic) double friction;
@property (nonatomic) double tension;
@property (nonatomic) BOOL completesWhenAtRest;
@property (nonatomic) BOOL progressBeginsFromInitialInputProgress;
@property (nonatomic) BOOL applyOnlyOnProgressChanges;

- (id)init;
- (BOOL)start;
- (void).cxx_destruct;
- (BOOL)complete:(BOOL)a0;
- (void)_displayLinkTick;
- (void)_invalidateDisplayLinkIfNecessary;
- (void)_updateProgressForInitialUpdate:(BOOL)a0;
- (id)initWithProgressInputBlock:(id /* block */)a0;

@end
