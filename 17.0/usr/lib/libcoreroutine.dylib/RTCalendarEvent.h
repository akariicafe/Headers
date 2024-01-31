@class NSString, RTLocation, NSData, NSDate;

@interface RTCalendarEvent : NSObject

@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic, getter=isAllDay) BOOL allDay;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long participantStatus;
@property (readonly, nonatomic) long long availability;
@property (readonly, nonatomic) RTLocation *location;
@property (readonly, nonatomic) NSString *locationTitle;
@property (readonly, nonatomic) NSData *locationMapItemHandle;

+ (id)eventAvailabilityToString:(long long)a0;
+ (id)participantStatusToString:(unsigned long long)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEventIdentifier:(id)a0 allDay:(BOOL)a1 startDate:(id)a2 endDate:(id)a3 participantStatus:(unsigned long long)a4 availability:(long long)a5 location:(id)a6 locationTitle:(id)a7 locationMapItemHandle:(id)a8;

@end
