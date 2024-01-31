@class NRPairedDeviceRegistry;

@interface _HDDeferredFeaturePropertiesWriting : _HDFeaturePropertiesWriting {
    NRPairedDeviceRegistry *_pairedDeviceRegistry;
}

- (id)initWithLocalDomain:(id)a0 pairedDeviceRegistry:(id)a1;
- (void).cxx_destruct;
- (void)synchronize;

@end
