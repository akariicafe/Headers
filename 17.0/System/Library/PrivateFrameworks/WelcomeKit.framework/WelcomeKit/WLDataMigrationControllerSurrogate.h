@interface WLDataMigrationControllerSurrogate : WLDataMigrationController {
    BOOL _forceDownloadError;
}

- (id)initWithDelegate:(id)a0;
- (id)initWithDelegate:(id)a0 forceDownloadError:(BOOL)a1;
- (void)startMigrationUsingRetryPolicies:(BOOL)a0;

@end
