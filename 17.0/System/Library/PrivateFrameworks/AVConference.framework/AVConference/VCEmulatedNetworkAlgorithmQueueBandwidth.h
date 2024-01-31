@class NSString, NSDictionary;

@interface VCEmulatedNetworkAlgorithmQueueBandwidth : NSObject <VCEmulatedNetworkAlgorithm> {
    NSDictionary *_policies;
    unsigned int _networkQueueServiceRate;
    unsigned int _networkQueueServiceRateMean;
    unsigned int _networkQueueServiceRateStdDev;
    unsigned int _networkQueueAQMRate;
    int _currentIndexForServiceRate;
    int _currentIndexForServiceRateDistribution;
    int _currentIndexForAQMRate;
    double _lastNetworkQueueServiceRateLoadTime;
    double _lastNetworkQueueServiceRateDistributionLoadTime;
    double _lastNetworkQueueAQMRateLoadTime;
    double _budgetBufferPktTime[4096];
    double _budgetBufferPktSize[4096];
    int _budgentBufferIndex;
    int _budgetBufferSize;
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
- (void)addPacketToBudgetBuffer:(id)a0;
- (double)computeNetworkServiceRate;
- (int)getRemainingAQMBudgetWithPacket:(id)a0;
- (BOOL)shouldDropPacketWithCurrentAQMBudget:(id)a0;
- (void)updateSettingsAtTime:(double)a0 impairments:(id)a1;

@end
