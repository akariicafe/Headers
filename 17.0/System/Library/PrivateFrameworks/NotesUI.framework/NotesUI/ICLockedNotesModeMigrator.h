@class NSManagedObjectContext, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface ICLockedNotesModeMigrator : NSObject

@property (class, readonly, nonatomic) ICLockedNotesModeMigrator *sharedMigrator;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSDate *authenticatedAt;
@property (readonly, nonatomic) NSManagedObjectContext *workerContext;

- (void).cxx_destruct;
- (BOOL)account:(id)a0 hasNotesLockedWithMode:(short)a1;
- (BOOL)account:(id)a0 supportsMode:(short)a1;
- (void)authenticationStateDidAuthenticate:(id)a0;
- (void)authenticationStateDidDeauthenticate:(id)a0;
- (id)initWithWorkerContext:(id)a0;
- (id)lockedNotesInAccount:(id)a0;
- (void)migrateLockedNotesInAccount:(id)a0 toMode:(short)a1 window:(id)a2 completionHandler:(id /* block */)a3;
- (void)migrateNote:(id)a0 completionHandler:(id /* block */)a1;
- (void)migrateNoteToV1NeoIfNeeded:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentBackwardsCompatibilityAlertIfNeededForAccount:(id)a0 mode:(short)a1 window:(id)a2 confirmHandler:(id /* block */)a3 cancelHandler:(id /* block */)a4;
- (void)presentDivergedModeAlertForNote:(id)a0 mode:(short)a1 window:(id)a2 completionHandler:(id /* block */)a3;
- (void)presentLockedNotesLearnMoreViewForAccount:(id)a0 window:(id)a1;
- (void)presentLockedNotesMigrationPromptIfNeededForAccount:(id)a0 window:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentLockedNotesSwitchMigrationPromptIfSupportedForAccount:(id)a0 window:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentLockedNotesWelcomeMigrationPromptIfSupportedForAccount:(id)a0 window:(id)a1 completionHandler:(id /* block */)a2;
- (void)showMigrationPromptAndMigrateIfNeededForAccount:(id)a0 window:(id)a1;
- (id)unsafelyMigrateNote:(id)a0;
- (id)unsafelyMigrateNotes:(id)a0 progress:(id)a1;

@end
