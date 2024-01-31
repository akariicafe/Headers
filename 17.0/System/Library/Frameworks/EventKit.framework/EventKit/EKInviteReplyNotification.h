@class NSString, NSURL, NSDate, EKCalendar;

@interface EKInviteReplyNotification : EKNotification

@property (readonly, nonatomic) EKCalendar *inviteReplyCalendar;
@property (readonly, nonatomic) NSString *calendarName;
@property (copy, nonatomic) NSString *inReplyTo;
@property (copy, nonatomic) NSString *shareeDisplayName;
@property (copy, nonatomic) NSString *shareeFirstName;
@property (copy, nonatomic) NSString *shareeLastName;
@property (copy, nonatomic) NSURL *shareeURL;
@property (readonly, nonatomic) NSString *shareeEmailAddress;
@property (readonly, nonatomic) NSString *shareePhoneNumber;
@property (nonatomic) unsigned long long shareeStatus;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *summary;
@property (readonly, nonatomic) BOOL alerted;

+ (id)knownRelationshipSingleValueKeys;
+ (Class)frozenClass;
+ (id)sourceForInviteReplyNotification:(id)a0;

- (BOOL)validate:(id *)a0;
- (id)shareeURLString;
- (void)_setInviteReplyCalendar:(id)a0;
- (void)clearAlertedStatus;
- (id)initWithInviteReplyCalendar:(id)a0;
- (void)setShareeURLString:(id)a0;

@end
