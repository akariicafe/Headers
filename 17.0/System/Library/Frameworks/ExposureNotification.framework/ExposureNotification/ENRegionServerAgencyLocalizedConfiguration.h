@class NSString, NSArray, NSLocale, ENRegion;

@interface ENRegionServerAgencyLocalizedConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) ENRegion *region;
@property (copy, nonatomic) NSString *agencyMessage;
@property (copy, nonatomic) NSString *agencyTurndownMessage;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *legalConsentText;
@property (copy, nonatomic) NSString *onboardingNotificationBody;
@property (copy, nonatomic) NSString *phaTelemetryOptInMessage;
@property (copy, nonatomic) NSString *regionName;
@property (copy, nonatomic) NSString *revokedNotificationBody;
@property (copy, nonatomic) NSString *revokedNotificationSubject;
@property (copy, nonatomic) NSString *symptomsOnsetDescription;
@property (copy, nonatomic) NSString *testVerificationIntroMessage;
@property (copy, nonatomic) NSString *testVerificationNotificationBody;
@property (copy, nonatomic) NSString *traveledQuestionText;
@property (copy, nonatomic) NSString *vaccinationQuestionText;
@property (copy, nonatomic) NSString *vaccinationQuestionTextAlt;
@property (copy, nonatomic) NSString *selfReportNotificationBody;
@property (copy, nonatomic) NSString *selfReportIntroMessage;
@property (copy, nonatomic) NSArray *notificationConfigurations;

+ (BOOL)getLocalizedAgencyConfiguration:(id *)a0 region:(id)a1 fromDictionary:(id)a2 locale:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRegion:(id)a0;
- (id)notificationConfigurationForName:(id)a0;

@end
