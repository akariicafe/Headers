@class NSString, NSURL, NSDictionary;

@interface DEDNotifierConfiguration : NSObject <DEDSecureArchiving, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *hostAppIdentifier;
@property (retain) NSString *localizedNotificationTitle;
@property (retain) NSString *localizedNotificationBody;
@property (retain) NSString *reviewActionLabel;
@property (retain) NSString *sendActionLabel;
@property BOOL userNotificationShouldPlaySound;
@property (retain) NSString *followupUniqueIdentifier;
@property double followupFrequency;
@property (retain) NSURL *followupReviewActionURL;
@property (retain) NSURL *followupSendActionURL;
@property (retain) NSDictionary *followupReviewActionUserInfo;
@property (retain) NSDictionary *followupSendActionUserInfo;
@property (retain) NSString *followupLocalizedTitle;
@property (retain) NSString *followupLocalizedInformativeText;
@property (retain) NSString *followupExtensionIdentifier;
@property BOOL followupUseSpringboardNotification;
@property (retain) NSURL *followupNotificationActionURL;
@property (retain) NSString *followupNotificationActionTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHostAppIdentifier:(id)a0 localizedNotificationTitle:(id)a1 localizedNotificationBody:(id)a2;

@end
