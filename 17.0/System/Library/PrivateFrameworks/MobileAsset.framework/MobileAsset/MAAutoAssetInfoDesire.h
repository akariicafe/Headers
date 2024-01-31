@class NSString, MAAutoAssetPolicy;

@interface MAAutoAssetInfoDesire : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *updateCategoryDesiredByClient;
@property (readonly, retain, nonatomic) MAAutoAssetPolicy *clientAssetPolicy;
@property (readonly, nonatomic) long long checkWaitTimeoutSecs;
@property (readonly, retain, nonatomic) NSString *desireReason;
@property (readonly, nonatomic) long long lockWaitTimeoutSecs;
@property (readonly, nonatomic) BOOL downloadProgressDesired;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDesiredCategory:(id)a0 forClientAssetPolicy:(id)a1 reasonDesired:(id)a2 withCheckWaitTimeout:(long long)a3 withLockWaitTimeout:(long long)a4 desiringProgress:(BOOL)a5;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
