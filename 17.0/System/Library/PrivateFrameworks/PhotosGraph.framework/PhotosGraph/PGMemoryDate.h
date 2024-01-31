@interface PGMemoryDate : NSObject {
    long long _era;
    long long _year;
    long long _month;
    long long _day;
}

- (id)initWithLocalDate:(id)a0;
- (id)universalDateInTimeZone:(id)a0;

@end
