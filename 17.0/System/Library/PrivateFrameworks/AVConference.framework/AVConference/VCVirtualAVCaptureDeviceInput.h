@class NSArray, VCVirtualAVCaptureDevice;

@interface VCVirtualAVCaptureDeviceInput : AVCaptureDeviceInput {
    NSArray *_ports;
    VCVirtualAVCaptureDevice *_device;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

- (void)disconnect;
- (id)device;
- (void)dealloc;
- (id)ports;
- (id)initWithDevice:(id)a0 error:(id *)a1;

@end
