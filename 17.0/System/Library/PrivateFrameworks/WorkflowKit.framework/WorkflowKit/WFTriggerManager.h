@class WFDatabase;

@interface WFTriggerManager : NSObject

@property (readonly, nonatomic) WFDatabase *database;

- (id)initWithDatabase:(id)a0;
- (void).cxx_destruct;
- (id)allConfiguredTriggers;
- (void)disableTriggersWithIdentifiers:(id)a0;
- (void)disableAllTriggers;
- (BOOL)updateNotificationLevel:(int)a0 forConfiguredTrigger:(id)a1 error:(id *)a2;
- (void)associateWorkflowToTriggerID:(id)a0 deletingExistingReference:(BOOL)a1 notifyDaemon:(BOOL)a2 workflowReference:(id)a3 completion:(id /* block */)a4;
- (id)configuredTriggerWithID:(id)a0;
- (void)deleteTriggerWithIdentifier:(id)a0 notifyDaemon:(BOOL)a1 completion:(id /* block */)a2;
- (void)saveNewConfiguredTrigger:(id)a0 notifyDaemon:(BOOL)a1 completion:(id /* block */)a2;
- (void)saveNewConfiguredTrigger:(id)a0 workflow:(id)a1 notifyDaemon:(BOOL)a2 completion:(id /* block */)a3;
- (void)saveNewConfiguredTrigger:(id)a0 workflowReference:(id)a1 notifyDaemon:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateConfiguredTrigger:(id)a0 triggerID:(id)a1 notifyDaemon:(BOOL)a2 completion:(id /* block */)a3;

@end
