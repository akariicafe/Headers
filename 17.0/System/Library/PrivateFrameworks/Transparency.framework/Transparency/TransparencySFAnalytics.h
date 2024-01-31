@interface TransparencySFAnalytics : SFAnalytics

+ (id)logger;
+ (id)databasePath;

- (void)logSoftFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2;
- (void)logSuccessForEventNamed:(id)a0;
- (void)noteEventNamed:(id)a0;
- (void)logMetric:(id)a0 withName:(id)a1;
- (void)logHardFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)backgroundPerform:(id /* block */)a0;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 withAttributes:(id)a3;

@end
