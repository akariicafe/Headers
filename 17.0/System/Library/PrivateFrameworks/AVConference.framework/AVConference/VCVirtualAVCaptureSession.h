@class NSObject, NSMutableSet, NSMutableArray;
@protocol OS_dispatch_queue;

@interface VCVirtualAVCaptureSession : AVCaptureSession {
    BOOL _isRunning;
    NSMutableSet *_inputs;
    NSMutableSet *_outputs;
    NSMutableSet *_connections;
    NSMutableArray *_batchedConfigurations;
    unsigned int _configurationCount;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

- (id)inputs;
- (void)postNotification:(id)a0;
- (void)beginConfiguration;
- (id)init;
- (id)outputs;
- (void)dealloc;
- (void)addOutput:(id)a0;
- (BOOL)canAddOutput:(id)a0;
- (void)addConnection:(id)a0;
- (void)removeOutput:(id)a0;
- (BOOL)canAddInput:(id)a0;
- (void)addInput:(id)a0;
- (id)connections;
- (void)commitConfiguration;
- (void)removeInput:(id)a0;
- (void)startRunning;
- (void)stopRunning;
- (void)addConnectionWithInput:(id)a0 output:(id)a1;
- (BOOL)connectionExists:(id)a0 output:(id)a1;
- (id)newConnectionWithInputPorts:(id)a0 outputDevice:(id)a1;
- (void)pushConfigurationBlock:(id /* block */)a0;
- (int)startInputDevices;
- (int)stopInputDevices;
- (BOOL)supportsAVCaptureSessionPreset;

@end
