@class NSTimeZone, NSString, NSArray, NSURL, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface SGEvent : SGObject <SGEventForGeocode> {
    NSObject<OS_dispatch_queue> *_geocodeQueue;
    SGEvent *_geocoded;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *notes;
@property (readonly, nonatomic) NSDate *start;
@property (readonly, nonatomic) NSTimeZone *startTimeZone;
@property (readonly, nonatomic) NSDate *end;
@property (readonly, nonatomic) NSTimeZone *endTimeZone;
@property (readonly, nonatomic) BOOL isAllDay;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) NSString *opaqueKey;
@property (readonly, nonatomic) NSString *uniqueKey;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic, getter=isGeocodeCandidate) BOOL geocodeCandidate;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic, getter=isNaturalLanguageEvent) BOOL naturalLanguageEvent;
@property (readonly, nonatomic) NSString *naturalLanguageEventTypeIdentifier;
@property (readonly, nonatomic) unsigned long long naturalLanguageEventAttributes;
@property (readonly, nonatomic) NSArray *schemaOrg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithRecordId:(id)a0 origin:(id)a1 uniqueKey:(id)a2 opaqueKey:(id)a3 title:(id)a4 notes:(id)a5 start:(id)a6 startTimeZone:(id)a7 end:(id)a8 endTimeZone:(id)a9 isAllDay:(BOOL)a10 creationDate:(id)a11 lastModifiedDate:(id)a12 locations:(id)a13 tags:(id)a14 URL:(id)a15;

- (id)endDateComponents;
- (void)encodeWithCoder:(id)a0;
- (id)startDateComponents;
- (BOOL)isEqualToEvent:(id)a0;
- (void).cxx_destruct;
- (double)duration;
- (BOOL)isEqual:(id)a0;
- (id)loggingIdentifier;
- (id)initWithCoder:(id)a0;
- (void)_applyTimeRangeToEKEvent:(id)a0 withTZID:(id)a1;
- (id)_componentsForDate:(id)a0 timeZone:(id)a1 isEnd:(BOOL)a2 calendar:(id)a3;
- (void)_mergeTagsIntoEKEvent:(id)a0 withStore:(id)a1;
- (id)_naturalLanguageEventTagsInTags:(id)a0;
- (id)dateForUTCDate:(id)a0 withTimeZone:(id)a1;
- (long long)ekEventAvailabilityState;
- (id)firstLocationForType:(unsigned long long)a0;
- (id)geocodeEndDate;
- (id)geocodeEndTimeZone;
- (id)geocodeLocations;
- (id)geocodeStartDate;
- (id)geocodeStartTimeZone;
- (void)geocodeWithCallback:(id /* block */)a0;
- (id)geocodedEventWithStartDate:(id)a0 startTimeZone:(id)a1 endDate:(id)a2 endTimeZone:(id)a3 locations:(id)a4;
- (unsigned long long)geocodingMode;
- (id)initWithRecordId:(id)a0 origin:(id)a1 uniqueKey:(id)a2 opaqueKey:(id)a3 title:(id)a4 notes:(id)a5 start:(id)a6 startTimeZone:(id)a7 end:(id)a8 endTimeZone:(id)a9 isAllDay:(BOOL)a10 creationDate:(id)a11 lastModifiedDate:(id)a12 locations:(id)a13 tagStrings:(id)a14 URL:(id)a15 naturalLanguageEventIdentifier:(id)a16 naturalLanguageEventAttributes:(unsigned long long)a17 schemaOrg:(id)a18;
- (id)initWithRecordId:(id)a0 origin:(id)a1 uniqueKey:(id)a2 opaqueKey:(id)a3 title:(id)a4 notes:(id)a5 start:(id)a6 startTimeZone:(id)a7 end:(id)a8 endTimeZone:(id)a9 isAllDay:(BOOL)a10 creationDate:(id)a11 lastModifiedDate:(id)a12 locations:(id)a13 tags:(id)a14 URL:(id)a15;
- (void)mergeIntoEKEvent:(id)a0;
- (void)mergeIntoEKEvent:(id)a0 withStore:(id)a1;
- (void)mergeIntoEKEvent:(id)a0 withStore:(id)a1 preservingValuesDifferentFrom:(id)a2;
- (id)poiFilters;
- (BOOL)shouldAllowNotificationsInCalendarForBundleId:(id)a0 appIsInForeground:(BOOL)a1;
- (BOOL)shouldAllowNotificationsInCalendarForBundleId:(id)a0 appIsInForeground:(BOOL)a1 allowListOverride:(id)a2;
- (BOOL)shouldAllowNotificationsInCalendarWithAllowListOverride:(id)a0;
- (id)toEKEventWithStore:(id)a0;

@end
