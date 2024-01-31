@class NSString, NSData, NSURL, NSNumber;

@interface SUCoreDocumentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *releaseNotesSummary;
@property (retain, nonatomic) NSData *releaseNotes;
@property (retain, nonatomic) NSData *licenseAgreement;
@property (retain, nonatomic) NSString *humanReadableUpdateName;
@property (retain, nonatomic) NSString *humanReadableUpdateTitle;
@property (retain, nonatomic) NSString *humanReadableUpdateVersion;
@property (retain, nonatomic) NSString *humanReadableMoreInfoLink;
@property (nonatomic) BOOL notificationEnabled;
@property (retain, nonatomic) NSString *notificationTitleString;
@property (retain, nonatomic) NSString *notificationBodyString;
@property (nonatomic) BOOL recommendedUpdateEnabled;
@property (nonatomic) BOOL recommendedUpdateApplicable;
@property (retain, nonatomic) NSNumber *recommendedUpdateNotificationFrequencyDays;
@property (retain, nonatomic) NSString *recommendedUpdateMinOSVersion;
@property (retain, nonatomic) NSString *recommendedUpdateMaxOSVersion;
@property (retain, nonatomic) NSString *recommendedUpdateTitleString;
@property (retain, nonatomic) NSString *recommendedUpdateAlertBodyString;
@property (retain, nonatomic) NSString *mandatoryUpdateBodyString;
@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic) NSNumber *slaVersion;
@property (retain, nonatomic) NSURL *localBundleURL;
@property (retain, nonatomic) NSURL *serverAssetURL;
@property (retain, nonatomic) NSData *serverAssetMeasurement;
@property (retain, nonatomic) NSString *serverAssetAlgorithm;
@property (nonatomic) long long serverAssetChunkSize;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *releaseNotesSummaryFileName;
@property (retain, nonatomic) NSString *releaseNotesFileName;
@property (retain, nonatomic) NSString *licenseAgreementFileName;
@property (retain, nonatomic) NSString *preferencesIconFileName;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_extendDocumentationProperties;
- (id)_extendDocumentationPropertiesWithSimulateEvent:(id)a0;
- (id)_resourceFromBundle:(struct __CFBundle { } *)a0 forKey:(id)a1;
- (id)extendDocumentationProperties;
- (id)initWithDocumentationAsset:(id)a0;
- (id)initWithLocalBundleURL:(id)a0 attributes:(id)a1;
- (BOOL)isRecommendedUpdateApplicable;
- (id)softwareUpdateIconImage;
- (id)softwareUpdateIconImagePath;

@end
