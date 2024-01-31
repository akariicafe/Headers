@interface ARDaemonStatusLogger : NSObject

- (void)_logOrGenerateString:(id)a0 fromDictionary:(id)a1 forServerObject:(id)a2 andProcessName:(id)a3 withLogType:(id)a4;
- (void)_logProcessInformationFromDictionary:(id)a0 forServerObject:(id)a1 andProcessName:(id)a2 asInterval:(BOOL)a3 generatedTestString:(id)a4;
- (void)_logSystemInformationFromDictionary:(id)a0 forServerObject:(id)a1 asInterval:(BOOL)a2 generatedTestString:(id)a3;
- (id)generateStringFromStatusLogWithType:(id)a0 fromDictionary:(id)a1 forServerObject:(id)a2 andProcessName:(id)a3;
- (void)logStatusWithType:(id)a0 fromDictionary:(id)a1 forServerObject:(id)a2 andProcessName:(id)a3;

@end
