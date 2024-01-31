@class NSString;

@interface UNSNotificationTopicRecord : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *displayNameLocalizationKey;
@property (nonatomic) unsigned long long priority;
@property (copy, nonatomic) NSString *sortIdentifier;
@property (nonatomic) BOOL supportsAlerts;
@property (nonatomic) BOOL supportsBadges;
@property (nonatomic) BOOL supportsSounds;
@property (nonatomic) BOOL supportsLockScreen;
@property (nonatomic) BOOL supportsNotificationCenter;
@property (nonatomic) BOOL supportsCarPlay;
@property (nonatomic) BOOL supportsSpoken;
@property (nonatomic) BOOL supportsCriticalAlerts;
@property (nonatomic) BOOL supportsTimeSensitive;
@property (nonatomic) BOOL enablesAlerts;
@property (nonatomic) BOOL enablesBadges;
@property (nonatomic) BOOL enablesSounds;
@property (nonatomic) BOOL enablesLockScreen;
@property (nonatomic) BOOL enablesNotificationCenter;
@property (nonatomic) BOOL enablesCarPlay;
@property (nonatomic) BOOL enablesSpoken;
@property (nonatomic) BOOL enablesCriticalAlerts;
@property (nonatomic) BOOL enablesTimeSensitive;
@property (nonatomic) BOOL modalAlertStyle;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;

@end
