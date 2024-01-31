@protocol NUScalePolicy;

@interface NUVisionSegmentationRequest : NURenderRequest

@property (nonatomic) long long segmentationType;
@property (nonatomic) BOOL produceConfidenceMap;
@property (nonatomic) long long visionSegmentationPolicy;
@property (retain, nonatomic) id<NUScalePolicy> scalePolicy;

+ (void)warmUp;

- (void)submit:(id /* block */)a0;
- (id)description;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
