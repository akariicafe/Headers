@class SUSUIUserDefaultsBasedTestSession;

@interface SUSUITestAutomationManager : NSObject

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) SUSUIUserDefaultsBasedTestSession *currentSession;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)initialize;
- (id)description;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)addResponderDelegate:(id)a0 forServiceType:(long long)a1;
- (void)resolveStoredXCUISession:(id)a0;
- (void)setupAutomaticTestingForStoredSession:(id)a0;

@end
