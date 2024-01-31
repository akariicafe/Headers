@class NSError, NSDate;

@interface HKCloudSyncObserverStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL syncEnabled;
@property (nonatomic) BOOL accountSupportsSecureContainer;
@property (nonatomic) BOOL accountProhibitedForCloudSync;
@property (copy, nonatomic) NSDate *lastPullDate;
@property (copy, nonatomic) NSDate *lastPushDate;
@property (copy, nonatomic) NSDate *lastLitePushDate;
@property (copy, nonatomic) NSDate *lastPulledUpdateDate;
@property (copy, nonatomic) NSDate *restoreCompletionDate;
@property (copy, nonatomic) NSError *errorRequiringUserAction;
@property (nonatomic) long long dataUploadRequestStatus;
@property (copy, nonatomic) NSDate *dataUploadRequestStartDate;
@property (copy, nonatomic) NSDate *dataUploadRequestCompletionDate;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSyncEnabled:(BOOL)a0 accountSupportsSecureContainer:(BOOL)a1 accountProhibitedForCloudSync:(BOOL)a2 lastPullDate:(id)a3 lastPushDate:(id)a4 lastLitePushDate:(id)a5 lastPulledUpdateDate:(id)a6 restoreCompletionDate:(id)a7 errorRequiringUserAction:(id)a8 dataUploadRequestStatus:(long long)a9 dataUploadRequestStartDate:(id)a10 dataUploadRequestCompletionDate:(id)a11;

@end
