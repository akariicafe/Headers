@class PLLazyObject, NSLocale;

@interface PLDateRangeTitleGenerator : NSObject {
    PLLazyObject *_lazyRecentDateRangeFormatter;
    PLLazyObject *_lazyDateRangeFormatter;
    PLLazyObject *_lazyYearlessDateRangeFormatter;
    PLLazyObject *_lazyMonthYearDateRangeFormatter;
    PLLazyObject *_lazyShortMonthYearDateRangeFormatter;
    PLLazyObject *_lazyYearDateRangeFormatter;
    NSLocale *_locale;
}

- (id)init;
- (id)initWithLocale:(id)a0;
- (id)newYearDateRangeFormatter;
- (id)newShortMonthYearDateRangeFormatter;
- (id)recentDateRangeFormatter;
- (id)newRecentDateRangeFormatter;
- (id)newDateRangeFormatter;
- (id)newYearlessDateRangeFormatter;
- (id)shortMonthYearDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 options:(unsigned long long)a4;
- (void).cxx_destruct;
- (id)yearlessDateRangeFormatter;
- (id)dateRangeFormatterForCategory:(unsigned short)a0 kind:(unsigned short)a1 options:(unsigned long long)a2;
- (id)yearDateRangeFormatter;
- (id)newMonthYearDateRangeFormatter;
- (id)dateRangeFormatter;
- (id)monthYearDateRangeFormatter;

@end
