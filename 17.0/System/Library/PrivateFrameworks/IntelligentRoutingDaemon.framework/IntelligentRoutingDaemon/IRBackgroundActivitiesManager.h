@class IRAnalyticsManager, IRMobileAssetManager, IRCleanupManager, IRSessionServer;

@interface IRBackgroundActivitiesManager : NSObject

@property (weak, nonatomic) IRSessionServer *server;
@property (nonatomic) int userDefaultsRefreshToken;
@property (retain, nonatomic) IRAnalyticsManager *analyticsManager;
@property (retain, nonatomic) IRCleanupManager *cleanupManager;
@property (retain, nonatomic) IRMobileAssetManager *mobileAssetManager;

- (id)initWithServer:(id)a0;
- (void).cxx_destruct;
- (void)registerForRepeatingBackgroundXPCActivityWithIdentifier:(id)a0 interval:(long long)a1 isDiskIntensive:(BOOL)a2 isMemoryIntensive:(BOOL)a3 handler:(id /* block */)a4;

@end
