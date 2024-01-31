@class VNProcessingDevice, NSString;
@protocol MLComputeDeviceProtocol;

@interface VNProcessingDeviceComputeDeviceBridge : NSObject <MLComputeDeviceProtocol> {
    VNProcessingDevice *_processingDevice;
}

@property (readonly) VNProcessingDevice *processingDevice;
@property (readonly) id<MLComputeDeviceProtocol> computeDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
