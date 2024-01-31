@class NSTimer;
@protocol CRKScreenshotServiceInterface;

@interface CRKDeadmanScreenshotServiceProxy : NSObject <CRKScreenshotServiceInterface>

@property (readonly, nonatomic) double timeout;
@property (retain, nonatomic) id<CRKScreenshotServiceInterface> underlyingProxy;
@property (nonatomic) unsigned long long countOfInFlightRequests;
@property (retain, nonatomic) NSTimer *timer;

- (void)dealloc;
- (void)startTimer;
- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0;
- (void)stopTimer;
- (void)fetchScreenshotDataWithMaximumSizeInPixels:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;

@end
