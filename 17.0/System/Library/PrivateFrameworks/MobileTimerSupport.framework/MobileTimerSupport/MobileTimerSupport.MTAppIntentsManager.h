@class _TtC18MobileTimerSupport19MTAppIntentsManager;

@interface MobileTimerSupport.MTAppIntentsManager : NSObject

@property (class, nonatomic, readonly) _TtC18MobileTimerSupport19MTAppIntentsManager *sharedManager;

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (void)didLapStopwatch;
- (void)didResetStopwatch;
- (void)didSelectTabWithTab:(long long)a0;
- (void)didStartStopwatch;
- (void)didStopStopwatch;

@end
