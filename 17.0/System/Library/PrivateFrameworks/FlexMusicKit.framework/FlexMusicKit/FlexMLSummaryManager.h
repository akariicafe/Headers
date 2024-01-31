@class NSArray, NSString;

@interface FlexMLSummaryManager : NSObject

@property (readonly, copy, nonatomic) NSArray *allFileNames;
@property (readonly, copy, nonatomic) NSArray *allDurations;
@property (readonly, copy, nonatomic) NSString *rootPath;
@property (readonly, copy, nonatomic) NSString *metadataPath;
@property (readonly, nonatomic) int targetTimeScale;
@property (readonly, nonatomic) NSArray *allSummaryDurations;

- (void).cxx_destruct;
- (id)initWithSummaryMapping:(id)a0 bundlePath:(id)a1 metadataPath:(id)a2 targetTimeScale:(int)a3;
- (id)_summaryForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (double)averageGranularityBetweenSummaries;
- (id)summaryForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
