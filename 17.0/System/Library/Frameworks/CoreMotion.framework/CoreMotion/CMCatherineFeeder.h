@class CMCatherineFeederInternal;

@interface CMCatherineFeeder : NSObject

@property (readonly, nonatomic) CMCatherineFeederInternal *internal;

- (id)init;
- (void)dealloc;
- (void)feedCatherine:(double)a0 confidence:(double)a1;

@end
