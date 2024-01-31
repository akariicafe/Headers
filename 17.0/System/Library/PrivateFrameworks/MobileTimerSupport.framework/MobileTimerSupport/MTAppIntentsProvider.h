@class _TtC18MobileTimerSupport19MTAppIntentsManager;
@protocol MTAppIntentsProviderDelegate;

@interface MTAppIntentsProvider : NSObject <MobileTimerSupport.MTAppIntentsManagerDelegate>

@property (retain, nonatomic) _TtC18MobileTimerSupport19MTAppIntentsManager *manager;
@property (weak, nonatomic) id<MTAppIntentsProviderDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)didLapStopwatchWithManager:(id)a0;
- (void)didResetStopwatchWithManager:(id)a0;
- (void)didSelectTabWithManager:(id)a0 tab:(long long)a1;
- (void)didStartStopwatchWithManager:(id)a0;
- (void)didStopStopwatchWithManager:(id)a0;

@end
