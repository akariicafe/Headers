@class PPCalendar, NSString, NSArray, NSURL, NSDate, CLLocation, EKObjectID;

@interface PPEvent : NSObject <NSSecureCoding, NSCopying> {
    NSArray *_backingPlists;
    unsigned long long _indexInBackingPlists;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) EKObjectID *objectID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *location;
@property (readonly, nonatomic) PPCalendar *calendar;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) char availability;
@property (readonly, nonatomic) NSURL *externalURI;
@property (readonly, nonatomic) NSArray *attendees;
@property (readonly, nonatomic) NSString *organizerName;
@property (readonly, nonatomic) unsigned char eventFlags;
@property (readonly, nonatomic) NSString *notes;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *structuredLocationTitle;
@property (readonly, nonatomic) NSString *structuredLocationAddress;
@property (readonly, nonatomic) CLLocation *structuredLocationCoordinates;
@property (readonly, nonatomic) unsigned char suggestedEventCategory;

+ (id)convertBatchOfEKEvents:(id)a0 calendarInternPool:(id)a1;
+ (id)convertBatchOfEKEvents:(id)a0 calendarInternPool:(id)a1 interningSet:(id)a2;
+ (id /* block */)deferredAllocationEventFromEKEvent:(id)a0;
+ (id)descriptionForSuggestedEventCategory:(unsigned char)a0;
+ (unsigned char)suggestedEventCategoryFromMetadata:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)plist;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compareStartDateWithEvent:(id)a0;
- (id)initWithEKEvent:(id)a0 calendarInternPool:(id)a1;
- (id)initWithEventIdentifier:(id)a0 objectID:(id)a1 title:(id)a2 location:(id)a3 calendar:(id)a4 startDate:(id)a5 endDate:(id)a6 availability:(char)a7 externalURI:(id)a8 attendees:(id)a9 organizerName:(id)a10 eventFlags:(unsigned char)a11 notes:(id)a12 url:(id)a13 structuredLocationTitle:(id)a14 structuredLocationAddress:(id)a15 structuredLocationCoordinates:(id)a16 suggestedEventCategory:(unsigned char)a17;
- (id)initWithEventIdentifier:(id)a0 objectID:(id)a1 title:(id)a2 location:(id)a3 calendar:(id)a4 startDate:(id)a5 endDate:(id)a6 availability:(char)a7 externalURIString:(id)a8 attendees:(id)a9 organizerName:(id)a10 eventFlags:(unsigned char)a11 notes:(id)a12 urlString:(id)a13 structuredLocationTitle:(id)a14 structuredLocationAddress:(id)a15 structuredLocationCoordinates:(id)a16 suggestedEventCategory:(unsigned char)a17;
- (id)initWithIndex:(unsigned long long)a0 inBackingPlists:(id)a1 calendar:(id)a2;
- (id)initWithPlist:(id)a0 calendar:(id)a1;
- (BOOL)isNLEvent;
- (BOOL)isStructuredEvent;
- (BOOL)organizerIsCurrentUser;
- (BOOL)representsUnscheduledFreeTime;

@end
