@class HDFeatureAvailabilityManager, NSString, HDProfile, HDNotificationSyncClient, NSObject;
@protocol OS_dispatch_queue;

@interface HDExampleFeatureProfileExtension : NSObject <HDNotificationSyncClientDelegate, HDFeatureAvailabilityExtensionProvider> {
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
    HDNotificationSyncClient *_notificationSyncClient;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_featureIdentifier;
    HDProfile *_profile;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
