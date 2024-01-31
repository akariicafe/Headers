@class CMIOExtensionClient, NSString, NSObject;
@protocol OS_xpc_object, OS_os_transaction, OS_voucher;

@interface CMIOExtensionProviderContext : NSObject <CMIOExtensionHostProtocol> {
    NSObject<OS_os_transaction> *_transaction;
    NSString *_description;
    NSString *_redactedDescription;
    NSObject<OS_voucher> *_voucher;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) CMIOExtensionClient *clientInfo;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (nonatomic, getter=isClientSourcedByNonStreamingProxyFrontedExtension) BOOL clientSourcedByNonStreamingProxyFrontedExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)redactedDescription;
- (void)invalidate;
- (id)initWithConnection:(id)a0;
- (void)captureAsyncStillImage:(id)a0 message:(id)a1;
- (void)availableDeviceProperties:(id)a0 message:(id)a1;
- (void)availableDevicesChanged:(id)a0;
- (void)availablePluginProperties:(id)a0 message:(id)a1;
- (void)availableStreamProperties:(id)a0 message:(id)a1;
- (void)availableStreamsChangedWithDeviceID:(id)a0 streamIDs:(id)a1;
- (void)devicePropertiesChangedWithDeviceID:(id)a0 propertyStates:(id)a1;
- (void)devicePropertyStates:(id)a0 message:(id)a1;
- (void)deviceStates:(id)a0 message:(id)a1;
- (void)enqueueReactionEffect:(id)a0 message:(id)a1;
- (void)handleClientMessageWithConnection:(id)a0 message:(id)a1;
- (void)pluginPropertiesChanged:(id)a0;
- (void)pluginPropertyStatesForProperties:(id)a0 message:(id)a1;
- (void)pluginStates:(id)a0 message:(id)a1;
- (void)pullSampleBufferForStreamID:(id)a0 replyq:(id)a1 reply:(id /* block */)a2;
- (void)receivedSampleWithStreamID:(id)a0 sample:(id)a1;
- (void)setClientInfo:(id)a0 message:(id)a1;
- (void)setDevicePropertyValues:(id)a0 message:(id)a1;
- (void)setPluginPropertyValues:(id)a0 message:(id)a1;
- (void)setStreamPropertyValues:(id)a0 message:(id)a1;
- (void)startStream:(id)a0 message:(id)a1;
- (void)stopStream:(id)a0 message:(id)a1;
- (void)streamPropertiesChangedWithStreamID:(id)a0 propertyStates:(id)a1;
- (void)streamPropertyStates:(id)a0 message:(id)a1;
- (void)streamScheduledOutputChangedWithStreamID:(id)a0 scheduledOutput:(id)a1;
- (void)updateNonStreamingProxyFrontedExtensionPIDs:(id)a0 message:(id)a1;

@end
