@class NSMutableDictionary, NSString, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HDDeviceInformationService : HDHealthService

@property (retain, nonatomic) NSMutableDictionary *characteristics;
@property (retain, nonatomic) NSMutableDictionary *propertyValues;
@property (retain, nonatomic) NSMutableSet *propertiesLeftToFetch;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL deviceInformationHasBeenLoaded;
@property (retain, nonatomic) NSMutableArray *pendingDeviceInformationLoadedBlocks;
@property (readonly) NSString *manufacturerName;
@property (readonly) NSString *modelNumber;
@property (readonly) NSString *serialNumber;
@property (readonly) NSString *hardwareRevision;
@property (readonly) NSString *firmwareRevision;
@property (readonly) NSString *softwareRevision;
@property (nonatomic) BOOL fetchLimitedCharacteristics;

+ (id)serviceUUID;
+ (long long)serviceType;
+ (id)implementedProperties;

- (void).cxx_destruct;
- (id)initWithServiceManager:(id)a0 peripheral:(id)a1 advertisementData:(id)a2 profile:(id)a3;
- (void)performWhenDeviceInformationHasBeenLoaded:(id /* block */)a0;
- (void)peripheral:(id)a0 didDiscoverCharacteristic:(id)a1;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 updateTime:(id)a2 error:(id)a3;
- (void)readProperty:(id)a0;

@end
