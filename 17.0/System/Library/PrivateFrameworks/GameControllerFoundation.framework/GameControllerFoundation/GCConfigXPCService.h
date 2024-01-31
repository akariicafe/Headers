@class NSString, _GCConfigurationDataManager, _GCGenericDeviceDB, NSObject;
@protocol OS_dispatch_workloop;

@interface GCConfigXPCService : NSObject <GCConfigXPCServiceInterface, NSObject> {
    NSObject<OS_dispatch_workloop> *_workloop;
    _GCConfigurationDataManager *_configurationManager;
    _GCGenericDeviceDB *_genericDeviceDB;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)serviceFor:(id)a0 client:(id)a1;
- (void).cxx_destruct;
- (void)connectToAssetManagementServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void)connectToGenericDeviceDBServiceWithClient:(id)a0 reply:(id /* block */)a1;

@end
