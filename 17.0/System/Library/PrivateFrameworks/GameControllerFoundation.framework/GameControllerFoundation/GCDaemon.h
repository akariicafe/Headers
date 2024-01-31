@class GCConfigurationAssetManagementServiceConnection, NSString, _GCGenericDeviceDBServiceConnection, GCConfigXPCServiceConnection, NSObject;
@protocol OS_dispatch_workloop;

@interface GCDaemon : NSObject <NSObject> {
    NSObject<OS_dispatch_workloop> *_workloop;
    GCConfigXPCServiceConnection *_configServiceConnection;
    GCConfigurationAssetManagementServiceConnection *_configAssetManagementServiceConnection;
    _GCGenericDeviceDBServiceConnection *_configGenericDeviceDBServiceConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createRootWorkloop;

- (id)init;
- (id)serviceFor:(id)a0 client:(id)a1;
- (void).cxx_destruct;

@end
