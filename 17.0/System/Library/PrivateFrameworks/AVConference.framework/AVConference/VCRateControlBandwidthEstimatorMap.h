@class VCRateControlServerBag, NSMutableDictionary, VCRateControlBandwidthEstimator;

@interface VCRateControlBandwidthEstimatorMap : NSObject {
    double _estimatedBandwidth;
    double _estimatedBandwidthUncapped;
    NSMutableDictionary *_estimatorMap;
    unsigned int _currentActiveEstimatorID;
    int _state;
    VCRateControlBandwidthEstimator *_defaultEstimator;
    int _bandwidthEstimationState;
    BOOL _fastSuddenBandwidthDetectionEnabled;
    void *_logBWEDump;
}

@property (nonatomic) double estimatedBandwidth;
@property (nonatomic) double estimatedBandwidthUncapped;
@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic) unsigned int mode;
@property (readonly, nonatomic) int bandwidthEstimationState;
@property (retain, nonatomic) VCRateControlServerBag *serverBag;

- (id)init;
- (void)dealloc;

@end
