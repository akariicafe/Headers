@class NSString, NSMutableArray;

@interface MRVirtualOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
}

- (void)resetPredictedOutputDevice;
- (id)initWithUID:(id)a0;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)setOutputDevices:(id)a0 withPassword:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)setVolume:(float)a0;
- (id)predictedOutputDevice;
- (BOOL)supportsVolumeControl;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)a0 block:(id /* block */)a1;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (BOOL)isVolumeControlAvailable;
- (id)outputDevices;
- (float)volume;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)contextID;
- (unsigned int)type;

@end
