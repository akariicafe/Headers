@class NSMutableData;

@interface ATXPredictionSetBuilder : NSObject {
    NSMutableData *_data;
    int _predictionCount;
    BOOL _finished;
}

- (id)init;
- (id)finish;
- (void)recordPrediction:(id)a0 score:(float)a1;
- (void).cxx_destruct;

@end
