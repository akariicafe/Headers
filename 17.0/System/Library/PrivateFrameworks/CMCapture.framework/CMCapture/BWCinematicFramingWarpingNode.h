@class VCProcessor;
@protocol BWCinematicFramingStatesProvider;

@interface BWCinematicFramingWarpingNode : BWNode {
    id<BWCinematicFramingStatesProvider> _framingStatesProvider;
    VCProcessor *_vcProcessor;
    struct { int width; int height; } _outputDimensions;
}

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;

@end
