@class CLKClockTimerToken;

@interface CLKUIClockTimerLink : CLKUIRenderFrequencyLink {
    CLKClockTimerToken *_timerToken;
}

@property (copy, nonatomic) id /* block */ updateHandler;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithUpdateHandler:(id /* block */)a0;
- (void)updateCoordinator;
- (long long)_updateFrequencyForFPS:(long long)a0;

@end
