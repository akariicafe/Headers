@class NSMutableDictionary;

@interface SBLockOverlayStylePropertiesFactory : NSObject {
    NSMutableDictionary *_deviceQualityToProperties;
}

@property (readonly, nonatomic) unsigned long long style;

+ (id)overlayPropertiesFactoryWithStyle:(unsigned long long)a0;

- (id)initWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_fetchAndCachePropsForDeviceQuality:(long long)a0;
- (id)propertiesWithDeviceDefaultGraphicsQuality;
- (id)propertiesWithGraphicsQuality:(long long)a0;

@end
