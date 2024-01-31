@class NSMutableDictionary;

@interface NWActivityAlgosScore : NSObject

@property (retain, nonatomic) NSMutableDictionary *recordedScores;

+ (id)sharedInstance;
+ (void)processingComplete;
+ (void)processNWActivitySuperMetric:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_postSymptomFor:(id)a0 withScore:(unsigned long long)a1;
- (id)_processNWActivityConnections:(id)a0;
- (void)_processNWActivitySuperMetric:(id)a0;
- (void)_processNWActivityTransactions:(id)a0 scoreDict:(id)a1;
- (void)_processingComplete;
- (id)_scoreDictForBundleID:(id)a0 effectiveBundleID:(id)a1;

@end
