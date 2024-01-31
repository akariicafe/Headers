@class NSString, NSXPCConnection, NSHashTable, GEOObserverHashTable, geo_isolater, NSObject;
@protocol OS_dispatch_queue;

@interface VGVirtualGarageService : NSObject <VGVirtualGarageObserver, VGVirtualGarageActions> {
    NSHashTable *_clients;
    geo_isolater *_clientsIsolater;
    GEOObserverHashTable *_observers;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy) NSString *activeVehicleIdentifier;

+ (id)sharedService;
+ (BOOL)canUseVirtualGarageXPCService;

- (id)init;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)_openConnection;
- (void)virtualGarageSetShouldUsePreferredNetworks:(BOOL)a0 forVehicle:(id)a1;
- (void)_closeConnection;
- (void)virtualGarageAddVehicle:(id)a0;
- (void)virtualGarageSaveVehicle:(id)a0;
- (void)virtualGarageSelectVehicle:(id)a0;
- (void)virtualGarageGetListOfUnpairedVehiclesWithReply:(id /* block */)a0;
- (void)virtualGarageStartContinuousUpdatesIfNeeded;
- (void)virtualGarageSetAssumesFullCharge:(BOOL)a0;
- (void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(id)a0 syncAcrossDevices:(BOOL)a1 withReply:(id /* block */)a2;
- (void)virtualGarageRemoveVehicle:(id)a0;
- (void)virtualGarageOnboardVehicle:(id)a0;
- (void).cxx_destruct;
- (void)virtualGarageDidUpdate:(id)a0;
- (void)virtualGarage:(id)a0 didUpdateUnpairedVehicles:(id)a1;
- (void)virtualGarageGetGarageWithReply:(id /* block */)a0;
- (void)closeForClient:(id)a0;
- (void)virtualGarageForceFetchAllVehicles;
- (void)openForClient:(id)a0;
- (void)virtualGarageEndContinuousUpdates;
- (void)_clearActiveVehicleIdentifierIfNeeded:(id)a0;
- (id)messageTargetWithErrorReply:(id /* block */)a0;

@end
