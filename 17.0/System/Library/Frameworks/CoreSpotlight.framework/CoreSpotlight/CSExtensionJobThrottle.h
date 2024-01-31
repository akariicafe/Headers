@class NSMutableDictionary;

@interface CSExtensionJobThrottle : NSObject

@property (nonatomic) unsigned long long maxRetryCount;
@property (nonatomic) unsigned long long minSecondsBetweenRetries;
@property (nonatomic) unsigned long long maxSecondsBetweenRetries;
@property (nonatomic) unsigned long long minSecondsBetweenRetriesUnderMemoryPressure;
@property (nonatomic) unsigned long long maxSecondsBetweenRetriesUnderMemoryPressure;
@property (retain, nonatomic) NSMutableDictionary *countersByBundleID;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (long long)nextDispatchTimeDeltaForExtension:(id)a0 job:(id)a1 memoryPressure:(BOOL)a2;

@end
