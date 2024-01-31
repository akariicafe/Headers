@interface FPCorpseProcess : FPUserProcess

- (void)_gatherIdleExitStatus;
- (BOOL)_populateTask;
- (BOOL)_isAlive;

@end
