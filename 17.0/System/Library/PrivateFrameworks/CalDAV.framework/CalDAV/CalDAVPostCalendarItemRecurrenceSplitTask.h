@class NSString, NSURL, NSDate, CoreDAVResponseItem;

@interface CalDAVPostCalendarItemRecurrenceSplitTask : CoreDAVPropertyFindBaseTask

@property (retain, nonatomic) NSURL *postURLWithQuery;
@property (retain, nonatomic) CoreDAVResponseItem *updatedResponseItem;
@property (retain, nonatomic) CoreDAVResponseItem *createdResponseItem;
@property (retain, nonatomic) NSURL *resourceURL;
@property (retain, nonatomic) NSDate *recurrenceDate;
@property (retain, nonatomic) NSString *uidForCreatedSeries;
@property (retain, nonatomic) NSString *previousScheduleTag;
@property (retain, nonatomic) NSString *previousETag;
@property (nonatomic) BOOL isFloating;
@property (nonatomic) BOOL isAllDay;

- (id)_dataForItem:(id)a0;
- (id)additionalHeaderValues;
- (id)requestBody;
- (id)initWithResourceURL:(id)a0 recurrenceDate:(id)a1 floating:(BOOL)a2 allday:(BOOL)a3;
- (id)urlWithQuery;
- (void)_updateBothResponseItems;
- (id)description;
- (id)createdETag;
- (void).cxx_destruct;
- (id)createdICSDocument;
- (id)updatedScheduleTag;
- (id)_recurrenceDateString;
- (id)createdICSData;
- (id)createdURL;
- (id)createdScheduleTag;
- (id)_scheduleTagForItem:(id)a0;
- (id)updatedETag;
- (id)_documentForItem:(id)a0;
- (id)url;
- (id)_etagForItem:(id)a0;
- (id)updatedICSDocument;
- (id)httpMethod;

@end
