@class NSString;

@interface VCEmulatedNetworkAlgorithmQueueLoss : NSObject <VCEmulatedNetworkAlgorithm> {
    double _networkQueueLossRate;
    unsigned int _networkQueueLossPattern;
    long long _packetTypeForNetworkQueueLossPattern;
    unsigned int _networkQueueMaxSize;
    unsigned int _networkQueueMaxSizeBytes;
    int _currentIndexForLossRate;
    int _currentIndexForLossPattern;
    int _currentLossPatternShift;
    int _currentIndexForQueueSize;
    int _currentIndexForQueueSizeBytes;
    double _lastNetworkQueueLossRateLoadTime;
    double _lastNetworkQueueLossPatternLoadTime;
    double _lastNetworkQueueSizeLoadTime;
    double _lastNetworkQueueSizeBytesLoadTime;
}

@property (readonly, nonatomic) double expectedProcessEndTime;
@property unsigned int packetCountInNetworkQueue;
@property int packetCountBytesInNetworkQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)process:(id)a0;
- (void)updateSettingsAtTime:(double)a0 impairments:(id)a1;

@end
