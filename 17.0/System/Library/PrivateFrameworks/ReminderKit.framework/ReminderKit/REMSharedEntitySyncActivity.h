@class NSString, NSUUID, NSDate;

@interface REMSharedEntitySyncActivity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSDate *activityDate;
@property (readonly, nonatomic) long long activityType;
@property (readonly, nonatomic) NSString *authorUserRecordIDString;
@property (readonly, nonatomic) NSString *ckParentCloudObjectEntityName;
@property (readonly, nonatomic) NSString *ckParentCloudObjectIdentifier;
@property (readonly, nonatomic) NSString *ckIdentifier;
@property (readonly, nonatomic) NSString *sharedEntityName;
@property (readonly, nonatomic) NSUUID *uuidForChangeTracking;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountIdentifier:(id)a0 activityDate:(id)a1 activityType:(long long)a2 authorUserRecordIDString:(id)a3 ckParentCloudObjectEntityName:(id)a4 ckParentCloudObjectIdentifier:(id)a5 ckIdentifier:(id)a6 sharedEntityName:(id)a7 uuidForChangeTracking:(id)a8;
- (id)activityTypeDescription;

@end
