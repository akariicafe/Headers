@class NSDate, NSString, NSArray, NSURL, NSData, EKEvent, EKAutocompleteSearchResult, EKStructuredLocation, NSTimeZone, EKSuggestedEventInfo, EKCalendar;

@interface EKEventSuggestion : NSObject <NSCopying>

@property (retain) NSString *title;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property (retain) NSTimeZone *timeZone;
@property (retain) NSTimeZone *endTimeZone;
@property BOOL allDay;
@property (retain) NSString *location;
@property (retain) EKStructuredLocation *structuredLocation;
@property (retain) EKStructuredLocation *endLocation;
@property (retain) NSString *notes;
@property (retain) EKCalendar *calendar;
@property (retain) NSArray *attendees;
@property (retain) NSURL *URL;
@property long long privacyLevel;
@property long long availability;
@property (retain) EKSuggestedEventInfo *suggestionInfo;
@property (retain) NSData *localStructuredData;
@property (retain) NSArray *attachments;
@property (retain) NSArray *alarms;
@property (retain) NSArray *recurrenceRules;
@property (retain) EKEvent *cachedEventFromSuggestion;
@property (retain) EKAutocompleteSearchResult *referenceResult;
@property BOOL isZKWSuggestion;

+ (id)allProperties;
+ (id)propertiesForEquality;
+ (id)similarityPropertiesConsideringTimeProperties:(BOOL)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_attendeesForSuggestedEventFromAttendees:(id)a0;
- (id)eventFromSuggestion;
- (BOOL)isDifferentEnoughFromInitialEvent:(id)a0 consideringTimeProperties:(BOOL)a1;

@end
