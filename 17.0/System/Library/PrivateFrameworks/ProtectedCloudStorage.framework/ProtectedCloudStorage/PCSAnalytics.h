@interface PCSAnalytics : SFAnalytics

+ (id)logger;
+ (id)databasePath;

- (void)noteEvent:(id)a0;
- (void)logRecoverableError:(id)a0 forEvent:(id)a1 withAttributes:(id)a2;
- (id)dateOfLastSuccessForEvent:(id)a0;
- (void)logUnrecoverableError:(id)a0 forEvent:(id)a1 withAttributes:(id)a2;
- (void)logSuccessForEvent:(id)a0;

@end
