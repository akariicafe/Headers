@protocol WLDataMigrationDelegate;

@interface WLMigrationKitController : WLDaemonConnection

@property (weak, nonatomic) id<WLDataMigrationDelegate> delegate;

- (void)run:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)daemonDidGetInterrupted;

@end
