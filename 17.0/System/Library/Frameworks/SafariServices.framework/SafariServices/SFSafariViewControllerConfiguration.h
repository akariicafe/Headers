@class NSString, UIEventAttribution, SFSafariViewControllerActivityButton;

@interface SFSafariViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long _redirectNotificationBehavior;
@property (nonatomic, getter=_isEphemeral, setter=_setEphemeral:) BOOL _ephemeral;
@property (nonatomic, getter=_isPerformingAccountSecurityUpgrade, setter=_setPerformingAccountSecurityUpgrade:) BOOL _performingAccountSecurityUpgrade;
@property (nonatomic, getter=_isJITEnabled, setter=_setJITEnabled:) BOOL _jitEnabled;
@property (copy, nonatomic, setter=_setPersonaUniqueIdentifier:) NSString *_personaUniqueIdentifier;
@property (nonatomic) BOOL entersReaderIfAvailable;
@property (nonatomic) BOOL barCollapsingEnabled;
@property (copy, nonatomic) SFSafariViewControllerActivityButton *activityButton;
@property (copy, nonatomic) UIEventAttribution *eventAttribution;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
