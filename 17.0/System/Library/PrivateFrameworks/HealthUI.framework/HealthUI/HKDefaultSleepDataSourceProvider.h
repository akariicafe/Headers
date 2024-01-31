@class NSString, NSCalendar;

@interface HKDefaultSleepDataSourceProvider : NSObject <HKSleepDataSourceProvider>

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSString *queryIdentifier;

- (void).cxx_destruct;
- (id)initWithCalendar:(id)a0 queryIdentifier:(id)a1;
- (id)makeSleepDataSourceFromHealthStore:(id)a0 representativeDisplayType:(id)a1;
- (id)makeSleepStagesDataSourceFromHealthStore:(id)a0 representativeDisplayType:(id)a1;

@end
