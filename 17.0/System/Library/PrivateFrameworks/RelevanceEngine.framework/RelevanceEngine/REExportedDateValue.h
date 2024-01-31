@class NSDate;

@interface REExportedDateValue : REExportedValue {
    NSDate *_date;
}

- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)dateValue;
- (unsigned long long)type;

@end
