@class SCMLVideoAnalyzer, NSDictionary, NSMutableArray, SCMLHandler;

@interface MADVideoSafetyClassifier : VCPVideoAnalyzer {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastProcess;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _start;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _end;
    float _processTimeInterval;
    short _sensitivity;
    NSMutableArray *_results;
    NSDictionary *_scoresForLabels;
    SCMLHandler *_handler;
    SCMLVideoAnalyzer *_videoAnalyzer;
}

+ (id)analyzeVideoAssetOnDemandWithURL:(id)a0 localIdentifier:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 cancelBlock:(id /* block */)a3 andProgressHandler:(id /* block */)a4;

- (id)init;
- (id)results;
- (void).cxx_destruct;
- (void)addAnalysisResults;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (int)analyzeFrameWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 andFlags:(unsigned long long *)a3;
- (int)configureAndStartVideoAnalyzer;
- (void)configureProcessTimeIntervalFrom:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;

@end
