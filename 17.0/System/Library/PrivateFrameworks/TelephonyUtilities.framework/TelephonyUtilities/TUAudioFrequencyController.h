@class AVCAudioPowerSpectrumMeter, NSString, NSObject;
@protocol TUAudioFrequencyControllerDelegate, OS_dispatch_queue;

@interface TUAudioFrequencyController : NSObject <AVCAudioPowerSpectrumMeterDelegate>

@property (readonly, weak, nonatomic) id<TUAudioFrequencyControllerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) AVCAudioPowerSpectrumMeter *powerSpectrumMeter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (float)normalizedPowerLevelForPowerSpectrum:(id)a0;
+ (float)rawPowerLevelForPowerSpectrum:(id)a0;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (unsigned int)_avcTapTypeForTUTapType:(long long)a0;
- (void)audioPowerSpectrumMeter:(id)a0 didUpdateAudioPowerSpectrums:(id)a1;
- (void)meterServerDidDisconnect:(id)a0;
- (void)registerCellularPowerSpectrum:(long long)a0;
- (void)registerParticipantPowerSpectrum:(long long)a0;
- (void)unregisterCellularPowerSpectrum:(long long)a0;
- (void)unregisterParticipantPowerSpectrum:(long long)a0;

@end
