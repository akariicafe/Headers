@interface AMDFrameworkMetrics : NSObject

+ (void)flush;
+ (void)provisionInstanceAtVerbosity:(char)a0 andAction:(id)a1 andVersion:(id)a2 andBuild:(id)a3 andStorefrontId:(id)a4 withLoggingProbability:(id)a5;
+ (void)log:(id)a0 withKey:(id)a1 atVerbosity:(char)a2;

@end
