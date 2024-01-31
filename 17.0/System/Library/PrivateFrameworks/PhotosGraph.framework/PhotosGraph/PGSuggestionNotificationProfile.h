@class NSArray, NSSet, NSDate, NSObject;
@protocol OS_os_log;

@interface PGSuggestionNotificationProfile : NSObject {
    NSArray *_existingSuggestions;
    BOOL _eligibleForNotification;
    unsigned char _userType;
    NSSet *_shareParticipantContactIdentifiers;
    NSDate *_dateOfLastNotification;
}

@property (readonly, nonatomic) BOOL eligibleForNotification;
@property (readonly, nonatomic) unsigned char userType;
@property (readonly, nonatomic) NSDate *dateOfLastNotification;
@property (nonatomic) NSObject<OS_os_log> *loggingConnection;

+ (unsigned char)_requiredNotificationQualityForUserType:(unsigned char)a0;
+ (double)_requiredTimeIntervalFromLastNotificationForUserType:(unsigned char)a0;

- (void).cxx_destruct;
- (void)_determineUserTypeAndEligibility;
- (id)initWithExistingSuggestions:(id)a0;
- (unsigned char)notificationQualityForEnrichableEvent:(id)a0;
- (unsigned char)notificationQualityForHighlightNode:(id)a0;
- (id)shareParticipantContactIdentifiers;
- (BOOL)shouldNotifyForSuggestion:(id)a0 withOptions:(id)a1;

@end
