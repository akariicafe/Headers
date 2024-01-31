@class NSString, NSArray, NSObject, ASDAudioDevice;
@protocol OS_dispatch_queue;

@interface ASDSRCAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate> {
    double _samplingRate;
    NSArray *_samplingRates;
    NSObject<OS_dispatch_queue> *_sampleRateQueue;
    struct { unsigned char valid; double sampleTime; unsigned long long hostTime; unsigned long long seed; } _lastTimestamp;
}

@property (readonly, nonatomic) ASDAudioDevice *underlyingDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)modelUID;
- (unsigned int)clockDomain;
- (id)manufacturerName;
- (id /* block */)getZeroTimestampBlock;
- (unsigned int)timestampPeriod;
- (void)setSamplingRates:(id)a0;
- (int)stopIOForClient:(unsigned int)a0;
- (int)startIOForClient:(unsigned int)a0;
- (double)samplingRate;
- (id)samplingRates;
- (id)modelName;
- (int)performStopIO;
- (void)setDeviceName:(id)a0;
- (void)setSamplingRate:(double)a0;
- (BOOL)clockIsStable;
- (id /* block */)willDoReadInputBlock;
- (unsigned int)clockAlgorithm;
- (BOOL)changeSamplingRate:(double)a0;
- (id)deviceName;
- (unsigned int)inputSafetyOffset;
- (double)sampleRateRatio;
- (BOOL)canBeDefaultSystemDevice;
- (unsigned int)outputSafetyOffset;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (BOOL)isHidden;
- (id /* block */)willDoWriteMixBlock;
- (BOOL)canBeDefaultInputDevice;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (unsigned int)transportType;
- (BOOL)canBeDefaultDevice;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 plugin:(id)a2;
- (BOOL)canBeDefaultOutputDevice;

@end
