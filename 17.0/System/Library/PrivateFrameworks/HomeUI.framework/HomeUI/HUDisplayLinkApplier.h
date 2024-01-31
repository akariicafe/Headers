@class CADisplayLink;

@interface HUDisplayLinkApplier : HUApplier

@property (copy, nonatomic) id /* block */ progressInputBlock;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic, getter=isAtRest) BOOL atRest;
@property (nonatomic) unsigned long long restingFrameCount;
@property (nonatomic) BOOL applyOnlyOnProgressChanges;
@property (nonatomic) BOOL completesWhenAtRest;

- (id)init;
- (BOOL)start;
- (void).cxx_destruct;
- (BOOL)complete:(BOOL)a0;
- (double)effectiveInputProgressForBlock:(id /* block */)a0;
- (void)_displayLinkTick;
- (void)_invalidateDisplayLinkIfNecessary;
- (void)_updateProgressForInitialUpdate:(BOOL)a0;
- (id)initWithProgressInputBlock:(id /* block */)a0;
- (void)restingStateDidChange;

@end
