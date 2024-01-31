@class NSArray, NSDictionary;

@interface FlexMLSummary : NSObject

@property (copy, nonatomic) NSArray *segments;
@property (copy, nonatomic) NSDictionary *videoCues;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) double lkfsValue;
@property (nonatomic) float peakValue;
@property (readonly, copy, nonatomic) NSArray *allBeats;
@property (readonly, copy, nonatomic) NSArray *allBars;
@property (readonly, copy, nonatomic) NSArray *loopPoints;

+ (id)summaryFromSummaries:(id)a0 targetTimeScale:(int)a1;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 targetTimeScale:(int)a1;

@end
