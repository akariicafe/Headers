@class CRAttestationBaseDeviceHandler;

@interface CRAttestationHandler : NSObject <CRAttestationProtocol> {
    CRAttestationBaseDeviceHandler *handle;
}

+ (id)sharedInstance;

- (id)_init;
- (void).cxx_destruct;
- (void)challengeComponentsWith:(id)a0 withReply:(id /* block */)a1;
- (id)getHandlerForDevice;
- (void)getStrongComponentsWithReply:(id /* block */)a0;

@end
