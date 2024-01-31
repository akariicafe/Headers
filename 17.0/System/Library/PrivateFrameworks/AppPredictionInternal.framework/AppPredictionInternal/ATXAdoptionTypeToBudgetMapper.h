@class ATXTimelineAbuseControlConfig;

@interface ATXAdoptionTypeToBudgetMapper : NSObject {
    ATXTimelineAbuseControlConfig *_abuseControlConfig;
}

- (void).cxx_destruct;
- (long long)durationLimitForAdoptionType:(unsigned long long)a0;
- (long long)hardQuotaForAdoptionType:(unsigned long long)a0;
- (id)initWithAbuseControlConfig:(id)a0;
- (long long)softQuotaForAdoptionType:(unsigned long long)a0;

@end
