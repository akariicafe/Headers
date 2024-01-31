@class VCEmulatedNetworkAlgorithmQueueDelay, VCEmulatedNetworkAlgorithmQueueBandwidth, VCEmulatedNetworkAlgorithmQueueLoss;

@interface VCEmulatedNetworkQueue : VCEmulatedNetworkElement {
    VCEmulatedNetworkAlgorithmQueueBandwidth *_queueBandwidthAlgorithm;
    VCEmulatedNetworkAlgorithmQueueLoss *_queueLossAlgorithm;
    VCEmulatedNetworkAlgorithmQueueDelay *_queueDelayAlgorithm;
    double _lastPolicyLoadingTime;
}

- (int)write:(id)a0;
- (void)dealloc;
- (id)initWithPolicies:(id)a0;
- (void)markPacketLoss:(id)a0;
- (int)dequeuePacket:(id)a0 time:(double)a1;
- (int)enqueuePacket:(id)a0;
- (void)runUntilTime:(double)a0;
- (void)updateSettingsAtTime:(double)a0;

@end
