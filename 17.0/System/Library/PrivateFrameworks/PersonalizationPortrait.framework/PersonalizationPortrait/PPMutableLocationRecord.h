@class PPLocation, NSUUID, PPSource, NSArray, NSString;

@interface PPMutableLocationRecord : PPLocationRecord

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) PPLocation *location;
@property (retain, nonatomic) PPSource *source;
@property (nonatomic) unsigned short algorithm;
@property (nonatomic) double initialScore;
@property (nonatomic) double decayRate;
@property (nonatomic) double sentimentScore;
@property (retain, nonatomic) NSArray *contextualNamedEntities;
@property (retain, nonatomic) NSString *extractionOsBuild;
@property (nonatomic) unsigned int extractionAssetVersion;

+ (id)new;

- (void)setDecayRate:(double)a0;
- (id)init;
- (void)setInitialScore:(double)a0;
- (void)setAlgorithm:(unsigned short)a0;
- (void)setSource:(id)a0;
- (void)setSentimentScore:(double)a0;
- (void)setExtractionOsBuild:(id)a0;
- (void)setUuid:(id)a0;
- (void)setLocation:(id)a0;
- (void)setExtractionAssetVersion:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setContextualNamedEntities:(id)a0;

@end
