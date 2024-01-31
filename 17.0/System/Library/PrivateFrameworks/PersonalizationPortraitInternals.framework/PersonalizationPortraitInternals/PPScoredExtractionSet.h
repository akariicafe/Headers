@class NSArray, NSMutableDictionary, PPSource, NSMutableArray;

@interface PPScoredExtractionSet : NSObject

@property (retain, nonatomic) NSArray *entities;
@property (retain, nonatomic) NSArray *topics;
@property (retain, nonatomic) NSMutableArray *topicsExactMatchesInSourceText;
@property (retain, nonatomic) NSMutableDictionary *locations;
@property (retain, nonatomic) PPSource *source;
@property (nonatomic) unsigned long long entityAlgorithm;
@property (nonatomic) unsigned long long topicAlgorithm;
@property (nonatomic) BOOL cloudSync;
@property (nonatomic) double decayRate;
@property (nonatomic) double sentimentScore;

- (id)numberOfExtractions;
- (void)flushWrites;
- (id)description;
- (void).cxx_destruct;
- (void)writeWithEntityStore:(id)a0;
- (void)writeSynchronous;
- (unsigned long long)_donateLocationsWithContextualNamedEntities:(id)a0;
- (void)addLocation:(id)a0 algorithm:(unsigned short)a1;

@end
