@class NSMutableArray;

@interface MADConfidenceTracker : NSObject {
    NSMutableArray *_history;
    double _confidence;
}

- (id)init;
- (void).cxx_destruct;
- (double)updateConfidence:(double)a0;

@end
