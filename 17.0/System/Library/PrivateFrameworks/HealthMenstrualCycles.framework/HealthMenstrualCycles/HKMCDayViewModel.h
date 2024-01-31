@class NSArray, HKMCDaySummary, NSString;

@interface HKMCDayViewModel : NSObject <HKRedactedDescription>

@property (readonly, nonatomic) unsigned long long menstruationLevel;
@property (readonly, nonatomic) unsigned long long fertileWindowLevel;
@property (readonly, nonatomic, getter=isSupplementaryDataLogged) BOOL supplementaryDataLogged;
@property (readonly, nonatomic, getter=isFetched) BOOL fetched;
@property (readonly, nonatomic, getter=isPartiallyLoggedPeriod) BOOL partiallyLoggedPeriod;
@property (readonly, nonatomic) HKMCDaySummary *daySummary;
@property (readonly, nonatomic) NSArray *cycleFactors;
@property (readonly, nonatomic) NSString *accessibilityIdentifier;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)dayViewModelWithMenstruationLevel:(unsigned long long)a0 fertileWindowLevel:(unsigned long long)a1 daySummary:(id)a2 cycleFactors:(id)a3 partiallyLoggedPeriod:(BOOL)a4 fetched:(BOOL)a5;
+ (id)emptyDayViewModel;
+ (id)unfetchedDayViewModel;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithMenstruationLevel:(unsigned long long)a0 fertileWindowLevel:(unsigned long long)a1 daySummary:(id)a2 cycleFactors:(id)a3 partiallyLoggedPeriod:(BOOL)a4 fetched:(BOOL)a5;

@end
