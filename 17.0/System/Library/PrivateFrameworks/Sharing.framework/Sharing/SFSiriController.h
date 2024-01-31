@class NSString;

@interface SFSiriController : NSObject <SFSiriControllerInterface>

@property (class, nonatomic) long long announceCallsState;
@property (class, nonatomic, getter=isAnnounceMessagesEnabled) BOOL announceMessagesEnabled;
@property (class, readonly, nonatomic, getter=isAnnounceMessagesSupported) BOOL announceMessagesSupported;
@property (class, nonatomic) BOOL hasUserSeenAnnounceCallsOptOutScreen;
@property (class, nonatomic) BOOL hasUserSeenAnnounceMessagesOptOutScreen;
@property (class, readonly, nonatomic, getter=isSiriEnabled) BOOL siriEnabled;
@property (class, readonly, nonatomic, getter=isHeySiriEnabled) BOOL heySiriEnabled;
@property (class, readonly, nonatomic, getter=isSiriAllowedWhileLocked) BOOL siriAllowedWhileLocked;
@property (class, readonly, nonatomic, getter=isCurrentLocaleSupported) BOOL currentLocaleSupported;
@property (class, readonly, nonatomic, getter=isAnnounceEnabledForHeadphones) BOOL announceEnabledForHeadphones;
@property (class, readonly, nonatomic, getter=isAnnounceSupported) BOOL announceSupported;
@property (class, nonatomic) BOOL hasUserSeenAnnounceNotificationsOptOutScreen;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldPromptForAnnounceCallsForProductID:(unsigned int)a0 supportsInEarDetection:(BOOL)a1 isUpsellFlow:(BOOL)a2;
+ (BOOL)shouldPromptForAnnounceMessagesForProductID:(unsigned int)a0 isUpsellFlow:(BOOL)a1;
+ (BOOL)shouldPromptForAnnounceNotificationsForProductID:(unsigned int)a0 isUpsellFlow:(BOOL)a1;


@end
