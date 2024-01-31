@class NSArray, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface CMIOExtensionDiscoverySession : NSObject <CMIOExtensionSessionProviderDelegate> {
    NSObject<OS_xpc_event_publisher> *_extensionEventPublisher;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_providersByBundleIdentifier;
}

@property (readonly, copy) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)_invalidateProvider:(id)a0;
- (void)completeRegistrationForBundleID:(id)a0 token:(unsigned long long)a1;
- (id)copyProviderBundleID;
- (void)postDeviceChangeNotification;
- (void)provider:(id)a0 availableDevicesChanged:(id)a1;
- (void)provider:(id)a0 didFailWithError:(id)a1;
- (void)provider:(id)a0 initializeDevices:(id)a1 properties:(id)a2;
- (void)provider:(id)a0 propertiesChanged:(id)a1;
- (void)providerHasBeenInvalidated:(id)a0;
- (void)setUpRegistration;

@end
