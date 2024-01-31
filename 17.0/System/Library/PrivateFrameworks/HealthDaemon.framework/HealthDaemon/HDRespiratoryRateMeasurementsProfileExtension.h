@class NSString, HDFeatureAvailabilityManager, HDBackgroundFeatureDeliveryManager;

@interface HDRespiratoryRateMeasurementsProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider> {
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_featureDeliveryManager;
    NSString *_featureIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
