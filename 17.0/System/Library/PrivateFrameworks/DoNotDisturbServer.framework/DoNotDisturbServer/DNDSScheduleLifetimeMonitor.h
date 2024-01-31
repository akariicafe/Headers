@class NSCalendar, NSDate;
@protocol DNDSScheduleLifetimeMonitorDataSource;

@interface DNDSScheduleLifetimeMonitor : DNDSBaseLifetimeMonitor {
    NSDate *_lifetimeTimerFireDate;
}

@property (retain, nonatomic) NSCalendar *calendar;
@property (weak, nonatomic) id<DNDSScheduleLifetimeMonitorDataSource> dataSource;

+ (Class)lifetimeClass;

- (id)_activeDateIntervalForScheduleLifetime:(id)a0 assertionStartDate:(id)a1 date:(id)a2 scheduleSettings:(id)a3 calendar:(id)a4 ignoreMatchScheduleStartDate:(BOOL)a5;
- (id)activeDateIntervalForScheduleLifetime:(id)a0 assertion:(id)a1 date:(id)a2;
- (id)updateForModeAssertions:(id)a0 date:(id)a1;
- (void).cxx_destruct;
- (id)_activeDateIntervalForScheduleLifetime:(id)a0 assertion:(id)a1 date:(id)a2 ignoreMatchScheduleStartDate:(BOOL)a3;
- (id)nextActiveDateIntervalForScheduleLifetime:(id)a0 assertion:(id)a1 date:(id)a2;
- (void)setDelegate:(id)a0;

@end
