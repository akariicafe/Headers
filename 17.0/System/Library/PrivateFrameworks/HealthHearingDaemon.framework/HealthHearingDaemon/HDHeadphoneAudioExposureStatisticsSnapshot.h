@class HKStatistics, NSDate;

@interface HDHeadphoneAudioExposureStatisticsSnapshot : NSObject

@property (readonly, nonatomic) HKStatistics *statistics;
@property (readonly, nonatomic) BOOL includesPrunableData;
@property (readonly, nonatomic) NSDate *previousNotificationDate;

- (id)initWithStatistics:(id)a0 includesPrunableData:(BOOL)a1 previousNotificationDate:(id)a2;
- (void).cxx_destruct;
- (id)unitTesting_hearingSevenDayDoseCategorySampleWithNow:(id)a0 error:(id *)a1;

@end
