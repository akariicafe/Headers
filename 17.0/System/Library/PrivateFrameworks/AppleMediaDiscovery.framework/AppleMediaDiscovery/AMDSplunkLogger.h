@interface AMDSplunkLogger : NSObject

+ (void)flushEvents:(id)a0;
+ (BOOL)checkSchemaValidity:(id)a0;
+ (id)logEvents:(id)a0 toTopic:(id)a1 withSchema:(id)a2;
+ (id)logPayload:(id)a0 error:(id *)a1;

@end
