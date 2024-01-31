@class NSString, PLComputeCachePolicyConfiguration;
@protocol PLComputeCachePolicyDataSource;

@interface PLComputeCachePolicy : NSObject {
    id<PLComputeCachePolicyDataSource> _data;
}

@property (readonly, nonatomic) long long denyPolicy;
@property (readonly, nonatomic) long long allowPolicy;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) PLComputeCachePolicyConfiguration *configuration;

- (void).cxx_destruct;
- (BOOL)_isLastSnapshotDateWithinPolicy;
- (BOOL)snapshotAllowed;
- (void)_checkAllowPolicy;
- (void)_checkDenyPolicy;
- (long long)_deriveAllowPolicy;
- (long long)_deriveDenyPolicy;
- (BOOL)_isAssetCountWithinPolicy;
- (BOOL)_isiCloudTierWithinPolicy;
- (id)initWithPolicyData:(id)a0 configuration:(id)a1;
- (BOOL)snapshotRequired;

@end
