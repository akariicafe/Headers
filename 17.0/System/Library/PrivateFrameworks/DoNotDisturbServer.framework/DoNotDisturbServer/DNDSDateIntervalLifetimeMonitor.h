@class NSDate;

@interface DNDSDateIntervalLifetimeMonitor : DNDSBaseLifetimeMonitor {
    NSDate *_lifetimeTimerFireDate;
}

+ (Class)lifetimeClass;

- (id)updateForModeAssertions:(id)a0 date:(id)a1;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;

@end
