@class NSArray, ENEntity, NSString, NSURL, _TtC28HealthExposureNotificationUI27ENUIPublicHealthAgencyModel, UIImage;

@interface HealthExposureNotificationUI.ENUIPublicHealthAgencyModel : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ appBundleId;
    void /* unknown type, empty encoding */ introductoryText;
    void /* unknown type, empty encoding */ consentVersion;
    void /* unknown type, empty encoding */ regionWebsiteURL;
    void /* unknown type, empty encoding */ regionFAQWebsiteURL;
    void /* unknown type, empty encoding */ analyticsConsentText;
    void /* unknown type, empty encoding */ verificationIntroductoryText;
    void /* unknown type, empty encoding */ selfReportIntroductoryText;
    void /* unknown type, empty encoding */ verificationCodeHelpURL;
    void /* unknown type, empty encoding */ verificationSymptomOnsetText;
    void /* unknown type, empty encoding */ verificationTravelStatusText;
    void /* unknown type, empty encoding */ vaccinationQuestionText;
    void /* unknown type, empty encoding */ webReportURL;
}

@property (class, nonatomic, retain) _TtC28HealthExposureNotificationUI27ENUIPublicHealthAgencyModel *activeRegion;
@property (class, nonatomic, copy) NSArray *authorizedRegions;
@property (class, nonatomic, copy) NSArray *availableRegions;
@property (class, nonatomic, retain) ENEntity *turndownEntity;
@property (class, nonatomic, readonly) NSString *dummyRegionCountryCode;
@property (class, nonatomic, readonly) NSArray *allRegions;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ region;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *appBundleId;
@property (nonatomic, readonly) NSString *introductoryText;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ header;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ legalese;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ consentStatus;
@property (nonatomic, readonly) NSString *consentVersion;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ diagnosisKeysPreAuthorization;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isAssociatedDomainAllowed;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isPreauthorizationDomainAllowed;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isAuthorized;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ regionVersion;
@property (nonatomic, readonly) NSURL *regionWebsiteURL;
@property (nonatomic, readonly) NSURL *regionFAQWebsiteURL;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ featureFlags;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ wantsAnalytics;
@property (nonatomic) void /* unknown type, empty encoding */ analyticsConsentStatus;
@property (nonatomic, readonly) NSString *analyticsConsentText;
@property (nonatomic, readonly) NSString *verificationIntroductoryText;
@property (nonatomic, readonly) NSString *selfReportIntroductoryText;
@property (nonatomic, readonly) NSURL *verificationCodeHelpURL;
@property (nonatomic, readonly) NSString *verificationSymptomOnsetText;
@property (nonatomic, readonly) NSString *verificationTravelStatusText;
@property (nonatomic, readonly) NSString *vaccinationQuestionText;
@property (nonatomic, readonly) NSURL *webReportURL;
@property (nonatomic, readonly) BOOL isSymptomOnsetNeeded;
@property (nonatomic, readonly) BOOL isTravelStatusNeeded;
@property (nonatomic, readonly) BOOL isVaccinationQuestionNeeded;
@property (nonatomic, readonly) BOOL isAppInstalled;
@property (nonatomic, readonly) BOOL isRegionUsingApp;
@property (nonatomic, readonly) BOOL isAppInstalledAndRegionYetToBeOnboarded;
@property (nonatomic, readonly) NSString *installedAppName;
@property (nonatomic, readonly) UIImage *installedAppIcon;
@property (nonatomic, readonly) BOOL regionIsPlaceholder;

+ (id)defaultModelWithBundleId:(id)a0 isAuthorized:(BOOL)a1;
+ (void)refreshRegionsWithCompletion:(id /* block */)a0;
+ (id)regionForRegionCode:(id)a0;

- (BOOL)supportsFeatures:(unsigned int)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRegion:(id)a0 name:(id)a1 appBundleId:(id)a2 introductoryText:(id)a3 header:(id)a4 legalese:(id)a5 consentStatus:(id)a6 consentVersion:(id)a7 diagnosisKeysPreAuthorization:(id)a8 isAssociatedDomainAllowed:(BOOL)a9 isPreauthorizationDomainAllowed:(BOOL)a10 isAuthorized:(BOOL)a11 regionVersion:(long long)a12 regionWebsiteURL:(id)a13 regionFAQWebsiteURL:(id)a14 featureFlags:(unsigned int)a15 wantsAnalytics:(BOOL)a16 analyticsConsentStatus:(long long)a17 analyticsConsentText:(id)a18 verificationIntroductoryText:(id)a19 selfReportIntroductoryText:(id)a20 verificationCodeHelpURL:(id)a21 verificationSymptomOnsetText:(id)a22 verificationTravelStatusText:(id)a23 vaccinationQuestionText:(id)a24 webReportURL:(id)a25;

@end
