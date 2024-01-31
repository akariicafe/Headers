@interface IPDataDetectorsFeatureExtractor : IPFeatureExtractor

- (id)init;
- (id)queue;
- (struct __DDScanner { } *)standardScanner;
- (id)featureDataComplementingFeatureData:(id)a0 hour:(unsigned long long)a1 minute:(unsigned long long)a2 duration:(double)a3;
- (id)featuresForTextString:(id)a0 inMessageUnit:(id)a1 context:(id)a2;
- (id)newYearsEveDayDateFromReferenceDate:(id)a0;
- (void)setTimeZone:(id)a0 forDateFeatures:(id)a1;
- (void)standardizeTimezonesForDetectedFeatures:(id)a0;
- (id)stringByReplacingDetectedDataWithNGramMarkersInString:(id)a0;
- (BOOL)stringContainsNonTimeStrings:(id)a0 aroundRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeReferencingAfternoon:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeReferencingAllDay:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeReferencingEvening:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeReferencingMorning:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeReferencingNewYearsEve:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeReferencingNextWeekEnd:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeReferencingNoon:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeReferencingThisWeekEnd:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeReferencingTomorrow:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeReferencingValentineDay:(id)a0;
- (id)thisSaturdayDateFromReferenceDate:(id)a0;
- (struct __DDScanner { } *)timeScanner;
- (id)tomorrowDateFromReferenceDate:(id)a0;
- (id)valentineDayDateFromReferenceDate:(id)a0;

@end
