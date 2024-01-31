@interface NULivePhotoKeyFrameMetaDataNode : NURenderNode {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeFromAdjustment;
}

- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateVideo:(out id *)a0;
- (id)_evaluateVideoProperties:(out id *)a0;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 input:(id)a1;

@end
