@class CRFDRBaseDeviceHandler;

@interface CRFDRDeviceController : NSObject {
    CRFDRBaseDeviceHandler *handler;
}

+ (id)sharedSingleton;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (id)getHandlerForDevice;

@end
