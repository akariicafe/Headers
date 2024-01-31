@class CRXUDispatchQueue, CRXUTimer;

@interface CRXFCalibrationDataDownload : NSObject {
    CRXUDispatchQueue *_completionQueue;
    CRXUTimer *_timer;
    id /* block */ _completion;
    double _startTime;
    double _roundtripTime;
    BOOL _finished;
}

@property (readonly, nonatomic) double roundtripTime;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (void)finishWithData:(id)a0 error:(id)a1;
- (id)initWithTimeout:(double)a0 completionQueue:(id)a1 completion:(id /* block */)a2;

@end
