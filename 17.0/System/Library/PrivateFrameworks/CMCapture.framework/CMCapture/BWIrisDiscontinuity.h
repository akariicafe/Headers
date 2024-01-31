@class NSArray;

@interface BWIrisDiscontinuity : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _discontinuityTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _duration;
    NSArray *_timeSkews;
    NSArray *_recipe;
    long long _recipeMinDisplacement;
    long long _recipeMaxDisplacement;
    int _recipeIdentifier;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _targetFrameDuration;
    BOOL _onlyRetime;
    BOOL _haveSeenNonPositiveDisplacement;
    BOOL _generateIFrames;
    BOOL _minDisplacementIFrameRequested;
}

@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } targetFrameDuration;

- (void)dealloc;
- (BOOL)containsVideoBufferTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 targetFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 onlyRetime:(BOOL)a3 generateIFrames:(BOOL)a4 timeSkews:(id)a5;
- (void)resetWithNewTimeSkews:(id)a0;
- (BOOL)shouldKeepBufferWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forceKeepingBuffer:(BOOL)a1 nextAdjustedTimeInOut:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2 discontinuityFrameAttributesOut:(struct { BOOL x0; BOOL x1; long long x2; int x3; } *)a3;

@end
