@class NSString;

@interface AXPhoenixMitigatorConfiguration : NSObject

@property (retain, nonatomic) NSString *disableWhenDisplayOffConfigurationKey;
@property (retain, nonatomic) NSString *disableWhenDeviceLockedConfigurationKey;
@property (nonatomic) BOOL disableWhenDisplayOff;
@property (nonatomic) BOOL disableWhenDeviceLocked;

- (id)init;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)a0 missingKeys:(id)a1;
- (void)_initializeKeys;
- (void)_parseFromDictionary:(id)a0 missingKeys:(id)a1;
- (void)_setDefaultConfiguration;

@end
