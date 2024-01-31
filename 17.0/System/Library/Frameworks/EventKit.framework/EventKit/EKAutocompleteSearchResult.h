@class NSDate, NSString, NSArray, NSURL, NSData, EKStructuredLocation, NSTimeZone, EKSuggestedEventInfo, EKCalendar;

@interface EKAutocompleteSearchResult : NSObject

@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic, getter=isAllDay) BOOL allDay;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *locationWithoutPrediction;
@property (retain, nonatomic) EKStructuredLocation *preferredLocation;
@property (retain, nonatomic) NSArray *alarms;
@property (retain, nonatomic) NSArray *attendees;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *notes;
@property (retain, nonatomic) EKCalendar *calendar;
@property (nonatomic) struct CGColor { } *calendarColor;
@property (nonatomic) double travelTime;
@property (retain, nonatomic) EKStructuredLocation *travelStartLocation;
@property (retain, nonatomic) NSArray *pasteboardResults;
@property (nonatomic, getter=isSuggested) BOOL suggested;
@property (retain, nonatomic) EKSuggestedEventInfo *suggestionInfo;
@property (retain, nonatomic) NSString *foundInBundleID;
@property (retain, nonatomic) EKStructuredLocation *structuredLocation;
@property (nonatomic) long long privacyLevel;
@property (nonatomic) long long availability;
@property (retain, nonatomic) NSArray *attachments;
@property (nonatomic) BOOL isNaturalLanguageSuggested;
@property (retain, nonatomic) NSData *localStructuredData;

+ (BOOL)_participantShouldBeUsedForAutocomplete:(id)a0;

- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_attendeesForSuggestedEventFromAttendees:(id)a0;
- (id)initWithUniqueID:(id)a0;

@end
