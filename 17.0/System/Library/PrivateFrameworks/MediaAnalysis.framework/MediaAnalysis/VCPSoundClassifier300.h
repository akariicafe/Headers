@class NSString, NSMutableArray;

@interface VCPSoundClassifier300 : NSObject <SNResultsObserving> {
    NSMutableArray *_results;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _trackStart;
    NSString *_resultsKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)results;
- (void).cxx_destruct;
- (void)addDetectionFromTime:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0 toTime:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 classification:(id)a2;
- (int)finalizeAnalysisAtTime:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0;
- (id)initWithTrackStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 resultsKey:(id)a1;
- (void)request:(id)a0 didProduceResult:(id)a1;

@end
