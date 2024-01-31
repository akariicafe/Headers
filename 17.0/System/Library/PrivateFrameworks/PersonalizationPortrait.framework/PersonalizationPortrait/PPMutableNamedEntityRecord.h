@class PPNamedEntity, PPSource, NSString, PPNamedEntityMetadata;

@interface PPMutableNamedEntityRecord : PPNamedEntityRecord

@property (retain, nonatomic) PPNamedEntity *entity;
@property (retain, nonatomic) PPSource *source;
@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) double initialScore;
@property (nonatomic) double decayRate;
@property (retain, nonatomic) NSString *extractionOsBuild;
@property (nonatomic) unsigned char changeType;
@property (nonatomic) unsigned int extractionAssetVersion;
@property (nonatomic) double sentimentScore;
@property (retain, nonatomic) PPNamedEntityMetadata *metadata;

- (void)setEntity:(id)a0;
- (void)setDecayRate:(double)a0;
- (id)init;
- (void)setInitialScore:(double)a0;
- (void)setMetadata:(id)a0;
- (void)setAlgorithm:(unsigned long long)a0;
- (void)setSource:(id)a0;
- (void)setSentimentScore:(double)a0;
- (void)setExtractionOsBuild:(id)a0;
- (void)setChangeType:(unsigned char)a0;
- (void)setExtractionAssetVersion:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
