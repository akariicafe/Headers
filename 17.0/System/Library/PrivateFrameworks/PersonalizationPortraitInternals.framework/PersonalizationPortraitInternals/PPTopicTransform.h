@class NSData;

@interface PPTopicTransform : NSObject {
    NSData *_data;
    struct header_s { unsigned int qidCount; unsigned int topicCount; unsigned int nonzeroCount; unsigned int payloadLen; } _header;
    const float *_bias;
    const unsigned int *_qids;
    const unsigned int *_matrixIndices;
    const float *_matrixElts;
    const char *_payloads;
    unsigned char _featureSmoothingType;
    unsigned char _featureScalingType;
    unsigned char _featureNormalizationType;
    unsigned char _outputScalingType;
    unsigned char _activationType;
    float _featureSmoothingFactor;
    float _featureScalingFactor;
    float _outputScalingFactor;
    float _attenuationFactor;
}

@property (readonly, nonatomic) unsigned long long outputTopicCount;
@property (readonly, nonatomic) float threshold;

- (id)init;
- (void)applyOutputActivation:(float *)a0;
- (BOOL)containsMappedTopic:(id)a0;
- (void)addWeightedTopicScoreToBuffer:(float *)a0 qid:(unsigned int)a1 score:(float)a2;
- (void)applyFeatureScaling:(float *)a0 vectorLength:(int)a1;
- (void)applyFeatureNormalization:(float *)a0 vectorLength:(int)a1;
- (void)addBias:(float *)a0;
- (void)addWeightedTopicScoreToBuffer:(float *)a0 countNonZeroComponentsInBuffer:(unsigned short *)a1 qid:(unsigned int)a2 score:(float)a3;
- (void)applyOutputAttenuation:(float *)a0 nonzeroCounts:(unsigned short *)a1;
- (void).cxx_destruct;
- (void)applyOutputScaling:(float *)a0 vectorLength:(int)a1;
- (void)applyFeatureSmoothing:(float *)a0 vectorLength:(int)a1;
- (id)payloadForTopic:(unsigned int)a0;
- (id)initWithPath:(id)a0 mappingId:(id)a1;
- (id)QIDWeightsWithMappedTopicIdentifier:(id)a0;

@end
