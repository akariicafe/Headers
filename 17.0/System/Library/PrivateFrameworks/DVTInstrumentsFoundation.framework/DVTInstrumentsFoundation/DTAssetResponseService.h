@class NSString;

@interface DTAssetResponseService : DTXService <DTAssetResponseServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;

- (void)messageReceived:(id)a0;
- (id)canContinueServingRequestWithIdentifier:(id)a0;

@end
