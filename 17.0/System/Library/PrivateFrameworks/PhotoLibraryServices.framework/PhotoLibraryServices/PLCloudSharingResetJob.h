@interface PLCloudSharingResetJob : PLCloudSharingJob

+ (void)resetAllLocalState;

- (void)run;
- (void)runDaemonSide;
- (long long)daemonOperation;

@end
