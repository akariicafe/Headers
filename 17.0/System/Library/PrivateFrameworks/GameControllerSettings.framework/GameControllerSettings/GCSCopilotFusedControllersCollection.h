@class NSArray;
@protocol GCUserDefaults, GCSSettingsStoreService;

@interface GCSCopilotFusedControllersCollection : NSObject <GCSCopilotFusedControllers> {
    id<GCUserDefaults> _userDefaults;
}

@property (retain, nonatomic) NSArray *values;
@property (readonly, weak, nonatomic) id<GCSSettingsStoreService> settingsStore;

- (id)copilotFusedControllerForPilotControllerIdentifier:(id)a0;
- (id)copilotFusedControllerForControllerIdentifier:(id)a0;
- (void)updateCopilotFusedControllers:(id)a0;
- (void)dealloc;
- (id)initWithSettingsStore:(id)a0 userDefaults:(id)a1;
- (BOOL)storeVersionIsCompatible;
- (void)_unitTest_saveCopilotFusedControllers:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)copilotFusedControllerForCopilotControllerIdentifier:(id)a0;
- (void)_unitTest_unfuseCopilotFusedController:(id)a0;
- (id)copilotFusedControllerForFusedControllerIdentifier:(id)a0;
- (id)_unitTest_fusePilotController:(id)a0 withCopilot:(id)a1;

@end
