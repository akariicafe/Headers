@class NSMutableDictionary, _HMContext, NSString, HMSoftwareUpdateDocumentationManager, HMHome;
@protocol HMAccessorySoftwareUpdateControllerV2Delegate, HMESubscriptionProviding;

@interface HMAccessorySoftwareUpdateControllerV2 : NSObject <HMEEventConsumer, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) _HMContext *context;
@property (readonly, weak) HMHome *home;
@property (readonly) id<HMESubscriptionProviding> subscriptionProvider;
@property (readonly, nonatomic) HMSoftwareUpdateDocumentationManager *documentationManager;
@property (readonly) NSMutableDictionary *softwareUpdateByAccessory;
@property (weak) id<HMAccessorySoftwareUpdateControllerV2Delegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)accessoryUUIDsForAccessoryIdentifiers:(id)a0 home:(id)a1;
+ (id)softwareUpdateFromSoftwareUpdateV2:(id)a0;
+ (id)topicFiltersForAccessoryIdentifiers:(id)a0 home:(id)a1;

- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (void)unsubscribe:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (id)initWithContext:(id)a0 home:(id)a1 subscriptionProvider:(id)a2 documentationManager:(id)a3;
- (id)messageDestinationForAccessory:(id)a0;
- (void)applySoftwareUpdate:(id)a0 accessory:(id)a1 completion:(id /* block */)a2;
- (void)fetchDocumentationFromMetadata:(id)a0 completion:(id /* block */)a1;
- (void)handleDidReceiveDescriptorEvent:(id)a0 forAccessory:(id)a1;
- (void)handleDidReceiveEvent:(id)a0 topic:(id)a1;
- (void)handleDidReceiveProgressEvent:(id)a0 forAccessory:(id)a1;
- (void)scanForSoftwareUpdateOnAccessories:(id)a0 withOptions:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)scanForSoftwareUpdateRepeatedlyOnAccessory:(id)a0 andInstallUpdate:(BOOL)a1;
- (id)softwareUpdateForAccessory:(id)a0 withDescriptor:(id)a1;
- (id)softwareUpdateProgressForAccessory:(id)a0 withProgress:(id)a1;
- (void)subscribe:(id)a0 completion:(id /* block */)a1;

@end
