@class NSString, NSMutableArray;

@interface VCPSoundClassifier : NSObject <SNResultsObserving> {
    NSMutableArray *_results;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _activeStart;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _activeEnd;
    int _length;
    float _sampleRate;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _trackStart;
    float _activeScore;
    float _threshold;
    int _minDetections;
    NSString *_audioQualityAggregated;
    NSString *_resultsKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)results;
- (void).cxx_destruct;
- (void)addDetectionFromTime:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0 toTime:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 confidence:(float)a2;
- (int)finalizeAnalysisAtTime:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0;
- (id)initWithTrackStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 threshold:(float)a1 resultsKey:(id)a2;
- (void)request:(id)a0 didProduceResult:(id)a1;

@end
