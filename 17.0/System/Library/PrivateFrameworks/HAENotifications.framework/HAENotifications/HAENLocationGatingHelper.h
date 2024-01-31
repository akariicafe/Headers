@class NSString, HAENGeoLocation, NSDictionary, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface HAENLocationGatingHelper : NSObject {
    HAENGeoLocation *_geoLocation;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSDictionary *_regionBehavior;
    BOOL _EUVolumeLimitFlagOn;
    NSNumber *_productTypeOverride;
    struct { NSString *countryCode; NSString *source; NSString *disposition; BOOL featureMandatory; BOOL EUVolumeLimitBehavior; } _stats;
}

+ (id)sharedInstance;

- (void)_updateImpl;
- (id)init;
- (BOOL)_isMandatoryDeviceClass;
- (void)dealloc;
- (void)_setHEANEnabled:(id)a0;
- (id)_readDeviceDisposition;
- (BOOL)_shouldUpdateLocation:(id)a0;
- (void)update;
- (void)_loadRegionPlistFile;
- (void)_updateStatsWithGeoLocation:(id)a0 disposition:(id)a1 andMandatoryFlag:(BOOL)a2;
- (BOOL)_isIPad;
- (int)_getMGProductType;
- (void)_updateLocationGatingFlags;
- (struct { id x0; id x1; id x2; BOOL x3; BOOL x4; })getStats;
- (void)_updateSampleTransient:(id)a0;
- (void)_logLocationGatingFlags;
- (void)deviceDataDispositionDidChange;
- (void)_contryConfigurationDidChange:(id)a0;
- (BOOL)_isIPod;
- (void)_setFeatureMandatoryFlag:(id)a0;
- (void).cxx_destruct;
- (void)reloadProductTypeOverride;
- (void)_donateSignalToTipsKitOnInitialization;
- (BOOL)_regionAndDeviceMandatesFeature:(id)a0;
- (BOOL)_isHAENFeatureMandatory:(id)a0 dataDisposition:(id)a1;
- (BOOL)_validDataDisposition:(id)a0;
- (void)_donateSignalToTipsKit:(BOOL)a0;
- (BOOL)_validCountryCodeSource:(unsigned int)a0;

@end
