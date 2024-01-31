@class NSDateFormatter, NSCalendar;

@interface WDSleepScheduleListDataProvider : WDSampleListDataProvider {
    NSDateFormatter *_standaloneFormatter;
    NSDateFormatter *_listItemFormatter;
    NSCalendar *_gregorianCalender;
}

- (unsigned long long)numberOfSections;
- (void).cxx_destruct;
- (id)sampleTypes;
- (long long)cellStyle;
- (id)titleForSection:(unsigned long long)a0;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;
- (id)textForObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1 sectionRemoved:(BOOL *)a2;
- (id)secondaryTextForObject:(id)a0;

@end
