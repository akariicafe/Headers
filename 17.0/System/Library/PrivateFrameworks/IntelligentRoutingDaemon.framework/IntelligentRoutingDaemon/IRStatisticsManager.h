@class IRStatisticsDO, NSDate, IRServiceStore, NSNumber;

@interface IRStatisticsManager : NSObject

@property (retain, nonatomic) IRServiceStore *store;
@property (retain, nonatomic) IRStatisticsDO *statistics;
@property (nonatomic) long long mode;
@property (retain, nonatomic) NSDate *modeDate;
@property (retain, nonatomic) NSDate *appLaunchDate;
@property (retain, nonatomic) NSNumber *timeToBannerInMilliSeconds;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (BOOL)_initStatistics;
- (BOOL)_isAllowedToCollectStatisticsForDate:(id)a0;
- (void)bannerContextWithDate:(id)a0;
- (void)clearStatistics:(id)a0;
- (void)contextChangedWithReason:(id)a0 mode:(long long)a1 miloPrediction:(id)a2 date:(id)a3;
- (void)event:(id)a0 forCandidate:(id)a1 inspections:(id)a2 date:(id)a3;

@end
