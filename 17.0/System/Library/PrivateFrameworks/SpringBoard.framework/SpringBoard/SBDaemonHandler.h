@interface SBDaemonHandler : NSObject

+ (void)initialize;
+ (id)stateDescription;
+ (BOOL)addRequest:(id)a0 forKey:(id)a1 forDaemonPid:(int)a2;
+ (void)removeRequestForKey:(id)a0 forDaemonPid:(int)a1;
+ (void)noteDaemonCanceled:(id)a0;

@end
