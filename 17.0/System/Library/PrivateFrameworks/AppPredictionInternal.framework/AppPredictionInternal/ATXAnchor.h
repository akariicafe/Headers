@class NSArray, NSString;

@interface ATXAnchor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) Class supportedDuetDataProviderClass;
@property (class, readonly, nonatomic) NSArray *duetEventsPredicates;
@property (class, readonly, nonatomic) long long anchorType;
@property (class, readonly, nonatomic) NSString *longDescription;
@property (class, readonly, nonatomic) double secondsOfInfluence;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *anchorEventIdentifier;

+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id)predicateForContextStoreRegistration;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)sampleEvent;
+ (id)keyPathForContextStore;
+ (id)candidateQueryStartDateFromDuetEvent:(id)a0;
+ (BOOL)isActive;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;
+ (int)pbAnchorEventTypeFromDuetEvent:(id)a0;
+ (id)allAnchorClasses;
+ (Class)anchorClassFromAnchorTypeString:(id)a0;
+ (id)anchorTypeStringToClassName:(id)a0;
+ (id)anchorTypeToAnchorClassName:(long long)a0;
+ (id)anchorTypeToString:(long long)a0;
+ (double)durationOfAnchorEvent:(id)a0;
+ (void)registerWithContextStoreForAnchorEntranceWithCallback:(id /* block */)a0 notificationId:(id)a1 registrationPersistenceContext:(id)a2;
+ (void)registerWithContextStoreForAnchorExitWithCallback:(id /* block */)a0 notificationId:(id)a1 registrationPersistenceContext:(id)a2;
+ (BOOL)shouldProcessContextStoreNotificationForDict;
+ (BOOL)shouldProcessContextStoreNotificationForNumber;
+ (long long)stringToAnchorType:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)anchorTypeString;

@end
