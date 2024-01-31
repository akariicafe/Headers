@class NSString, NSArray, CMIOExtensionProviderHostContext, NSSet, NSMutableDictionary;
@protocol CMIOExtensionSessionProviderDelegate;

@interface CMIOExtensionSessionProvider : NSObject <CMIOExtensionProviderHostDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<CMIOExtensionSessionProviderDelegate> _delegate;
    NSMutableDictionary *_propertyStates;
    NSSet *_availableProperties;
    NSArray *_deviceIDs;
    NSMutableDictionary *_devicesMap;
    NSMutableDictionary *_streamsMap;
    NSString *_description;
    NSString *_bundleID;
}

@property (readonly, nonatomic) CMIOExtensionProviderHostContext *hostContext;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly, weak, nonatomic) id<CMIOExtensionSessionProviderDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *devices;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSSet *availableProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionProviderWithEndpoint:(id)a0 delegate:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)completeTransaction;
- (void)extension:(id)a0 didFailWithError:(id)a1;
- (id)cachedPropertyStateForProperty:(id)a0;
- (void)propertyStatesForProperties:(id)a0 reply:(id /* block */)a1;
- (void)setPropertyValues:(id)a0 reply:(id /* block */)a1;
- (id)cachedPropertyStatesForProperties:(id)a0;
- (void)extension:(id)a0 availableDevicesChanged:(id)a1;
- (void)extension:(id)a0 availableStreamsChangedWithDeviceID:(id)a1 streamIDs:(id)a2;
- (void)extension:(id)a0 devicePropertiesChangedWithDeviceID:(id)a1 propertyStates:(id)a2;
- (void)extension:(id)a0 pluginPropertiesChanged:(id)a1;
- (void)extension:(id)a0 pullSampleWithStreamID:(id)a1 reply:(id /* block */)a2;
- (void)extension:(id)a0 receivedSampleWithStreamID:(id)a1 sample:(id)a2;
- (void)extension:(id)a0 streamPropertiesChangedWithStreamID:(id)a1 propertyStates:(id)a2;
- (void)extension:(id)a0 streamScheduledOutputChangedWithStreamID:(id)a1 scheduledOutput:(id)a2;
- (void)extensionHasBeenInvalidated:(id)a0;
- (id)initWithEndpoint:(id)a0 delegate:(id)a1;
- (void)refreshExtensionConnection;
- (BOOL)registerStream:(id)a0 streamID:(id)a1;
- (id)unregisterStreamID:(id)a0;

@end
