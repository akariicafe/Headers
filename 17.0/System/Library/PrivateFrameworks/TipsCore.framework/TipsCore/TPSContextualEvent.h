@class NSString, NSDictionary, NSMutableDictionary, NSMutableSet, NSDate, TPSContextualEventBookmark;

@interface TPSContextualEvent : TPSSerializableObject

@property (nonatomic) long long status;
@property (nonatomic) long long type;
@property (nonatomic) long long lookBackDays;
@property (nonatomic) long long daysSinceLastMajorUpdate;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *userInfoQuery;
@property (copy, nonatomic) NSDictionary *userInfoPersistent;
@property (retain, nonatomic) NSMutableDictionary *observationMap;
@property (retain, nonatomic) NSMutableSet *observerIdentifiers;
@property (copy, nonatomic) TPSContextualEvent *state;
@property (readonly, nonatomic) double eventTimeToLiveInterval;
@property (readonly, nonatomic) unsigned int currentObservationCount;
@property (nonatomic) unsigned int minObservationCount;
@property (copy, nonatomic) NSDate *matchedDate;
@property (copy, nonatomic) NSDate *eventSinceDate;
@property (copy, nonatomic) TPSContextualEventBookmark *bookmark;
@property (copy, nonatomic) NSString *key;

+ (BOOL)supportsSecureCoding;
+ (id)eventDictionaryForIdentifier:(id)a0 type:(long long)a1 status:(long long)a2;
+ (id)identifierFromEventInfoDictionary:(id)a0;
+ (long long)typeFromEventDictionary:(id)a0;

- (id)newStateFromStateDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasLookBackDays;
- (void)addObserverIdentifier:(id)a0;
- (BOOL)canBeRemoved;
- (unsigned int)currentObservationCount;
- (double)daysSinceLastMajorUpdateTimeIntervalInSeconds;
- (id)eventSinceLastMajorUpdateDate;
- (double)eventTimeToLiveInterval;
- (BOOL)hasDaysSinceLastMajorUpdate;
- (double)lookbackTimeIntervalInSeconds;
- (BOOL)observedWithResults:(id)a0;
- (void)removeAllObservations;
- (void)removeObserverIdentifiers:(id)a0;
- (void)removeOutdatedObservationDates;

@end
