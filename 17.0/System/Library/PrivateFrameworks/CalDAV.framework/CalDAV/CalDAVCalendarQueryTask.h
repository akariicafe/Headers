@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask

@property (nonatomic) BOOL syncEvents;
@property (nonatomic) BOOL syncTodos;
@property (retain, nonatomic) NSDateComponents *eventFilterStartDate;
@property (retain, nonatomic) NSDateComponents *eventFilterEndDate;

- (id)requestBody;
- (id)description;
- (void)_appendComponentFiltersToXMLData:(id)a0;
- (void).cxx_destruct;
- (void)_appendTimeRangeFilterToXMLData:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)_icsDateStringForNSDateComponents:(id)a0;
- (id)httpMethod;

@end
