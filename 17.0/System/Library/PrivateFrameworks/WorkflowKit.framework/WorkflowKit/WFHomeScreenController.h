@class WFDatabase, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface WFHomeScreenController : NSObject <WFDatabaseObjectObserver>

@property (class, readonly, nonatomic) WFHomeScreenController *sharedInstance;

@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableSet *homeScreenShortcutIDs;

+ (void)migrateWebClipsIfNeededWithDatabaseAccessor:(id /* block */)a0;
+ (void)migratePreYukonWebClipsIfNeeded;
+ (id)iconImageForIcon:(id)a0;
+ (id)iconImageWithImageData:(id)a0;
+ (id)iconImageWithSymbolName:(id)a0 backgroundColor:(id)a1;
+ (void)migrateOpenAppWebClipsIfNeededWithDatabaseAccessor:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;
- (BOOL)addAppShortcutToHomeScreen:(id)a0 withName:(id)a1 image:(id)a2 error:(id *)a3;
- (BOOL)addAppShortcutToHomeScreen:(id)a0 withName:(id)a1 imageData:(id)a2 error:(id *)a3;
- (BOOL)addAppShortcutToHomeScreen:(id)a0 withName:(id)a1 symbolName:(id)a2 backgroundColor:(id)a3 error:(id *)a4;
- (BOOL)addTopHitToHomeScreen:(id)a0 withName:(id)a1 imageData:(id)a2 error:(id *)a3;
- (BOOL)addTopHitToHomeScreen:(id)a0 withName:(id)a1 symbolName:(id)a2 backgroundColor:(id)a3 error:(id *)a4;
- (BOOL)addWorkflowToHomeScreen:(id)a0 withName:(id)a1 icon:(id)a2 error:(id *)a3;
- (BOOL)addWorkflowToHomeScreen:(id)a0 withName:(id)a1 imageData:(id)a2 error:(id *)a3;
- (BOOL)addWorkflowToHomeScreen:(id)a0 withName:(id)a1 symbolName:(id)a2 backgroundColor:(id)a3 error:(id *)a4;
- (BOOL)createHomeScreenShortcutForWorkflow:(id)a0 name:(id)a1 image:(id)a2 error:(id *)a3;
- (BOOL)createHomeScreenShortcutWithTitle:(id)a0 image:(id)a1 shortcutIdentifier:(id)a2 error:(id *)a3;
- (void)getHomeScreenShortcutIDsWithCompletionHandler:(id /* block */)a0;
- (void)startListeningForDatabaseChanges;
- (void)updateWebClipIfNeeded:(id)a0;

@end
