@class NSString, MAAutoAssetSetPolicy;

@interface MAAutoAssetSetInfoDesire : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetSetPolicy *clientAssetSetPolicy;
@property (readonly, retain, nonatomic) NSString *desireReason;
@property (readonly, nonatomic) BOOL awaitDownloadingOfDiscovered;
@property (readonly, nonatomic) long long checkWaitTimeoutSecs;
@property (readonly, nonatomic) long long lockWaitTimeoutSecs;
@property (readonly, nonatomic) BOOL downloadProgressDesired;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initForClientAssetSetPolicy:(id)a0 reasonDesired:(id)a1 awaitingDownloadOfDiscovered:(BOOL)a2 withCheckWaitTimeout:(long long)a3 withLockWaitTimeout:(long long)a4 desiringProgress:(BOOL)a5;

@end
