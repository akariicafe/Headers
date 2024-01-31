@class NSString, SUControllerDocumentation, MAAsset, NSError, NSDate, SUCoreDescriptor;

@interface SUControllerDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUControllerDocumentation *documentation;
@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic) NSString *productBuildVersion;
@property (retain, nonatomic) NSString *documentationID;
@property (retain, nonatomic) NSString *publisher;
@property (retain, nonatomic) NSString *productSystemName;
@property (retain, nonatomic) NSString *marketingVersion;
@property (retain, nonatomic) NSString *fullProductVersion;
@property (nonatomic) long long downloadSize;
@property (nonatomic) long long unarchivedSize;
@property (nonatomic) long long msuPrepareSize;
@property (nonatomic) long long installationSize;
@property (nonatomic) long long totalRequiredFreeSpace;
@property (nonatomic) BOOL userDidAcceptTermsAndConditions;
@property (nonatomic) BOOL fullReplacement;
@property (nonatomic) BOOL rampEnabled;
@property (nonatomic) BOOL willProceedWithInstallation;
@property (nonatomic) BOOL isAwaitingAdmissionControlForInstallation;
@property (retain, nonatomic) NSError *denialReasons;
@property (retain, nonatomic) MAAsset *softwareUpdateAsset;
@property (retain, nonatomic) MAAsset *documentationAsset;
@property (retain, nonatomic) NSString *releaseType;
@property (retain, nonatomic) NSDate *releaseDate;
@property (retain, nonatomic) SUCoreDescriptor *coreDescriptor;
@property (nonatomic) BOOL hasBeenAbandoned;
@property (readonly, nonatomic) long long preparationSize;
@property (readonly, retain, nonatomic) NSString *humanReadableUpdateName;
@property (nonatomic) BOOL isSupervisedPolicy;
@property (retain, nonatomic) NSString *requestedPMV;
@property (nonatomic) long long delayPeriod;

- (id)init;
- (unsigned long long)hash;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
