@interface VCMediaStreamStats : NSObject {
    struct tagHANDLE { int x0; } *_summerHandle;
    double _lastRecordingTime;
}

@property (readonly, nonatomic) unsigned int bitrateKbps;
@property (nonatomic) unsigned int maxBitrateKbps;
@property (nonatomic) unsigned int minBitrateKbps;
@property (readonly, nonatomic) double framerate;
@property (nonatomic) double maxFramerate;
@property (nonatomic) double minFramerate;
@property (nonatomic) unsigned short maxFrameDurationMillis;

- (id)init;
- (void)dealloc;
- (unsigned int)getBitrateKbpsSinceTime:(double)a0;
- (double)getFramerateSinceTime:(double)a0;
- (void)recordDataWithSize:(double)a0 atTime:(double)a1;
- (void)updateMinMaxSinceTime:(double)a0;

@end
