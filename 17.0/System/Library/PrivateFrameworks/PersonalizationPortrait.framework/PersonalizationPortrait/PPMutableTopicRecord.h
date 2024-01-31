@class PPTopic, PPSource, NSString, PPTopicMetadata;

@interface PPMutableTopicRecord : PPTopicRecord

@property (retain, nonatomic) PPTopic *topic;
@property (retain, nonatomic) PPSource *source;
@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) double initialScore;
@property (nonatomic) double decayRate;
@property (nonatomic) BOOL isLocal;
@property (retain, nonatomic) NSString *extractionOsBuild;
@property (nonatomic) unsigned int extractionAssetVersion;
@property (nonatomic) double sentimentScore;
@property (retain, nonatomic) PPTopicMetadata *metadata;

- (void)setTopic:(id)a0;
- (void)setDecayRate:(double)a0;
- (id)init;
- (void)setInitialScore:(double)a0;
- (void)setMetadata:(id)a0;
- (void)setAlgorithm:(unsigned long long)a0;
- (void)setSource:(id)a0;
- (void)setSentimentScore:(double)a0;
- (void)setExtractionOsBuild:(id)a0;
- (void)setIsLocal:(BOOL)a0;
- (void)setExtractionAssetVersion:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
