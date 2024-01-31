@class IRMobileAssetClient, IRBackgroundActivitiesManager, NSObject;
@protocol OS_dispatch_queue;

@interface IRMobileAssetManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) IRBackgroundActivitiesManager *backgroundActivitiesManager;
@property (retain, nonatomic) IRMobileAssetClient *mobileAssetClient;

- (void).cxx_destruct;
- (void)_handleMobileAssetLoadXPCActivity;
- (void)_loadAvailableMobileAsset;
- (void)_loadMobileAssetAtPath:(id)a0 assetVersion:(id)a1;
- (id)initWithBackgroundActivitiesManager:(id)a0;

@end
