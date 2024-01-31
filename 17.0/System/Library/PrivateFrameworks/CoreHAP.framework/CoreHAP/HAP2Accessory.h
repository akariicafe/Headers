@class NSString, NSArray, HAP2PropertyLock, NSNumber;
@protocol HAP2AccessoryDelegate, HAP2PairedAccessoryServerPrivate, HAP2PairedAccessoryServer;

@interface HAP2Accessory : HAP2LoggingObject <HAP2AccessoryPrivate, HAP2Accessory>

@property (readonly, weak, nonatomic) id<HAP2PairedAccessoryServerPrivate> accessoryServerPrivate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSString *productData;
@property (copy, nonatomic) NSArray *services;
@property (readonly, nonatomic) HAP2PropertyLock *propertyLock;
@property (retain, nonatomic) NSNumber *internalSleepIntervalMs;
@property (weak, nonatomic) id<HAP2AccessoryDelegate> delegate;
@property (readonly, weak, nonatomic) id<HAP2PairedAccessoryServer> accessoryServer;
@property (readonly, nonatomic, getter=isPrimary) BOOL primary;
@property (readonly, nonatomic) unsigned long long connectionState;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long instanceID;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) double sleepInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accessoryWithAccessoryServer:(id)a0 instanceID:(unsigned long long)a1 discoveredServices:(id)a2;
+ (BOOL)validateAccessoryInformationService:(id)a0;
+ (BOOL)validateDiscoveredServices:(id)a0 isPrimary:(BOOL)a1;
+ (BOOL)validateProtocolInformationService:(id)a0;

- (void).cxx_destruct;
- (void)_handleUpdatedAccessoryInformationService:(id)a0;
- (void)_handleUpdatedAccessoryRuntimeInformationService:(id)a0;
- (void)_updateDiscoveredServices:(id)a0;
- (void)characteristicValueChanged:(id)a0;
- (id)disableNotificationsForCharacteristics:(id)a0 completion:(id /* block */)a1;
- (id)enableNotificationsForCharacteristics:(id)a0 completion:(id /* block */)a1;
- (id)identifyWithCompletion:(id /* block */)a0;
- (id)initWithAccessoryServer:(id)a0 instanceID:(unsigned long long)a1 discoveredServices:(id)a2;
- (id)internalSleepInterval;
- (id)readValuesForCharacteristics:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)setInternalSleepInterval:(id)a0;
- (void)updateConnectionState:(unsigned long long)a0;
- (BOOL)updateDiscoveredServices:(id)a0;
- (id)writeValuesForCharacteristics:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;

@end
