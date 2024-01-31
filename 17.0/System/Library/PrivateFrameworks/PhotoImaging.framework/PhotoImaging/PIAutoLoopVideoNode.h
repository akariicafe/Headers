@class NURenderNode;

@interface PIAutoLoopVideoNode : NURenderNode

@property (readonly, nonatomic) NURenderNode *input;
@property (readonly, nonatomic) int loopStart;
@property (readonly, nonatomic) int loopPeriod;
@property (readonly, nonatomic) int fadeLength;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } loopDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } fadeDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } fadeStartTime;

+ (int)fadeLengthForTrimRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 frameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (id)loopParamsForTrimRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 frameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (int)loopPeriodForTrimRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 frameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (int)loopStartForTrimRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 frameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

- (id)_evaluateVideo:(out id *)a0;
- (id)_evaluateAudioMix:(out id *)a0;
- (id)_evaluateVideoComposition:(out id *)a0;
- (id)_evaluateVideoProperties:(out id *)a0;
- (id)initWithInput:(id)a0 frameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 trimRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 settings:(id)a3;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)requiresAudioMix;
- (BOOL)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;

@end
