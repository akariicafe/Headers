@interface FMFCore.FMReverseGeocodingOperation : NSOperation {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ _isFinished;
}

@property (nonatomic) BOOL finished;
@property (nonatomic, readonly) BOOL asynchronous;

- (id)init;
- (void)main;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;

@end
