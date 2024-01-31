@interface VCVideoQualityInfo : VCObject {
    double _lastGoodVideoQualityTime;
    double _lastBadVideoQualityTime;
    double _lastVideoQualityDegradedSwitchTime;
    double _firstDegradedMeasure;
    double _videoDegradedThreshold;
    double _videoImprovedThreshold;
    double _videoMinFrameRate;
    BOOL _shouldUseExitHysteresis;
}

@property (readonly, nonatomic) BOOL isVideoQualityDegraded;
@property (nonatomic) BOOL videoIsExpected;

- (id)init;
- (void)dealloc;
- (void)resetLastGoodVideoQualityTime:(double)a0;
- (BOOL)updateWithCurrentFramerate:(double)a0 bitrate:(double)a1 time:(double)a2;

@end
