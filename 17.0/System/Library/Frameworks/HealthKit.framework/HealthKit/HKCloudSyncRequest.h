@class HKContextSyncRequest, NSUUID, HKChangesSyncRequest, HKStateSyncRequest;

@interface HKCloudSyncRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) HKChangesSyncRequest *changesSyncRequest;
@property (copy, nonatomic) HKContextSyncRequest *contextSyncRequest;
@property (copy, nonatomic) HKStateSyncRequest *stateSyncRequest;
@property (copy, nonatomic) NSUUID *identifier;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeRequest:(id)a0;
- (id)requestWithChangesSyncRequest:(id)a0;
- (id)requestWithContextSyncRequest:(id)a0;
- (id)requestWithStateSyncRequest:(id)a0;

@end
