@class NSArray, AVCaptureOutput;

@interface VCVirtualAVCaptureConnection : AVCaptureConnection {
    AVCaptureOutput *_output;
    NSArray *_ports;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

@property (nonatomic, getter=isVideoRetainedBufferCountHintSupported) BOOL videoRetainedBufferCountHintSupported;
@property (nonatomic) int videoRetainedBufferCountHint;
@property (nonatomic, getter=isActive) BOOL active;

- (id)output;
- (void)dealloc;
- (void)invalidate;
- (BOOL)active;
- (id)inputPorts;
- (id)initWithInputPorts:(id)a0 output:(id)a1;

@end
