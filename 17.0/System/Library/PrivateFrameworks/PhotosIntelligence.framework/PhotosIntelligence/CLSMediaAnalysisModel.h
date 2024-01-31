@class NSString, CLSSignalNode;

@interface CLSMediaAnalysisModel : NSObject <CLSSignalModel>

@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) double videoScoreThresholdToBeInteresting;
@property (readonly) double videoScoreThresholdToNotBeJunk;
@property (readonly) double autoplaySuggestionScoreThresholdToBeInteresting;
@property (readonly) double autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset;
@property (readonly) CLSSignalNode *settlingEffectScoreNode;
@property (readonly) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)baseMediaAnalysisVersionWithMediaAnalysisVersion:(unsigned long long)a0;

- (id)initForTesting;
- (void).cxx_destruct;
- (id)initWithMediaAnalysisVersion:(unsigned long long)a0;
- (void)setupVersion33;
- (void)setupVersion59;
- (void)setupVersion61;

@end
