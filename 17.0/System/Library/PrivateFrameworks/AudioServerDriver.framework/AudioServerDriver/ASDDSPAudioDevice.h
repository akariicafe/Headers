@class NSString, ASDAudioDeviceDSPDatabase, ASDAudioDeviceDSPConfiguration, ASDAudioDevice;

@interface ASDDSPAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate> {
    NSString *_resourcePath;
}

@property (retain, nonatomic) ASDAudioDeviceDSPConfiguration *currentDSPConfiguration;
@property (readonly, nonatomic) ASDAudioDevice *underlyingDevice;
@property (readonly, nonatomic) ASDAudioDeviceDSPDatabase *dspDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dspItemsInConfiguration:(id)a0 notInConfiguration:(id)a1;

- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (id)modelUID;
- (unsigned int)clockDomain;
- (id)manufacturerName;
- (id /* block */)getZeroTimestampBlock;
- (unsigned int)timestampPeriod;
- (unsigned int)inputLatency;
- (int)stopIOForClient:(unsigned int)a0;
- (int)startIOForClient:(unsigned int)a0;
- (double)samplingRate;
- (id)samplingRates;
- (id)modelName;
- (void)setDeviceName:(id)a0;
- (unsigned int)outputLatency;
- (void)setSamplingRate:(double)a0;
- (BOOL)clockIsStable;
- (id)driverClassName;
- (id /* block */)willDoReadInputBlock;
- (unsigned int)clockAlgorithm;
- (BOOL)changeSamplingRate:(double)a0;
- (void)removeInputStream:(id)a0;
- (BOOL)applyStreamDSPConfiguration:(id)a0 toStream:(id)a1;
- (id)deviceName;
- (unsigned int)inputSafetyOffset;
- (BOOL)updateDeviceDSPConfiguration;
- (BOOL)applyDeviceDSPConfiguration:(id)a0;
- (BOOL)canBeDefaultSystemDevice;
- (unsigned int)outputSafetyOffset;
- (void)removeOutputStream:(id)a0;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (BOOL)isHidden;
- (BOOL)underlyingDeviceHasAllProperties:(id)a0;
- (id /* block */)willDoWriteMixBlock;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 deviceDSPDatabase:(id)a2 plugin:(id)a3;
- (BOOL)canBeDefaultInputDevice;
- (void)addInputStream:(id)a0;
- (void)addOutputStream:(id)a0;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (unsigned int)transportType;
- (id)findDSPConfigurationForCurrentState;
- (BOOL)canBeDefaultDevice;
- (BOOL)canBeDefaultOutputDevice;

@end
