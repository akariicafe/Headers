@interface PKProvisioningExternalDeviceFlowItem : NSObject {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ provisionedPasses;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ _isCardsOnFileProvisioning;
}

- (id)init;
- (void).cxx_destruct;
- (id)extract;
- (id)initWithContext:(id)a0 pass:(id)a1 externalOptions:(id)a2 cardIdentifier:(id)a3;

@end
