@class NSArray, NSTimer, NSDate, ICCloudThrottlingLevel;

@interface ICCloudThrottlingPolicy : NSObject

@property (nonatomic) unsigned long long currentBatchCount;
@property (retain, nonatomic) NSArray *throttlingLevels;
@property (nonatomic) unsigned long long currentLevelIndex;
@property (readonly, nonatomic) ICCloudThrottlingLevel *currentLevel;
@property double resetInterval;
@property (retain) NSDate *policyStartDate;
@property (retain) NSTimer *policyResetTimer;
@property (readonly, nonatomic) double batchInterval;
@property (readonly, nonatomic) double maximumBatchIntervalFactor;

+ (void)resetSavedPolicyState;

- (id)init;
- (void)dealloc;
- (id)initWithThrottlingLevels:(id)a0 resetInterval:(double)a1;
- (void)savePolicyState;
- (void).cxx_destruct;
- (void)changeLevelIfNecessary;
- (void)startPolicyResetTimer;
- (void)loadSavedPolicyState;
- (void)incrementBatchCount;
- (void)resetPolicy;

@end
