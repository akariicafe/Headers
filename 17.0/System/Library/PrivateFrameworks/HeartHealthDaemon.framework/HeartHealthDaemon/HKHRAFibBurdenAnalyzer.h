@class HKCalendarCache, HKHRAFibBurdenTachogramClassifierFactory, HKHRAFibBurdenTachogramClassificationsRetriever, HKHRAFibBurdenJulianDayMajorityTimeZoneDeterminer;
@protocol HKHRAFibBurdenDeterminer;

@interface HKHRAFibBurdenAnalyzer : NSObject {
    HKHRAFibBurdenTachogramClassificationsRetriever *_classificationRetriever;
    id<HKHRAFibBurdenDeterminer> _burdenDeterminer;
    HKHRAFibBurdenTachogramClassifierFactory *_tachogramClassifierFactory;
    HKHRAFibBurdenJulianDayMajorityTimeZoneDeterminer *_majorityTimeZoneDeterminer;
    HKCalendarCache *_calendarCache;
    id /* block */ _dateGenerator;
}

- (id)initWithProfile:(id)a0;
- (id)_generateDayOfWeekHistogramWithTachogramClassifier:(id)a0 error:(id *)a1;
- (id)generateSixWeekBurdenHistogramsWithError:(id *)a0;
- (id)generateSevenDayBurdenWithRange:(struct { long long x0; long long x1; })a0 breadcrumbManager:(id)a1 error:(id *)a2;
- (id)_generateTimeOfDayHistogramWithTachogramClassifier:(id)a0 error:(id *)a1;
- (id)_julianDayToTimeZoneMappingForPastSixWeeksWithError:(id *)a0;
- (void).cxx_destruct;
- (id)_logDayNameForWeekday:(long long)a0;
- (id)initWithClassificationRetriever:(id)a0 burdenDeterminer:(id)a1 tachogramClassifierFactory:(id)a2 majorityTimeZoneDeterminer:(id)a3 calendarCache:(id)a4 dateGenerator:(id /* block */)a5;

@end
