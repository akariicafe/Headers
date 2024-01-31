@class NSURL;

@interface BCSDomainConfigItem : BCSConfigItem {
    long long _domainShardCount;
    long long _filterShardCount;
}

@property (readonly, nonatomic) long long domainShardCount;
@property (readonly, nonatomic) NSURL *domainMegaShardURL;

+ (BOOL)supportsSecureCoding;
+ (id)keysRequestedForCloudKitFetch;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRecord:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)filterShardCount;
- (id)initWithBuckets:(long long)a0 domainShards:(long long)a1 filterShards:(long long)a2 expirationDate:(id)a3;
- (id)initWithBuckets:(long long)a0 domainShards:(long long)a1 filterShards:(long long)a2 expirationDate:(id)a3 filterMegaShardURL:(id)a4 domainMegaShardURL:(id)a5 itemTTL:(id)a6;
- (id)initWithBuckets:(long long)a0 shards:(long long)a1 expirationDate:(id)a2 filterMegaShardURL:(id)a3 itemTTL:(id)a4;
- (id)initWithJSONObj:(id)a0;

@end
