@interface WKBokehInfiniteImpulseResponseFilter : NSObject {
    unsigned long long _count;
    double *_ffC;
    double *_fbC;
    double *_inputHistory;
    double *_outputHistory;
    double _zeroGradientThreshold;
}

- (void)dealloc;
- (id)initWithCount:(unsigned long long)a0 feedforwardCoefficients:(double *)a1 feedbackCoefficients:(double *)a2;

@end
