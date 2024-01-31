@class WFDatabase, NSString, WFDatabaseResult, WFHomeManager;
@protocol WFAutomationTriggerDataSourceDelegate;

@interface WFAutomationTriggerDataSource : NSObject <HMHomeDelegate, WFHomeManagerEventObserver, WFDatabaseResultObserver>

@property (readonly, nonatomic) WFDatabase *database;
@property (retain, nonatomic) WFHomeManager *homeManager;
@property (readonly, nonatomic) WFDatabaseResult *personalAutomationsDatabaseResult;
@property (weak, nonatomic) id<WFAutomationTriggerDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDatabase:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)allConfiguredTriggers;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)home:(id)a0 didAddTrigger:(id)a1;
- (void)home:(id)a0 didRemoveTrigger:(id)a1;
- (void)home:(id)a0 didUpdateNameForTrigger:(id)a1;
- (void)home:(id)a0 didUpdateTrigger:(id)a1;
- (void)homeDidUpdateName:(id)a0;
- (void)databaseResultDidChange:(id)a0;
- (id)allHomeTriggers;

@end
