@class NSMutableArray;

@interface VCPVideoPersonDetector : VCPVideoAnalyzer {
    NSMutableArray *_persons;
}

- (id)init;
- (void).cxx_destruct;
- (id)persons;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (int)detectPersons:(struct __CVBuffer { } *)a0 persons:(id)a1;

@end
