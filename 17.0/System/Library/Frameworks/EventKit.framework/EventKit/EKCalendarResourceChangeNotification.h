@class NSString, NSNumber, NSDate;

@interface EKCalendarResourceChangeNotification : EKCalendarNotification

@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *calendarName;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *startDateForNextOccurrence;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL allDay;
@property (retain, nonatomic) NSString *eventID;
@property (nonatomic) unsigned int changeType;
@property (nonatomic) BOOL dateChanged;
@property (nonatomic) BOOL timeChanged;
@property (nonatomic) BOOL locationChanged;
@property (nonatomic) BOOL titleChanged;
@property (retain, nonatomic) NSNumber *createCount;
@property (retain, nonatomic) NSNumber *updateCount;
@property (retain, nonatomic) NSNumber *deleteCount;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (BOOL)acknowledgeWithEventStore:(id)a0 error:(id *)a1;
- (BOOL)needsAlert;
- (id)resourceChangeFromEventStore:(id)a0;

@end
