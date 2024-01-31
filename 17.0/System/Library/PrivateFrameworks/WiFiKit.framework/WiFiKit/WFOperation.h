@class NSError, NSDate;

@interface WFOperation : NSOperation {
    BOOL _finished;
    NSDate *_start;
}

@property (copy, nonatomic) NSError *error;

- (BOOL)isReady;
- (void)finish;
- (void)start;
- (BOOL)isFinished;
- (id)description;
- (void).cxx_destruct;

@end
