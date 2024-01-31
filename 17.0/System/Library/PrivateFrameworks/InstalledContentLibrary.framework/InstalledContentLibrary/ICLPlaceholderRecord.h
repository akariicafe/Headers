@class NSData, NSArray, NSString, NSURL, NSDate, NSNumber, ICLSinfInfo;

@interface ICLPlaceholderRecord : ICLBundleRecord <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *bundleContainerURL;
@property (nonatomic) BOOL isOnDemandInstallCapable;
@property (copy, nonatomic) NSArray *parentIdentifiers;
@property (copy, nonatomic) NSString *appManagementDomain;
@property (nonatomic) BOOL isSwiftPlaygroundsApp;
@property (nonatomic) BOOL isDeletable;
@property (nonatomic) BOOL isBeta;
@property (nonatomic) unsigned long long placeholderFailureReason;
@property (copy, nonatomic) NSString *alternateIconName;
@property (copy, nonatomic) NSDate *installDate;
@property (copy, nonatomic) NSNumber *lsInstallType;
@property (nonatomic) BOOL isWebNotificationBundle;
@property (copy, nonatomic) ICLSinfInfo *sinfInfo;
@property (copy, nonatomic) NSData *uniqueInstallID;
@property (copy, nonatomic) NSData *installSessionID;
@property (copy, nonatomic) NSString *linkedParentBundleID;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)legacyRecordDictionary;
- (id)initWithLegacyRecordDictionary:(id)a0;

@end
