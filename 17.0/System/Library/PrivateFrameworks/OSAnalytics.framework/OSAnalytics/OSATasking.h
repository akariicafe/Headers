@interface OSATasking : NSObject

+ (id)selectConfigFromBlob:(id)a0 withError:(id *)a1;
+ (id)applyTasking:(id)a0 taskId:(id)a1 fromBlob:(id)a2;
+ (void)checkTaskingRelevance;
+ (id)getAvailableTaskingRoutings;
+ (id)getDefaultTasking;
+ (id)getInstalledTaskIds;
+ (id)normalizeInstructions:(id)a0;
+ (BOOL)preference:(id)a0 alreadySetInInstructions:(id)a1;
+ (id)proxyTasking:(id)a0 taskId:(id)a1 usingConfig:(id)a2 fromBlob:(id)a3;
+ (void)setCRKeyToRandomValue;
+ (BOOL)shouldApplyPreference:(id)a0;

@end
