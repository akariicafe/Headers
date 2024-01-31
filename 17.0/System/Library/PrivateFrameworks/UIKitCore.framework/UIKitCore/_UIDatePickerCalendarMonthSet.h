@class NSCalendar, NSMutableIndexSet, NSMutableOrderedSet, _UIDatePickerCalendarMonth;

@interface _UIDatePickerCalendarMonthSet : NSObject {
    NSCalendar *_calendar;
    unsigned long long _rangeLength;
    _UIDatePickerCalendarMonth *_referenceMonth;
    NSMutableIndexSet *_loadedMonthOffsets;
    NSMutableOrderedSet *_loadedMonths;
}

- (void).cxx_destruct;
- (id)_monthAtOffset:(long long)a0;
- (void)_clearLoadedData;
- (void)_ensureReferenceMonthWithFallbackMonth:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_loadOffsetRange:(struct __UISignedRange { long long x0; unsigned long long x1; })a0;
- (struct __UISignedRange { long long x0; unsigned long long x1; })_offsetRangeForMonth:(id)a0;
- (unsigned long long)_shiftReferenceMonthToFitOffsetMonthsIfNecessary:(struct __UISignedRange { long long x0; unsigned long long x1; })a0;
- (unsigned long long)indexOfMonth:(id)a0;
- (id)initWithCalendar:(id)a0 rangeLength:(unsigned long long)a1;
- (void)insertMonthsAroundMonth:(id)a0 loadedIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)loadedMonths;
- (id)monthAtIndex:(unsigned long long)a0;
- (void)reloadWithMonthsAroundMonth:(id)a0;

@end
