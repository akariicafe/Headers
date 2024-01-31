@class NSString;
@protocol SWDatastoreManager, SWScriptsManager;

@interface SWLocalDatastoreSetupTask : NSObject <SWSetupTask>

@property (readonly, nonatomic) id<SWDatastoreManager> datastoreManager;
@property (readonly, nonatomic) id<SWScriptsManager> scriptsManager;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performSetup;
- (id)initWithDatastoreManager:(id)a0 scriptsManager:(id)a1;

@end
