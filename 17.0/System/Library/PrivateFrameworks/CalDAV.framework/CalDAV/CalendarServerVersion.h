@interface CalendarServerVersion : CalDAVConcreteServerVersion

- (id)init;
- (BOOL)supportsTimeRangeFilterWithoutEndDate;
- (id)type;

@end
