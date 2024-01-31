@class NSMutableArray;

@interface TSDFPSCounter : NSObject {
    NSMutableArray *_sampleArray;
    double _startTimeInterval;
    double _endTimeInterval;
    unsigned long long _frameCount;
}

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (void)addSample:(id)a0;
- (void)addFrame;
- (void)addFrameAtDrawTime:(double)a0;
- (void)addFrameAtDrawTime:(double)a0 duration:(double)a1;
- (id)fpsGraphString;
- (id)fpsSummaryString;
- (id)p_fpsSummaryStringIncludingGraph:(BOOL)a0;
- (id)formatInfoForLog:(id)a0 identifier:(id)a1 type:(id)a2 testName:(id)a3 direction:(id)a4 duration:(double)a5 slide:(long long)a6;
- (id)p_fpsInfo;
- (id)p_modeFromArray:(id)a0;
- (double)p_standardDeviationFromArray:(id)a0 mean:(double)a1;

@end
