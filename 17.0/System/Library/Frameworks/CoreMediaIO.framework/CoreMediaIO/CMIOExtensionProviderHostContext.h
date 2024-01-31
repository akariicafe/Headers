@class NSString, NSObject;
@protocol OS_dispatch_group, OS_xpc_object, CMIOExtensionProviderHostDelegate, OS_dispatch_queue;

@interface CMIOExtensionProviderHostContext : NSObject <CMIOExtensionProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_transactionGroup;
    NSString *_description;
    NSString *_redactedDescription;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, weak, nonatomic) id<CMIOExtensionProviderHostDelegate> delegate;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)redactedDescription;
- (id)initWithConnection:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)completeTransaction;
- (void)deviceStatesWithDeviceID:(id)a0 reply:(id /* block */)a1;
- (void)scheduledOutputChanged:(id)a0 message:(id)a1;
- (void)availableDevicePropertiesWithDeviceID:(id)a0 reply:(id /* block */)a1;
- (void)availableDevicesChanged:(id)a0 message:(id)a1;
- (void)availablePluginProperties:(id /* block */)a0;
- (void)availableStreamPropertiesWithStreamID:(id)a0 reply:(id /* block */)a1;
- (void)availableStreamsChanged:(id)a0 message:(id)a1;
- (void)captureAsyncStillImageWithStreamID:(id)a0 uniqueID:(long long)a1 options:(id)a2 reply:(id /* block */)a3;
- (void)devicePropertiesChanged:(id)a0 message:(id)a1;
- (void)devicePropertyStatesWithDeviceID:(id)a0 properties:(id)a1 reply:(id /* block */)a2;
- (void)enqueueReactionEffect:(id)a0 reactionType:(id)a1 reply:(id /* block */)a2;
- (void)handleClientMessageWithConnection:(id)a0 message:(id)a1;
- (void)pluginPropertiesChanged:(id)a0 message:(id)a1;
- (void)pluginPropertyStatesForProperties:(id)a0 reply:(id /* block */)a1;
- (void)pluginStates:(id /* block */)a0;
- (void)pullSample:(id)a0 message:(id)a1;
- (void)receivedSample:(id)a0 message:(id)a1;
- (void)refreshExtensionConnection;
- (void)sendEmptyClientInfo;
- (void)setDevicePropertyValuesWithDeviceID:(id)a0 propertyValues:(id)a1 reply:(id /* block */)a2;
- (void)setPluginPropertyValues:(id)a0 reply:(id /* block */)a1;
- (void)setStreamPropertyValuesWithStreamID:(id)a0 propertyValues:(id)a1 reply:(id /* block */)a2;
- (void)startStreamWithStreamID:(id)a0 reply:(id /* block */)a1;
- (void)stopStreamWithStreamID:(id)a0 reply:(id /* block */)a1;
- (void)streamPropertiesChanged:(id)a0 message:(id)a1;
- (void)streamPropertyStatesWithStreamID:(id)a0 properties:(id)a1 reply:(id /* block */)a2;

@end
