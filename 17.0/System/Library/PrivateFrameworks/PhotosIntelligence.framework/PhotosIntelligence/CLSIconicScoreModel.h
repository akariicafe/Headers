@class NSString;

@interface CLSIconicScoreModel : NSObject <CLSSignalModel>

@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) double lowestPossibleIconicScore;
@property (readonly) double minimumMeaningfulIconicScore;
@property (readonly) double mediumIconicScore;
@property (readonly) double highIconicScore;
@property (readonly) double similarIconicScoreThreshold;
@property (readonly) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)a0;

- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)a0;
- (unsigned long long)bucketForIconicScore:(double)a0;
- (void)setupVersion100;
- (void)setupVersion96;

@end
