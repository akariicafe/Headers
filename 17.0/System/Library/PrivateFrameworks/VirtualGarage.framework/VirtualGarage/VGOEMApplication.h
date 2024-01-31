@class NSArray, NSString, LSApplicationRecord, INCExtensionConnection, NSObject;
@protocol OS_dispatch_queue, VGOEMAppSOCStreaming;

@interface VGOEMApplication : NSObject <INIntentResponseObserver, VGOEMApplication> {
    NSObject<OS_dispatch_queue> *_queue;
    INCExtensionConnection *_chargeStreamingConnection;
}

@property (retain, nonatomic) NSArray *allowedFormulaIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) LSApplicationRecord *applicationRecord;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (weak, nonatomic) id<VGOEMAppSOCStreaming> chargeStreamingDelegate;

- (void)getStateOfChargeForVehicle:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)listCarsWithCompletion:(id /* block */)a0;
- (void)intentResponseDidUpdate:(id)a0 withSerializedCacheItems:(id)a1;
- (unsigned long long)_VGChargingConnectorTypeOptionsFromINCarChargingConnectorTypes:(id)a0;
- (unsigned long long)_VGChargingConnectorTypeOptionFromINCarChargingConnectorType:(id)a0;
- (id)_connectionWithIntent:(id)a0;
- (void)_createChargeStreamingConnectionIfNeededForVehicle:(id)a0;
- (BOOL)_isValidConsumptionModelForResponse:(id)a0;
- (id)_powerByConnectorDictionaryFromCar:(id)a0;
- (id)_vehicleStateFromResponse:(id)a0 error:(id *)a1;
- (id)_vehiclesFromListCarsIntentResponse:(id)a0;
- (id)initWithIdentifier:(id)a0 applicationRecord:(id)a1;
- (void)startSendingChargeUpdatesForVehicle:(id)a0;
- (void)stopSendingChargeUpdatesForVehicle:(id)a0;

@end
