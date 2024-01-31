@interface PHAGraphForceGraphRebuildTask : PHAGraphRebuildTask

- (int)priority;
- (double)period;
- (id)incrementalKey;
- (id)name;
- (BOOL)currentPlatformIsSupported;
- (id)taskClassDependencies;
- (BOOL)shouldRunWithGraphManager:(id)a0;

@end
