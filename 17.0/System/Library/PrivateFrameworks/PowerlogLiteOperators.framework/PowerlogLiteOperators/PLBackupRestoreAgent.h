@class PLCFNotificationOperatorComposition, MBManager;

@interface PLBackupRestoreAgent : PLAgent

@property (readonly) MBManager *backupRestoreManager;
@property (nonatomic) BOOL backupState;
@property (nonatomic) BOOL restoreState;
@property (retain) PLCFNotificationOperatorComposition *backupRestoreNotification;

+ (id)defaults;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;

- (void)updateRestoreState;
- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventForwardBackupRestore;
- (void).cxx_destruct;
- (void)updateBackupState;
- (void)didChangeEvent:(id)a0 toState:(BOOL)a1;

@end
