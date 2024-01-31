@class NSString, NSUUID, NSDate, REMObjectID, REMDueDateDeltaInterval;

@interface REMDueDateDeltaAlert : NSObject <NSSecureCoding, NSCopying, REMObjectIDProviding>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) REMObjectID *reminderID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMDueDateDeltaInterval *dueDateDelta;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *acknowledgedDate;
@property (readonly, nonatomic) long long minimumSupportedAppVersion;
@property (readonly, nonatomic) REMObjectID *remObjectID;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isContentEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 reminderID:(id)a1 accountID:(id)a2 dueDateDelta:(id)a3 creationDate:(id)a4 acknowledgedDate:(id)a5 minimumSupportedAppVersion:(long long)a6;

@end
