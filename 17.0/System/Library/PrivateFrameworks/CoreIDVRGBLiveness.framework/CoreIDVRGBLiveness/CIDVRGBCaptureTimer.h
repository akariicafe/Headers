@class NSTimer, NSNumber;

@interface CIDVRGBCaptureTimer : NSObject {
    NSTimer *_timer;
    NSNumber *_remainingDuration;
    id /* block */ _block;
}

- (void)_runBlock;
- (void)pause;
- (void)resume;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDuration:(double)a0 block:(id /* block */)a1;

@end
