@class NSString, CalMigrationToolOptions;
@protocol CalCalendarMigrationDefaultsProvider, CalMigrationController, CalReminderMigrationDefaultsProvider;

@interface CalMigrationToolReminderMigrationDefaultsProvider : NSObject <CalReminderMigrationDefaultsProvider>

@property (readonly, nonatomic) CalMigrationToolOptions *toolOptions;
@property (readonly, nonatomic) id<CalReminderMigrationDefaultsProvider> reminderDefaultsProvider;
@property (readonly, nonatomic) id<CalCalendarMigrationDefaultsProvider> calendarDefaultsProvider;
@property (readonly, nonatomic) id<CalMigrationController> calendarMigrationController;
@property (readonly, nonatomic) BOOL shouldBackupBeforeMigration;
@property (nonatomic) BOOL havePerformedReminderMigrationCleanup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithToolOptions:(id)a0 reminderDefaultsProvider:(id)a1 calendarDefaultsProvider:(id)a2 calendarMigrationController:(id)a3;

@end
